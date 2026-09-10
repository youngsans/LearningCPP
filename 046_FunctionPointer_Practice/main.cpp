#include <iostream>
#include <time.h>
#include "Arr.h"
#include "Sort.h"

int main()
{
	srand(time(nullptr));
	dArr myArr;
	Init(&myArr);

	printf("---- 랜덤 생성된 배열 요소 ----");
	for (int i = 0; i < 10; ++i)
	{
		int iRandom = rand() % 1000 + 1;
		PushBack(&myArr, iRandom);
		printf("%d\n", myArr.pInt[i]);
	}

	void(*pfnBubbleSort)(int*, int) = Bubble;

	printf("---- 버블 정렬한 배열 요소 ----");
	Sort(&myArr, pfnBubbleSort);

	return 0;
}