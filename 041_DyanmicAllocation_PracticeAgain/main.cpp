#include <iostream>
#include "arr.h"

int main()
{
	//dArr myArr;
	//Init(&myArr);

	//for (int i = 0; i <= 100; ++i)
	//{
	//	PushBack(&myArr, i);
	//	printf("%d\n", myArr.ptrInt[i]);
	//}

	dArr myArr2;
	Init(&myArr2);
	PushBack(&myArr2, 4);
	PushBack(&myArr2, 55);
	PushBack(&myArr2, 0);
	PushBack(&myArr2, 7);
	PushBack(&myArr2, 1);

	for (int i = 0; i < myArr2.count; ++i)
	{
		printf("%d\n", myArr2.ptrInt[i]);
	}

	printf("\n");

	BubbleSorting(&myArr2);
	
	for (int i = 0; i < myArr2.count; ++i)
	{
		printf("%d\n", myArr2.ptrInt[i]);
	}

	Release(&myArr2);

	return 0;
}