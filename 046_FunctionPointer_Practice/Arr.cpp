#include "Arr.h"
#include <iostream>

void Init(dArr* _pArr)
{
	_pArr->pInt = (int*)malloc(2 * sizeof(int));
	_pArr->count = 0;
	_pArr->countMax = 2;
}

void PushBack(dArr* _pArr, int _iData)
{
	if (_pArr->count >= _pArr->countMax)
	{
		Reallocate(_pArr);
	}
	_pArr->pInt[_pArr->count++] = _iData;
}

void Reallocate(dArr* _pArr)
{
	int* pIntTemp = (int*)malloc(2 * _pArr->countMax * sizeof(int));
	for (int i = 0; i < _pArr->count; ++i)
	{
		pIntTemp[i] = _pArr->pInt[i];
	}
	free(_pArr->pInt);
	_pArr->pInt = pIntTemp;
	_pArr->countMax *= 2;
}

void Release(dArr* _pArr)
{
	free(_pArr->pInt);
}

void Sort(dArr* _pArr, void(*_func)(int*, int))
{
	_func(_pArr->pInt, _pArr->count);
}