#include <stdio.h>
#include <stdlib.h>

void Test(int* ptrInt)
{
	*ptrInt = 1024;
}


int main()
{
	int num1 = 0;
	
	const int* constPtrInt = &num1;
		// constPtrInt가 받은 주소가 가리키는 변수를 바꿀 수 없는 포인터 변수
		// 주소를 넘겨준 변수는 마음대로 변경할 수 있다.
		// 오직 포인터 변수를 통해 값을 못바꾸게 하는 것.

	int* const pIntConst = &num1; 
		// 포인터 변수 자체가 상수화
		// 포인터가 num1의 주소가 아닌 다른 주소로 바꾸는걸 금지
		// 포인터로 num1의 값을 변경할 수 있다.

	
}

