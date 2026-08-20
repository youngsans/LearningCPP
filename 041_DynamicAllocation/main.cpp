#include <iostream>
#include "Arr.h"

// 메모리 영역
// 힙 영역(동적할당)


int main()
{
	void* ptrVoidA = malloc(100);
		// memory allocator "메모리 할당"
		// 100 byte 가 힙 영역에 만들어짐
		// 그리고 그 '주소'를 반환

		/*
			왜 void pointer를 반환하는가?

			-입력 인자를 byte 수를 받는다.
			-만들어진 byte를 순수한 주소로 반환하고, 어떤 자료형 포인터로든 받기위해서
		*/

	int* ptrIntA = nullptr;
	ptrIntA = (int*)malloc(100);
	
	// 메모리 해제
	if (ptrIntA != nullptr)
	{
		free(ptrIntA);
	}

	//------------------- 가변 배열 ----------------- //
	tArr s1;
	InitArr(&s1);

	for (int i = 0; i < 100; ++i)
	{
		PushBack(&s1, i);
		printf("%d\n", s1.ptrInt[i]);
	}

	ReleaseArr(&s1);

	return 0;
}