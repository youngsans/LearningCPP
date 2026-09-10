#include "Arr.h"
#include <iostream>

void Init(dArr* pArr)
{
	pArr->ptrInt = (int*)malloc(2 * sizeof(int));
	pArr->count = 0;
	pArr->maxCount = 2;
}

void PushBack(dArr* pArr, int iData)
{
	if (pArr->count >= pArr->maxCount)
	{
		Reallocate(pArr);
	}
	pArr->ptrInt[pArr->count] = iData;
	++pArr->count;
}

void Reallocate(dArr* pArr)
{
	int* ptrInt_temp = (int*)malloc(pArr->maxCount * 2 * sizeof(int));
	for (int i = 0; i < pArr->maxCount; ++i)
	{
		ptrInt_temp[i] = pArr->ptrInt[i];
	}
	pArr->maxCount *= 2;
	free(pArr->ptrInt);
	pArr->ptrInt = ptrInt_temp;	
}

void Release(dArr* pArr)
{
	free(pArr->ptrInt);
}

// 버블 정렬
//void SortBubble(dArr* pArr)
//{	
//	for (int i = 0; i < pArr->count - 1; ++i)
//	{
//		for (int j = 0; j < pArr->count - i - 1; ++j)
//		{
//			printf("------ %d 번째 비교 ------\n", i + 1);
//			printf("배열의 %d 번 값: %d\n", i, pArr->ptrInt[i]);
//			printf("배열의 %d 번 값: %d\n", i + 1, pArr->ptrInt[i + 1]);
//
//			// 두 값을 비교해서 큰 값을 뒤로 보내기
//			if (pArr->ptrInt[j] > pArr->ptrInt[j + 1])
//			{
//				int iTemp = pArr->ptrInt[j + 1];
//				pArr->ptrInt[j + 1] = pArr->ptrInt[j];
//				pArr->ptrInt[j] = iTemp;
//			}
//		}		
//	}
//	printf("\n");
//}

//위에 코드 주석화 시키고 닫은 뒤에 혼자 다시 써본 것
void BubbleSorting(dArr* pArr)
{
	for (int i = 0; i < pArr->count - 1; ++i)
	{
		for (int j = 0; j < pArr->count - 1 - i; ++j)
		{
			if (pArr->ptrInt[j] > pArr->ptrInt[j + 1])
			{
				int tempInt = pArr->ptrInt[j + 1];
				pArr->ptrInt[j + 1] = pArr->ptrInt[j];
				pArr->ptrInt[j] = tempInt;
			}
		}
	}
}