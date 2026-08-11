// 배열
	/*
		메모리가 연속적인 구조
		int iArray[10] = {};
		[4 byte][4 byte][4 byte][4 byte]....[4 byte] 10개
	*/
<


// 포인터

#include <stdio.h>

int main()
{
	int iArray[10] = { };
	iArray[9] = 1;
	iArray[1] = 0;

	iArray[4] = iArray[9] + iArray[1];

	printf("%d %d", iArray[4] , iArray[9]);


	return 0;
}
