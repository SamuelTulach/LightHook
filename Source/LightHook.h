#ifndef LIGHT_HOOK
#define LIGHT_HOOK

/*
 * LightHook
 * webpage: https://tulach.cc
 * repo: https://github.com/SamuelTulach/LightHook
 */

#define HOOK_R (*b >> 4)
#define HOOK_C (*b & 0xF)

static const unsigned char PREFIXES[] = { 0xF0, 0xF2, 0xF3, 0x2E, 0x36, 0x3E, 0x26, 0x64, 0x65, 0x66, 0x67 };
static const unsigned char OP1_MODRM[] = { 0x62, 0x63, 0x69, 0x6B, 0xC0, 0xC1, 0xC4, 0xC5, 0xC6, 0xC7, 0xD0, 0xD1, 0xD2, 0xD3, 0xF6, 0xF7, 0xFE, 0xFF };
static const unsigned char OP1_IMM8[] = { 0x6A, 0x6B, 0x80, 0x82, 0x83, 0xA8, 0xC0, 0xC1, 0xC6, 0xCD, 0xD4, 0xD5, 0xEB };
static const unsigned char OP1_IMM32[] = { 0x68, 0x69, 0x81, 0xA9, 0xC7, 0xE8, 0xE9 };
static const unsigned char OP2_MODRM[] = { 0x0D, 0xA3, 0xA4, 0xA5, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF };

/**
 * \brief Checks if given byte is present in buffer
 * \param buffer Input buffer to search in
 * \param maxLength Buffer size in bytes
 * \param value Single byte value to search for
 * \return Non-null if found, null if not
 */
static int FindByte(const unsigned char* buffer, const unsigned long long maxLength, const unsigned char value)
{
    for (unsigned long long i = 0; i < maxLength; i++)
    {
        if (buffer[i] == value)
            return 1;
    }

    return 0;
}

/**
 * \brief Check for ModR/M byte and adjust the buffer pointer accordingly
 * \param buffer Pointer to the current buffer address
 * \param addressPrefix Instruction has legacy address size overwrite prefix
 */
static void ParseModRM(unsigned char** buffer, const int addressPrefix)
{
    const unsigned char modRm = *++ * buffer;

    if (!addressPrefix || (addressPrefix && **buffer >= 0x40))
    {
        int hasSib = 0;
        if (**buffer < 0xC0 && (**buffer & 0b111) == 0b100 && !addressPrefix)
            hasSib = 1, (*buffer)++;

        if (modRm >= 0x40 && modRm <= 0x7F)
            (*buffer)++;
        else if ((modRm <= 0x3F && (modRm & 0b111) == 0b101) || (modRm >= 0x80 && modRm <= 0xBF))
            *buffer += (addressPrefix) ? 2 : 4;
        else if (hasSib && (**buffer & 0b111) == 0b101)
            *buffer += (modRm & 0b01000000) ? 1 : 4;
    }
    else if (addressPrefix && modRm == 0x26)
        *buffer += 2;
}

/**
 * \brief Get size of basic instructions for x86_64 (AMD64) platform
 * \param address Address of instruction to get length of
 * \return Size in bytes of instruction
 */
static int GetInstructionSize(const void* address)
{
    /*
     * Based on length-disassembler by @Nomade040
     * https://github.com/Nomade040/length-disassembler
     */

    unsigned long long offset = 0;
    int operandPrefix = 0, addressPrefix = 0, rexW = 0;
    unsigned char* b = (unsigned char*)address;

    for (int i = 0; i < 14 && FindByte(PREFIXES, sizeof(PREFIXES), *b) || HOOK_R == 4; i++, b++)
    {
        if (*b == 0x66)
            operandPrefix = 1;
        else if (*b == 0x67)
            addressPrefix = 1;
        else if (HOOK_R == 4 && HOOK_C >= 8)
            rexW = 1;
    }

    if (*b == 0x0F)
    {
        b++;
        if (*b == 0x38 || *b == 0x3A)
        {
            if (*b++ == 0x3A)
                offset++;

            ParseModRM(&b, addressPrefix);
        }
        else
        {
            if (HOOK_R == 8)
                offset += 4;
            else if ((HOOK_R == 7 && HOOK_C < 4) || *b == 0xA4 || *b == 0xC2 || (*b > 0xC3 && *b <= 0xC6) || *b == 0xBA || *b == 0xAC)
                offset++;

            if (FindByte(OP2_MODRM, sizeof(OP2_MODRM), *b) || (HOOK_R != 3 && HOOK_R > 0 && HOOK_R < 7) || *b >= 0xD0 || (HOOK_R == 7 && HOOK_C != 7) || HOOK_R == 9 || HOOK_R == 0xB || (HOOK_R == 0xC && HOOK_C < 8) || (HOOK_R == 0 && HOOK_C < 4))
                ParseModRM(&b, addressPrefix);
        }
    }
    else
    {
        if ((HOOK_R == 0xE && HOOK_C < 8) || (HOOK_R == 0xB && HOOK_C < 8) || HOOK_R == 7 || (HOOK_R < 4 && (HOOK_C == 4 || HOOK_C == 0xC)) || (*b == 0xF6 && !(*(b + 1) & 48)) || FindByte(OP1_IMM8, sizeof(OP1_IMM8), *b))
            offset++;
        else if (*b == 0xC2 || *b == 0xCA)
            offset += 2;
        else if (*b == 0xC8)
            offset += 3;
        else if ((HOOK_R < 4 && (HOOK_C == 5 || HOOK_C == 0xD)) || (HOOK_R == 0xB && HOOK_C >= 8) || (*b == 0xF7 && !(*(b + 1) & 48)) || FindByte(OP1_IMM32, sizeof(OP1_IMM32), *b))
        {
            if (*b == 0xB8 || (*b >= 0xB8 && *b <= 0xBF)) // mov r64, imm64
                offset += rexW ? 8 : 4;
            else if (*b == 0xC7) // mov r/m64, imm32 (sign-extended to 64-bits)
                offset += 4;
            else if (*b == 0x69) // imul r64, r/m64, imm32
                offset += 4;
            else
                offset += (operandPrefix) ? 2 : 4;
        }
        else if (HOOK_R == 0xA && HOOK_C < 4)
            offset += (rexW) ? 8 : (addressPrefix ? 2 : 4);
        else if (*b == 0xEA || *b == 0x9A)
            offset += operandPrefix ? 4 : 6;

        if (FindByte(OP1_MODRM, sizeof(OP1_MODRM), *b) || (HOOK_R < 4 && (HOOK_C < 4 || (HOOK_C >= 8 && HOOK_C < 0xC))) || HOOK_R == 8 || (HOOK_R == 0xD && HOOK_C >= 8))
            ParseModRM(&b, addressPrefix);
    }

    return (int)(++b + offset - (unsigned char*)address);
}

/**
 * \brief Substitute for memcpy function
 * \param destination Target address to copy date into
 * \param source Source address to copy data from
 * \param size Amount of bytes to copy
 */
static void MemoryCopy(void* destination, void* source, unsigned long long size)
{
    unsigned char* dst = (unsigned char*)destination;
    unsigned char* src = (unsigned char*)source;
    for (unsigned long long i = 0; i < size; i++)
        dst[i] = src[i];
}

typedef struct _HookInformation
{
    int Enabled;
    int BytesToCopy;
    unsigned char OriginalBuffer[32];
    void* OriginalFunction;
    void* TargetFunction;
    void* Trampoline;
} HookInformation;

static const unsigned char JUMP_CODE[] = { 0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };

/**
 * \brief Prepare hook information structure and backup original function bytes that will be used for the trampoline
 * \param originalFunction Function that will be hooked
 * \param targetFunction Function that will be called
 * \return Hook information structure
 */
static HookInformation CreateHook(void* originalFunction, void* targetFunction)
{
    HookInformation information;
    information.Enabled = 0;
    information.Trampoline = 0;
    information.OriginalFunction = originalFunction;
    information.TargetFunction = targetFunction;

    int size = 0;
    while (size < sizeof(JUMP_CODE))
        size += GetInstructionSize((unsigned char*)originalFunction + size);

    information.BytesToCopy = size;
    MemoryCopy(information.OriginalBuffer, originalFunction, size);

    return information;
}

#ifdef _WIN64
#ifdef _KERNEL_MODE
#ifndef _EFI
#include <ntifs.h>
#include <intrin.h>
#endif
#else
#define WIN32_NO_STATUS
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#undef LHCopyMemory
#endif
#endif
#ifdef __linux__
#include <stdio.h>
#include <sys/mman.h>
#include <assert.h>
#include <errno.h>
#endif
#ifdef _EFI
#include <efi.h>
#include <efilib.h>
#endif

/**
 * \brief Allocate RWX memory
 * \param size Size in bytes
 * \return Pointer to allocated memory region
 */
static void* PlatformAllocate(const unsigned long long size)
{
#ifdef _EFI
    const unsigned long long numberOfPages = 1 + size / 1024;
    EFI_PHYSICAL_ADDRESS physicalAddress;
    gBS->AllocatePages(AllocateAnyPages, EfiRuntimeServicesCode, numberOfPages, &physicalAddress);
    return (void*)physicalAddress;
#endif
#ifdef _WIN64
#ifdef _KERNEL_MODE
#ifndef _EFI
    return ExAllocatePool(NonPagedPoolExecute, size);
#endif
#else
    return VirtualAlloc(0, size, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
#endif
#else
#ifdef __linux__
    return mmap(0, size, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_ANONYMOUS | MAP_PRIVATE, 0, 0);
#endif
    (void)size;
    return 0;
#endif
}

/**
 * \brief Free/release memory previously allocated with PlatformAllocate
 * \param address Pointer to memory region
 * \param size Size in bytes
 */
static void PlatformFree(void* address, const unsigned long long size)
{
#ifdef _EFI
    const unsigned long long numberOfPages = 1 + size / 1024;
    gBS->FreePages((EFI_PHYSICAL_ADDRESS)address, numberOfPages);
    return;
#endif
#ifdef _WIN64
#ifdef _KERNEL_MODE
#ifndef _EFI
    (void)size;
    ExFreePool(address);
#endif
#else
    VirtualFree(address, size, MEM_RELEASE);
#endif
#ifdef __linux__
    munmap(address, size);
#endif
#endif
}

#define PROTECTION_READ_WRITE_EXECUTE 0xfffffffffffe

/**
 * \brief Change memory protection flags in usermode, disable write protection bit in cr0 in kernel mode
 * \param address Memory location
 * \param size Size in bytes (will likely be rounded to one page)
 * \param protection Use PROTECTION_READ_WRITE_EXECUTE to make region RWX, otherwise platform specific
 * \return Original protection value
 */
static unsigned long long PlatformProtect(void* address, unsigned long long size, unsigned long long protection)
{
#ifdef _WIN64
#ifdef _KERNEL_MODE
    (void)size;
    (void)address;
    if (protection == PROTECTION_READ_WRITE_EXECUTE)
    {
        _disable();

        unsigned long long cr0 = __readcr0();
        unsigned long long originalCr0 = cr0;
        cr0 &= ~(1UL << 16);
        __writecr0(cr0);

        return originalCr0;
    }
    else
    {
        __writecr0(protection);
        _enable();
        return 0;
    }
#else
    if (protection == PROTECTION_READ_WRITE_EXECUTE)
        protection = PAGE_EXECUTE_READWRITE;

    unsigned long original;
    VirtualProtect(address, size, (unsigned long)protection, &original);
    return original;
#endif
#endif
#ifdef __linux__
    (void)size;
    if (protection == PROTECTION_READ_WRITE_EXECUTE)
        protection = PROT_READ | PROT_WRITE | PROT_EXEC;
    else
        protection = PROT_READ | PROT_EXEC; // unfortunately no way to read the original without parsing /proc/self/maps

    int pageSize = getpagesize();
    unsigned long long pageOffset = (unsigned long long)address % pageSize;
    address -= pageOffset;

    int status = mprotect(address, pageSize, protection);
    assert(status == 0);

    return protection;
#endif
}

#define CREATE_JUMP(name, targetAddress) \
	unsigned char name[sizeof(JUMP_CODE)]; \
	MemoryCopy(name, (unsigned char*)JUMP_CODE, sizeof(JUMP_CODE)); \
	*(unsigned long long*)((unsigned long long)name + 6) = (unsigned long long)targetAddress

/**
 * \brief Actually perform the trampoline hook
 * \param information Information structure created with CreateHook
 * \return Non-zero when successful, zero when fail
 */
static int EnableHook(HookInformation* information)
{
    if (information->Enabled)
        return 1;

    const int bufferSize = sizeof(JUMP_CODE) + information->BytesToCopy;
    unsigned char* buffer = (unsigned char*)PlatformAllocate(bufferSize);
    if (!buffer)
        return 0;

    information->Trampoline = buffer;
    MemoryCopy(buffer, information->OriginalBuffer, information->BytesToCopy);

    CREATE_JUMP(originalJump, information->OriginalFunction + information->BytesToCopy);
    MemoryCopy(buffer + information->BytesToCopy, originalJump, sizeof(JUMP_CODE));

    CREATE_JUMP(targetJump, information->TargetFunction);
    unsigned long long originalProtection = PlatformProtect(information->OriginalFunction, information->BytesToCopy, PROTECTION_READ_WRITE_EXECUTE);
    MemoryCopy(information->OriginalFunction, targetJump, sizeof(JUMP_CODE));
    PlatformProtect(information->OriginalFunction, information->BytesToCopy, originalProtection);

    information->Enabled = 1;
    return 1;
}

/**
 * \brief Remove the trampoline hook
 * \param information Information structure created with CreateHook
 * \return Non-zero when successful, zero when fail
 */
static int DisableHook(HookInformation* information)
{
    if (!information->Enabled)
        return 1;

    unsigned long long originalProtection = PlatformProtect(information->OriginalFunction, information->BytesToCopy, PROTECTION_READ_WRITE_EXECUTE);
    MemoryCopy(information->OriginalFunction, information->OriginalBuffer, information->BytesToCopy);
    PlatformProtect(information->OriginalFunction, information->BytesToCopy, originalProtection);

    PlatformFree(information->Trampoline, sizeof(JUMP_CODE) + information->BytesToCopy);

    information->Enabled = 0;
    return 1;
}

#endif
