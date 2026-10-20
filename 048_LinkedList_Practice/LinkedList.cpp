#include "LinkedList.h"
#include "stdlib.h"

void InitList(tLinkedList* _pList)
{
	_pList->pHeadNode = nullptr;
	_pList->iCount = 0;
}

void PushBack(tLinkedList* _pList, int _iData)
{
	tNode* pNewNode = (tNode*)malloc(sizeof(tNode));
	pNewNode->iData = _iData;
	pNewNode->pNextNode = nullptr;
	
	if (_pList->pHeadNode == nullptr)
	{
		_pList->pHeadNode = pNewNode;
	}
	else
	{
		tNode* pFinalNode = _pList->pHeadNode;
		while (pFinalNode->pNextNode != nullptr)
		{
			pFinalNode = pFinalNode->pNextNode;
		}
		pFinalNode->pNextNode = pNewNode;
	}
	++_pList->iCount;
}

void PushFront(tLinkedList* _pList, int _iData)
{	
	tNode* pPreviousHead = _pList->pHeadNode;

	_pList->pHeadNode = (tNode*)malloc(sizeof(tNode));
	_pList->pHeadNode->iData = _iData;
	_pList->pHeadNode->pNextNode = pPreviousHead;

	++_pList->iCount;
}

void ReleaseList(tLinkedList* _pList)
{
	// 노드가 하나도 없으면?
	if (_pList->pHeadNode == nullptr)
	{
		free(_pList);
	}
	// 노드가 하나라도 있으면?
	else
	{
		tNode* pDeleteNode = _pList->pHeadNode;
		while (pDeleteNode->pNextNode != nullptr)
		{
			tNode* pTempNode = pDeleteNode->pNextNode;
			free(pDeleteNode);
			pDeleteNode = pTempNode;
		}
		free(_pList);
	}
}

int GetData(tLinkedList* _pList, int _iNodeCount)
{
	// 노드가 한 개도 없을대
	if (_pList->pHeadNode == nullptr)
	{
		return -1;
	}
	// 노드가 한개라도 있으면
	tNode* pTargetNode = _pList->pHeadNode;
	for (int i = 1; i < _iNodeCount; ++i)
	{
		pTargetNode = pTargetNode->pNextNode;
	}	
	return pTargetNode->iData;
}
