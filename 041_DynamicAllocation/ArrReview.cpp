#include "ArrReview.h"
#include <iostream>

void InitArr(cArr* _pArr)
{
	_pArr->pInt = (int*)malloc(sizeof(int) * 2);
	_pArr->uiCount = 0;
	_pArr->uiCountMax = 2;
}

void Reallocate(cArr* _pArr)
{
	int* pNew = (int*)malloc(sizeof(int) * _pArr->uiCountMax * 2);

	for (int i = 0; i < _pArr->uiCountMax; ++i)
	{
		pNew[i] = _pArr->pInt[i];
	}

	free(_pArr->pInt);
	_pArr->pInt = pNew;
	_pArr->uiCountMax *= 2;
}

void PushBack(cArr* _pArr, int _iData)
{
	if (_pArr->uiCount == _pArr->uiCountMax)
	{
		Reallocate(_pArr);
	}

	_pArr->pInt[_pArr->uiCount++] = _iData;
}

void ReleaseArr(cArr* _pArr)
{
	free(_pArr->pInt);
	_pArr->uiCount = 0;
	_pArr->uiCountMax = 0;
}
