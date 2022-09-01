#include "../../../Source/LightHook.h"
#include <stdio.h>

static HookInformation testHook;
typedef int(*TestFunction_t)(int param1, int param2);

int __attribute__ ((noinline))TestFunction(int param1, int param2)
{
	param2 -= param1;
	param1 += param2;
	for (int i = 0; i < 10; i++)
		param1 += param2 * param2;

	param2 *= param1;
	param1 *= param2;
	for (int i = 0; i < 5; i++)
		param1 += param2 * param2;

	printf("in func: %i\n", param1);
	return param1;
}

int __attribute__ ((noinline)) HookedTestFunction()
{
	printf("hook called\n");

	TestFunction_t original = (TestFunction_t)testHook.Trampoline;
	return original(0, 2);
	//return 0;
}

int main()
{
	int output = TestFunction(0, 1);
	printf("before hook: %u\n", output);

	testHook = CreateHook((void*)&TestFunction, (void*)&HookedTestFunction);
	printf("size: %u\n", testHook.BytesToCopy);

	int status = EnableHook(&testHook);
	printf("status: %u\n", status);
	printf("trampoline: 0x%p\n", testHook.Trampoline);

	output = TestFunction(0, 1);
	printf("after hook: %u\n", output);
	return 0;
}