#pragma once

typedef struct _tabArr
{
	int*	ptrInt = nullptr;
	int		iCount = 0;
	int		iCountMax = 0;	 
}tArr;

void InitArr(tArr* _pArr);
void ReleaseArr(tArr* _pArr);
void PushBack(tArr* _pArr, int iData);

// void Reallocate(tArr* _pArr); 
// 헤더파일에서 명시를 안하면 main에서 Reallocate()를 호출할 수 없게 만들 수 있다.
