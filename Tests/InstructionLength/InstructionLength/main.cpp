#include "catch_amalgamated.hpp"
#include "../../../Source/LightHook.h"
#include <iostream>

static BYTE buffer[1024];

#define TEST_INSTRUCTIONS(bytes) \
    memset(buffer, 0xCC, 1024); \
    constexpr size_t size = sizeof(bytes) - 1; \
    memcpy(buffer, bytes, size); \
    REQUIRE(GetInstructionSize(buffer) == size);

/*
 * Hand written tests
 */

TEST_CASE("mov QWORD PTR [rsp+0x10],rbx", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x89\x5C\x24\x10");
}

TEST_CASE("push rbp", "[single-file]")
{
    TEST_INSTRUCTIONS("\x55");
}

TEST_CASE("push r12", "[single-file]")
{
    TEST_INSTRUCTIONS("\x41\x54");
}

TEST_CASE("lea rbp,[rsp-0x380]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x8D\xAC\x24\x80\xFC\xFF\xFF");
}

TEST_CASE("sub rsp,0x480", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x81\xEC\x80\x04\x00\x00");
}

TEST_CASE("rex.W call QWORD PTR [rip+0xb992]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xFF\x15\x92\xB9\x00\x00");
}

TEST_CASE("test rax,rax", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\x85\xC0");
}

TEST_CASE("rex.W jmp QWORD PTR [rip+0x18fc6]", "[single-file]")
{
    TEST_INSTRUCTIONS("\x48\xFF\x25\xC6\x8F\x01\x0");
}

TEST_CASE("jmp 0x7", "[single-file]")
{
    TEST_INSTRUCTIONS("\xEB\x05");
}

/*
 * Auto-generated tests
 */
#include "generated.h"