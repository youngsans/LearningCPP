#include <iostream>
#include "Arr.h"



int main()
{
	cArr myArr1;

	InitArr(&myArr1);

	PushBack(&myArr1, 7);
	PushBack(&myArr1, 29);
	PushBack(&myArr1, 13);
	PushBack(&myArr1, 45);
	PushBack(&myArr1, 1);

	SortArr(&myArr1);

	for (int i = 0; i < myArr1.uiCountMax; ++i)
	{
		printf("%d\n", myArr1.pInt[i]);
	}

	ReleaseArr(&myArr1);


	return 0;
}