#pragma once

typedef struct _tagLinkedList
{
	tNode* tHeadNode;
	int iCount;
}tList;

typedef struct _tagNode
{
	struct _tagNode* tNextNode;
	int iData;	
}tNode;

void InitLink(tList* list);
void PushBack(tList* list, int iData);	