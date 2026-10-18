#include "Array.h"

void Sort(dArr* array, void(*SortFn)(int*, int))
{
	SortFn(array->ptrInt, array->count);
}

void SortBubble(int* _Array, int iCount)
{
	if (iCount <= 1) { return; }

	for (int i = 0; i < iCount - 1; ++i)
	{
		for (int j = 0; j < iCount - 1 - i; ++j)
		{
			if (_Array[j] > _Array[j + 1])
			{
				int iTemp = _Array[j];
				_Array[j] = _Array[j + 1];
				_Array[j + 1] = iTemp;
			}
		}
	}
}

void SortInsertion(dArr* array)
{
	for (int i = 0; i < array->count - 1; ++i)
	{
		if (array->ptrInt[i + 1] > array->ptrInt[i])
		{

		}
	}
}