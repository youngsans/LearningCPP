#pragma once

typedef struct DynamicArray
{
	int* pInt = nullptr;
	int	count = 0;
	int	countMax = 0;
}dArr;

void Init(dArr* _pArr);
void PushBack(dArr* _pArr, int _iData);
void Reallocate(dArr* _pArr);
void Release(dArr* _pArr);

void Sort(dArr* _pArr, void(*_func)(int*, int));