#include "stdlib.h"
#include "LinkedList.h"

void InitLink(tList* list)
{
	list->tHeadNode = nullptr;
	list->iCount = 0;
}

void PushBack(tList* list, int iData)
{
	tNode* node = (tNode*)malloc(sizeof(tNode));
	node->tNextNode = nullptr;
	node->iData = iData;

	//임시 변수 만들어주기
	tNode* tCurrentNode = list->tHeadNode;

	while (tCurrentNode == nullptr)
	{
		list->tHeadNode = node;
		tCurrentNode = 씨발...모르겠다...
	}

	
	list->iCount++;
}


