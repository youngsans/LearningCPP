#include "Array.h"
#include <iostream>

void InitArr(dArr* array)
{
	array->ptrInt = (int*)malloc(sizeof(int) * 2);
	array->countMax = 2;
}

void PushBack(dArr* array, int iData)
{
	if (array->count == array->countMax)
	{
		Reallocate(array);
	}
	array->ptrInt[array->count++] = iData;
}

void Reallocate(dArr* array)
{
	int* newPtrInt = (int*)malloc(sizeof(int) * array->countMax * 2);

	for (int i = 0; i < array->countMax; ++i)
	{
		newPtrInt[i] = array->ptrInt[i];
	}
	array->ptrInt = newPtrInt;
	free(newPtrInt);
	array->countMax *= 2;
}

void Release(dArr* array)
{
	free(array->ptrInt);
}