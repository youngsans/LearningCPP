#include <iostream>
#include "Array.h"

int main()
{
	dArr myArr;
	InitArr(&myArr);
	for (int i = 0; i < 100; ++i)
	{
		PushBack(&myArr, i);
		printf("%d\n", myArr.ptrInt[i]);
	}

	return 0;
}
