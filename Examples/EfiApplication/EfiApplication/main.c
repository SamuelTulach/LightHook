#define _EFI
#include "../../../Source/LightHook.h"
#include <efi.h>
#include <efilib.h>

static HookInformation testHook;
typedef int(*TestFunction_t)(int param1, int param2);

__declspec(noinline) int TestFunction(int param1, int param2)
{
	param2 -= param1;
	param1 += param2;
	for (int i = 0; i < 10; i++)
		param1 += param2 * param2;

	param2 *= param1;
	param1 *= param2;
	for (int i = 0; i < 5; i++)
		param1 += param2 * param2;

	Print(L"in func: %d\n", param1);
	return param1;
}

__declspec(noinline) int HookedTestFunction()
{
	Print(L"hook called\n");

	TestFunction_t original = (TestFunction_t)testHook.Trampoline;
	return original(0, 2);
}

EFI_STATUS EFIAPI UefiMain(EFI_HANDLE imageHandle, EFI_SYSTEM_TABLE* systemTable)
{
	InitializeLib(imageHandle, systemTable);

	int output = TestFunction(0, 1);
	Print(L"before hook: %d\n", output);

	testHook = CreateHook((void*)&TestFunction, (void*)&HookedTestFunction);
	Print(L"size: %d\n", testHook.BytesToCopy);

	int status = EnableHook(&testHook);
	Print(L"status: %d\n", status);
	Print(L"trampoline: 0x%lx\n", testHook.Trampoline);

	output = TestFunction(0, 1);
	Print(L"after hook: %d\n", output);

	return EFI_SUCCESS;
}
