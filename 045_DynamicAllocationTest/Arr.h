#pragma once

//가변배열이 될 구조체
typedef struct customArr
{
	int* pInt = nullptr;
	unsigned int uiCount = 0;
	unsigned int uiCountMax = 0;
}cArr;

// 구조체 초기화
void InitArr(cArr* _pArr);

// 메모리 재할당: main에서 쓰지 못하게, Arr.cpp에서만 쓸 수 있게 주석처리
// void Reallocate(cArr* _pArr);

// 값 넣기
void PushBack(cArr* _pArr, int _iData);

// 메모리 해제
void ReleaseArr(cArr* _pArr);

// 버블 정렬
void SortArr(cArr* _pArr);