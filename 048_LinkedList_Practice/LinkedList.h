#pragma once

typedef struct _tagNode
{
	struct _tagNode* pNextNode;
	int iData;
}tNode;

typedef struct _tagList
{
	struct _tagNode* pHeadNode;
	int iCount;	
}tLinkedList;

void InitList(tLinkedList* _pList);
void PushBack(tLinkedList* _pList, int _iData);
void PushFront(tLinkedList* _pList, int _iData);
void ReleaseList(tLinkedList* _pList);
int GetData(tLinkedList* _pList, int _iNodeCount);