#pragma once

typedef struct _tagNode
{
	struct _tagNode* pNextNode = nullptr;
	int iData = 0;
}tNode;

typedef struct _tagLinkedList
{
	tNode* pHeadNode;
	int iCount;
}tList;

void InitList(tList* _pList);
void PushBack(tList* _pList, int _iData);
int GetData(tList* _pList, int _iCount);
void ReleaseList(tList* _pList);