#pragma once

typedef struct dynamicArray
{
	int	maxCount = 0;
	int	currentCount = 0;

	int* ptrInt = nullptr;

}	dArr;

void InitArr(dArr* pArr);
void PushBack(dArr* pArr, int value);
void ReallocateArr(dArr* pArr);
void ReleaseArr(dArr* pArr);
