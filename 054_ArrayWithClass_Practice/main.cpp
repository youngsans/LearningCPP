#include <iostream>
#include "stdlib.h"
#include "CArray.h"

int main()
{
	srand(time(nullptr));
	CArray myArr;
	
	for (int i = 0; i < 100; ++i)
	{
		int randNum = rand() % 100 + 1;
		myArr.PushBack(randNum);
	}

	for (int i = 0; i < myArr.Length(); ++i)
	{
		printf("%d\n", myArr
	}


	return 0;
}