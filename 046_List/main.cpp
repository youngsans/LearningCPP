#include <iostream>
#include <time.h>
#include "Arr.h"
/*
	-분기가 매번 검사 될때.
		A 상태면 1 함수 호출
		B 상태면 3 함수 호출
		C 상태면 2 함수 호출
		이런식...
	-내가 기능을 만들었는데, 내가 만든 기능이 다른 사람의 기능을 갖다 쓸 때.
*/


void SortBubble(int* _pInt, int _count)
{
	if (_count <= 1) { return; }

	for (int i = 0; i < _count - 1; ++i)
	{
		for (int j = 0; j < _count - 1 - i; ++j)
		{
			if (_pInt[j] > _pInt[j + 1])
			{
				int iTemp = _pInt[j + 1];
				_pInt[j + 1] = _pInt[j];
				_pInt[j] = iTemp;
			}
		}
	}
	for (int i = 0; i < _count; ++i)
	{
		printf("%d\n", _pInt[i]);
	}
}

int main()
{
	// 프로그램이 실행될 때 '한 번' random에 넣을 시드를 시간을 기준으로 생성
	srand(time(nullptr));

	// 함수 포인터는 선언 당시 형태와 매칭되는 함수의 주소만 받을 수 있다.
	void(*pSortBubble)(int*, int) = SortBubble;

	dArr myArr;
	Init(&myArr);

	for (int i = 0; i < 10; ++i)
	{
		int iRandom = rand() % 100 + 1;
		PushBack(&myArr, iRandom);
	}

	printf("---- 랜덤으로 배열 요소 생성 ----\n");
	for (int i = 0; i < myArr.count; ++i)
	{
		printf("%d\n", myArr.ptrInt[i]);
	}
	printf("\n");


	printf("---- 함수 포인터로 버블 정렬 실행 ----\n");
	Sort(&myArr, &SortBubble);

	return 0;
}