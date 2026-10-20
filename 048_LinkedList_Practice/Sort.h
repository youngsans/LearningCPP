#pragma once
#include "LinkedList.h"

void SortList(tLinkedList* _pList, void(*_pSortFn)(tLinkedList* _pList, int _iCount));
void BubbleSort();