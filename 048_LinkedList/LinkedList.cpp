#include "LinkedList.h"
#include "stdlib.h"

void InitList(tList* _pList)
{
	_pList->iCount = 0;
	_pList->pHeadNode = nullptr;
}

void PushBack(tList* _pList, int _iData)
{
	tNode* pNode = (tNode*)malloc(sizeof(tNode));
	pNode->pNextNode = nullptr;
	pNode->iData = _iData;

	if (_pList->pHeadNode == nullptr)
	{
		_pList->pHeadNode = pNode;
	}
	else
	{
		tNode* pCurrentNode = _pList->pHeadNode;
		while (pCurrentNode->pNextNode != nullptr)
			//이 조건식은 (pCurrentNode->pNextNode)으로 쓸 수도 있다. 0(nullptr)이 아니면 모두 참이기에.
			//하지만 nullptr 과 0구분을 위해 명시적으로 적는게 좋다.
		{
			pCurrentNode = pCurrentNode->pNextNode;
		}
		pCurrentNode->pNextNode = pNode; 
	}
	++_pList->iCount;
}

//입력한 순번의 값을 뱉는 함수
int GetData(tList* _pList, int _iCount)
{
	tNode* node = _pList->pHeadNode;

	// 노드가 1개일 떄
	if (node->pNextNode == nullptr)
	{
		return node->iData;
	}

	// 노드가 2개 이상일 떄
	else
	{
		for (int i = 1; i < _pList->iCount; ++i)
		{
			node = node->pNextNode;
		}
		return node->iData;
	}	
}

void ReleaseList(tList* _pList)
{
	tNode* pDeleteNode = _pList->pHeadNode;

	while (pDeleteNode != nullptr)
	{
		tNode* pNestNode = pDeleteNode->pNextNode;
		free(pDeleteNode);
		pDeleteNode = pNestNode;
	}

	free(_pList);
}
