#include <stdio.h>


//구조체 자료형

typedef struct _tagMyST
{
	int a = 0;
	float f = 0.f;
}MYST;

int main()
{

	MYST myST = { 1024, 3.14 };
	MYST* ptrMyST = &myST;
	(*ptrMyST).a = 2048;

	ptrMyST->a = 1024; // (*ptrMyST).a 와 똑같다. 
	ptrMyST->f = 6.28f;

	printf("%d", myST.a);
	printf("%f", myST.f);

	return 0;
}