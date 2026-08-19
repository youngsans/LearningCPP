#include <stdio.h>
#include <stdlib.h>

/*

		원본 데이터(변수)가 어떻게 사용되고 있는지는 포인터와 무관하다.
		포인터는 그저 원본 데이터(주소)에 어떻게 접근할지를 나타내는 것.

		원본  변수의 자료형과 포인터의 자료형을 맞춰라.

*/


void Test(const int* ptrInt)
{
	int i = *ptrInt;
}


int main()
{
	int num1 = 0;
	
	const int* constPtrInt = &num1;
		// 포인터로 받는 변수를 상수화
		// 주소로 접근 시 값 못바꿈
		// num1 = 1; 가능. 원본이니까.

	int* const pIntConst = &num1;
		// 포인터로 받는 칸을 상수화
		// 주소가 가리키는 원본의 값을 바꿀 수 있음
		// 처음 선언시 넣는 주소를 수정 못한다는 뜻

	const int* const cptrcInt = &num1;
		// 한 번 넣은 주소를 바꿀 수 없고
		// 그 포인터 주소가 가리키는 원본의 값도 바꿀 수 없음.
	
	Test(&num1);
		// Ctrl + Shift + Space : 함수 선언부를 볼 수 있다.


	// ------------------- void pointer ------------------------ //

	void* pVoid = nullptr;
		// 주소로 갔을때 어떤 자료형을 볼지 정하지 않겠다.
		// 메모리에 적힌 이진수를 특정 데이터 타입으로 '해석'하지 않겠다.
		// 즉, 어떤 변수의 주소든 다 받을 수 있다.

		// 역참조를 하려면 자기가 데이터를 해석하는 '자료형'이 필요
		// 그래서 역참조가 불가능. *pvoid; 
		// 주소 연산도 불가능. pvoid + 1;
}

