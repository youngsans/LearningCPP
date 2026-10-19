#include "LinkedList.h"
#include "time.h"
#include "stdlib.h"
#include "stdio.h"

int main()
{
	srand(time(nullptr));
	tList myList = {};
	InitList(&myList);

	for (int i = 0; i < 10; ++i)
	{
		int randNum = rand() % 100 + 1;
		PushBack(&myList, randNum);
		printf("%d\n", GetData(&myList, i + 1));
	}
	return 0;
}