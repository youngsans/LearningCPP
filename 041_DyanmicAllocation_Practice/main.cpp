#include <iostream>
#include "Arr.h"

int main()
{
	dArr dynaArrayA;

	InitArr(&dynaArrayA);

	for (int i = 0; i < 100; ++i)
	{
		PushBack(&dynaArrayA, i);
		printf("%d\n", dynaArrayA.ptrInt[i]);
	}

	return 0;
}