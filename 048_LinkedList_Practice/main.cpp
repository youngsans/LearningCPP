#include "LinkedList.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main()
{
	srand(time(nullptr));

	tLinkedList myList = {};
	InitList(&myList);

	for (int i = 0; i < 10; ++i)
	{
		int randNum = rand() % 100 + 1;
		PushFront(&myList, randNum + 1);
		PushBack(&myList, randNum);
		
	}

	for (int i = 0; i < myList.iCount; ++i)
	{
		printf("%d\n", GetData(&myList, i + 1));
	}


	return 0;
}