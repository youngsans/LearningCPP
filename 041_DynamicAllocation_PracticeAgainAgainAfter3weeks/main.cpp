#include <iostream>
#include <time.h>

#include "Array.h"
#include "Sort.h"

int main()
{
	dArr myArr;
	srand(time(nullptr));
	InitArr(&myArr);

	for (int i = 0; i < 10; ++i)
	{
		int iRand = rand() % 100 + 1;
		PushBack(&myArr, iRand);
	}

	printf("--- 기존 목록 ---\n");

	for (int i = 0; i < myArr.count; ++i)
	{
		printf("%d\n", myArr.ptrInt[i]);
	}


	printf("\n--- 정렬 후 ---\n");
	
	Sort(&myArr, SortBubble);

	for (int i = 0; i < myArr.count; ++i)
	{
		printf("%d\n", myArr.ptrInt[i]);
	}

	return 0;
}
