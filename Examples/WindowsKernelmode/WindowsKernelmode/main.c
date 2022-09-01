#include "../../../Source/LightHook.h"
#include <ntifs.h>

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

	DbgPrintEx(0, 0, "[LightHook] in func: %i\n", param1);
	return param1;
}

__declspec(noinline) int HookedTestFunction()
{
	DbgPrintEx(0, 0, "[LightHook] hook called\n");

	TestFunction_t original = (TestFunction_t)testHook.Trampoline;
	return original(0, 2);
}

NTSTATUS DriverEntry()
{
	int output = TestFunction(0, 1);
	DbgPrintEx(0, 0, "[LightHook] before hook: %u\n", output);

	testHook = CreateHook((void*)&TestFunction, (void*)&HookedTestFunction);
	DbgPrintEx(0, 0, "[LightHook] size: %u\n", testHook.BytesToCopy);

	int status = EnableHook(&testHook);
	DbgPrintEx(0, 0, "[LightHook] status: %u\n", status);
	DbgPrintEx(0, 0, "[LightHook] trampoline: 0x%p\n", testHook.Trampoline);

	output = TestFunction(0, 1);
	DbgPrintEx(0, 0, "[LightHook] after hook: %u\n", output);

	return STATUS_SUCCESS;
}