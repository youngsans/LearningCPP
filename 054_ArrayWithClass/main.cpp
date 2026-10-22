#include "CArr.h"
#include "stdlib.h"
#include "time.h"

int main()
{
	srand(time(nullptr));

	CArr myArr;

	for (int i = 0; i < 10; ++i)
	{
		int randNum = rand() % 100 + 1;
		myArr.PushBack(randNum);
		printf("%d\n", myArr.GetArr(i));
	}

	return 0;
}