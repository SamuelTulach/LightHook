#include "catch_amalgamated.hpp"
#include "../../../Source/LightHook.h"
#include <iostream>

static BYTE buffer[1024];

#define TEST_INSTRUCTIONS(bytes) \
    memset(buffer, 0xCC, 1024); \
    constexpr size_t size = sizeof(bytes) - 1; \
    memcpy(buffer, bytes, size); \
    REQUIRE(GetInstructionSize(buffer) == size);

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