#include <iostream>
#include "Arr.h"

int main()
{
	dArr myArray;

	Init(&myArray);

	PushBack(&myArray, 23);
	PushBack(&myArray, 432);
	PushBack(&myArray, 125);
	PushBack(&myArray, 1);
	PushBack(&myArray, 65);

	for (int i = 0; i < myArray.count; ++i)
	{
		printf("%d\n", myArray.ptrInt[i]);
	}

	SortBubble(&myArray);

	return 0;
}