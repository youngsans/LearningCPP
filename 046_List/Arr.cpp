#include "Arr.h"
#include <iostream>	

void Init(dArr* pArr)
{
	pArr->ptrInt = (int*)malloc(2 * sizeof(int));
	pArr->count = 0;
	pArr->countMax = 2;
}

void PushBack(dArr* pArr, int iData)
{
	if (pArr->count >= pArr->countMax)
	{
		Reallocate(pArr);
	}
	pArr->ptrInt[pArr->count++] = iData;
}

void Reallocate(dArr* pArr)
{
	int* ptrInt_new = (int*)malloc(pArr->countMax * 2 * sizeof(int));
	for (int i = 0; i < pArr->count; ++i)
	{
		ptrInt_new[i] = pArr->ptrInt[i];
	}
	free(pArr->ptrInt);
	pArr->ptrInt = ptrInt_new;
	pArr->countMax *= 2;

}

void Release(dArr* pArr)
{
	free(pArr->ptrInt);
}

void Sort(dArr* pArr, void(*SortFunc)(int*, int))
{
	SortFunc(pArr->ptrInt, pArr->count);
}

