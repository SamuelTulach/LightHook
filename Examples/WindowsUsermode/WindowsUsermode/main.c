#include "../../../Source/LightHook.h"
#include <stdio.h>

int TestFunction(int param1, int param2)
{
	// Do complex math
	param2 -= param1;
	param1 += param2;
	for (int i = 0; i < 10; i++)
		param1 += param2 * param2;

	printf("param1: %i\n", param1);
	return param1;
}

int HookedTestFunction()
{
	printf("Hook called\n");
	return 0;
}

int main()
{
	HookInformation information = CreateHook((void*)&TestFunction, (void*)&HookedTestFunction);
	printf("size: %i\n", information.BytesToCopy);
	return 0;
}
