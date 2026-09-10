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

void SortBubble(dArr* pArr)
{
	if (pArr->count <= 1) { return;  }

	for (int i = 0; i < pArr->count - 1; ++i)
	{
		for (int j = 0; j < pArr->count - 1 - i; ++j)
		{
			if (pArr->ptrInt[j] > pArr->ptrInt[j + 1])
			{
				int iTemp = pArr->ptrInt[j + 1];
				pArr->ptrInt[j + 1] = pArr->ptrInt[j];
				pArr->ptrInt[j] = iTemp;
			}
		}
	}
	for (int i = 0; i < pArr->count; ++i)
	{
		printf("%d\n", pArr->ptrInt[i]);
	}
}