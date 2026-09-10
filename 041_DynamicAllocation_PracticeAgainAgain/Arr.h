#pragma once

typedef struct DynamicArray
{
	int	count = 0;
	int	countMax = 0;
	int* ptrInt = nullptr;
}dArr;

void Init(dArr* pArr);
void PushBack(dArr* pArr, int iData);
void Reallocate(dArr* pArr);
void Release(dArr* pArr);

void SortBubble(dArr* pArr);