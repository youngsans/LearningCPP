#include "Arr.h"
#include <iostream>

// 초기화
void InitArr(tArr* _pArr)
{
	_pArr->ptrInt = (int*)malloc(sizeof(int) * 2);
	_pArr->iCount = 0;
	_pArr->iCountMax = 2;
}

// 메모리 해제
void ReleaseArr(tArr* _pArr)
{
	free(_pArr->ptrInt);
	_pArr->iCount = 0;
	_pArr->iCountMax = 0;
}

// 메모리 재할당
void Reallocate(tArr* _pArr)
{
	/*
		처음 써 본 코드.
		하지만 현재 할당된 힙 뒤에 다른 데서 사용할 값이 들어있는 경우 힙 오염이 발생.
		바로 뒤에 붙이는게 아니라, 아예 더 큰 사이즈를 만들어서 교체해야한다.

		테스트에서 운 좋게 돼도 절대 이렇게 만들면 안된다. 힙 오염.

		_pArr->ptrInt += (int*)malloc(sizeof(int));
		++(_pArr->iCountMax);
	*/

	// 일단 기존의 두배 공간 할당
	int* pTemp = (int*)malloc(sizeof(int) * _pArr->iCountMax * 2);

	// 기존 값들을 전부 새 공간으로 복사
	for (int i = 0; i <= _pArr->iCountMax; ++i)
	{
		pTemp[i] = _pArr->ptrInt[i];
	}
	 
	// 기존 공간 메모리 해제
	free(_pArr->ptrInt);

	// _pArr->ptrInt 가 새 공간 주소를 들게한다.
	_pArr->ptrInt = pTemp;

	// 배열 최대값 카운트 변경
	_pArr->iCountMax *= 2;
}

// 값 입력
void PushBack(tArr* _pArr, int iData)
{ 
	// 공간 확인
	if (_pArr->iCount == _pArr->iCountMax)
	{
		Reallocate(_pArr);
	}

	_pArr->ptrInt[_pArr->iCount] = iData;
	++(_pArr->iCount);

	//_pArr->ptrInt[_pArr->iCount++] = iData;
	// 후위증감으로 한 줄로 쓸 수도 있다.
}
