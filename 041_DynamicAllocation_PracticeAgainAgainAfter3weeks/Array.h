#pragma once

typedef struct DynamicArray
{
	int count = 0;
	int countMax = 0;
	int* ptrInt = nullptr;
}dArr;

void InitArr(dArr* array);
void PushBack(dArr* array, int iData);
void Reallocate(dArr* array);
void Release(dArr* array);