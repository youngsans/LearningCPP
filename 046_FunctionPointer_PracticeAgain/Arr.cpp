#include <iostream>
#include "Arr.h"

void Init(dArr* _pArr)
{
	_pArr->pInt = (int*)malloc(2 * sizeof(int));
	_pArr->count = 0;
	_pArr->countMax = 2;
}

void PushBack(dArr* _pArr, int iData)
{
	if (_pArr->count >= _pArr->countMax)
	{
		Reallocate(_pArr);
	}
	_pArr->pInt[_pArr->count++] = iData;
}

void Reallocate(dArr* _pArr)
{
	int* ptrIntNew = (int*)malloc(_pArr->countMax * 2 * sizeof(int));
	for (int i = 0; i < _pArr->count; ++i)
	{
		ptrIntNew[i] = _pArr->pInt[i];
	}
	free(_pArr->pInt);
	_pArr->pInt = ptrIntNew;
	_pArr->countMax *= 2;
}

void Release(dArr* _pArr)
{
	free(_pArr->pInt);
}

void Sort(dArr* _pArr, void(*sortFn)(int*, int))
{
	sortFn(_pArr->pInt, _pArr->count);
}

void SortBubble(int* _pData, int _iCount)
{
	if (_iCount <= 1) { return; }
	for (int i = 0; i < _iCount - 1; ++i)
	{
		for (int j = 0; j < _iCount - 1 - i; ++j)
		{
			if (_pData[j] > _pData[j + 1])
			{
				int iTemp = _pData[j + 1];
				_pData[j + 1] = _pData[j];
				_pData[j] = iTemp;
			}
		}
	}
} 
