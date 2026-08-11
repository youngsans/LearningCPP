#include <stdio.h>


// 구조체란 '사용자 정의 자료형' 즉, 내맘대로 만드는 자료형이다.
typedef struct _tagMyST
{
	int numA = 1;
	float numB = 2.1f;
}MYST;


typedef struct _tagBig
{
	MYST m;
	int i;
	char c;
}BIG;

int main()
{
	MYST t1 = {};
	//배열처럼 선언하면서 초기화할 수 있다.
	
	MYST t2 = { 100, 3.14f };
	//배열처럼 선언하면서 값을 바꿀 수도 있다.

	printf("%zu", sizeof(MYST));
	int iSize = sizeof(MYST);

	t1.numA = 0;
	t1.numB = 1.0f;
	
	return 0;
}