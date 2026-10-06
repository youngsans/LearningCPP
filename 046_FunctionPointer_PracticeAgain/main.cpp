#include <iostream>
#include <time.h>
#include "Arr.h"

int main()
{
	srand(time(nullptr));

	dArr myArr;
	Init(&myArr);

	void(*pFnSortBubble)(int*, int) = SortBubble;

	printf("---- 랜덤으로 배열 요소 생성 ----\n");
	for (int i = 0; i < 10; ++i)
	{
		PushBack(&myArr, rand() % 100 + 1);
		printf("%d\n", myArr.pInt[i]);
	}

	printf("---- 버블 정렬 실행 ----\n");
	Sort(&myArr, pFnSortBubble);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", myArr.pInt[i]);
	}

	return 0;
}