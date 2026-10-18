#pragma once
#include "Array.h"

void Sort(dArr* array, void(*SortFn)(int*, int));
void SortBubble(int* _Array, int iCount);
void SortInsertion(dArr* array);