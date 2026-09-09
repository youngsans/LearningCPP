#include <iostream>
#include "ArrReview.h"

int main()
{
	cArr myArr1;

	InitArr(&myArr1);

	for (int i = 0; i < 100; ++i)
	{
		PushBack(&myArr1, i);
		printf("%d\n", myArr1.pInt[i]);
	}

	ReleaseArr(&myArr1);


	return 0;
}