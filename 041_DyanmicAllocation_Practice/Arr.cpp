#include <iostream>
#include "Arr.h"

void InitArr(dArr* pArr)
{
	pArr->ptrInt = (int*)malloc(8);
	pArr->maxCount = 8 / sizeof(int);
	pArr->currentCount = 0;
}

void PushBack(dArr* pArr, int value)
{
	if (pArr->currentCount == pArr->maxCount)
	{
		ReallocateArr(pArr);
	}
	pArr->ptrInt[pArr->currentCount++] = value;
}

void ReallocateArr(dArr* pArr)
{
	int* ptrNewInt = (int*)malloc(pArr->maxCount * sizeof(int) *2);
	for (int i = 0; i < pArr->maxCount; ++i)
	{
		ptrNewInt[i] = pArr->ptrInt[i];
	}
	pArr->ptrInt = ptrNewInt;
	pArr->maxCount *= 2;
	free(pArr->ptrInt);
}

void ReleaseArr(dArr* pArr)
{
	free(pArr);
}
