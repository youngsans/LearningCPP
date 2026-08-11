#include <stdlib.h>
#include <stdio.h>

void PointerTest(int* ptrInt)
{
	*ptrInt = 1024;
}

/*
	주소는 정수 1Byte 단위
*/

int main()
{
	int i = 100;
	float f = 3.14f;

	int* pInt = nullptr;
		// 포인터 변수
		// 주소를 가리키는 변수
		// '아무것도 가리키지 않는다'라는 의미
		// 0을 넣은 것과 똑같다. 
		// 나는 4바이트인 Int 변수를 넣을 주소다, 다른 거 넣지 마라.
		// 다른 거 넣어도 내가 그걸 볼땐 4바이트 Int 정수로 볼거다.

	pInt = &i;
		// i라는 변수의 '주소값'을 가져온다.
	
	printf("%d\n", *pInt);
		// 100


	(*pInt) = 100;
		// i의 주소를 참조하겠다.
		// 즉 그 주소로 '가봅시다'
		// i에 값을 100으로 수정하겠다.

	pInt = (int*)&f;
		// float의 주소를 억지로 넣어도 어차피 읽을땐 4바이트 정수 int로 읽는다.

	printf("%d\n", *pInt);
		// 3.14f를 표현하는 실수표현형 이진수를 그대로 정수로 읽어들임.

	// ----------------------------------------------------------------- //

	int* ptrInt = nullptr;
	short* ptrShort = nullptr;
	char* ptrChar = nullptr;

		// 포인터 변수의 선언 자료형이 무엇이든 '포인트 변수 자체의 크기는 똑같다'
		// 단지 그 주소로 갔을때 어떤 자료형의 크기와 방식으로 해석할 것인가만 달라진다.
		// 포인터 변수의 크기는 모두 8 Byte.
		// 운영체제 별로 한 번에 처리하는 바이트 크기가 다르다 
			// x32 - 4 Byte 
			// x64 - 8 Byte
		// 메모리 주소 1칸이 1바이트니, x64는 2의 64승, 즉 한 번에 수십경 byte 칸에 접근 가능하다. 이론상 수천 기가 메모리를 쓸 수 있다.

	printf("%zu\n", sizeof(int*));		//8
	printf("%zu\n", sizeof(char*));		//8

	int intA = 1024;
	ptrInt = &intA;
	ptrInt += 1;
		// 만약 ptrInt가 저장한 주소가 100번지라면, 101이 되지 않는다.
		// 104다.
		// ptrInt는 int*이기 때문에 +1은 '다음 int 주소'로 가야 하므로, 104가 된다.

	// ---------------------------포인터와 배열--------------------------- //

	int iArray[10] = {1, 0};
		// 배열의 특징
			// 배열의 이름은 배열의 시작 주소다.
			// 배열은 메모리가 연속적인 구조다.
	*(iArray + 0) = 2;		// iArray[0] = 2;
	*(iArray + 1) = 10;		// iArray[1] = 10;
			// *(배열이름 + n)의 축약형이 배열이름[n] 이다.
			// 배열의 특정 인덱스 접근은 배열의 주소 접근이다.

	printf("%d\n", *iArray);
	printf("%d\n", *(iArray + 1));


	// ----------------------- 포인터 연습 ------------------------------- //

	// 테스트 1. 
	short sArray[10] = { 1,2,3,4,5,6,7,8,9 };
	int* pIA = (int*)sArray;
	int iData = *(short*)(pIA + 2);
	printf("iData's value is: %d\n", iData);	// 5

	// 테스트 2.
	char cArray[2] = { 1, 1 };
	short* pSA = (short*)cArray;
	iData = *pSA;
	printf("iData's value is: %d\n", iData);	// 257

	// ----------------------- 함수의 주소 전달 -------------------------- //

	int testInt = 256;
	PointerTest(&testInt);
		// testInt 자체를 바꾸고 싶다면 &를 붙여서 해당 변수의 주소를 전달해야한다.
	printf("After Function value is: %d\n", testInt);

	// -------------------------- const 포인터 --------------------------- //

	const int cIntA = 100;
		// 상수. 바뀔 수 없음
		// r-value 라고 부름.
		// 변수는 l-value.
	printf("const int cIntA: %d\n", cIntA);

	ptrInt = (int*)(&cIntA);
	*ptrInt = 300;
		// 디버거 상에서는 cIntA의 값도 300으로 바뀌지만, 컴파일러 최적화로 cIntA는 상수로 레지스터 메모리 공간에 100으로 박혀있어기 때문에, printf 함수의 %d는 레지스터의 값 100을 갖고온다.
		// 문법 오류로 잡히지 않지만, '상수'로 선언했기 때문에 상수로 (나름)똑똑하게 최적화 해주는 것.
		// 300으로 바꾸고 싶다면 volatile const int cIntA = 100; 으로 해야함.
		// 나중에 배우겠지만 휘발성 변수(?)니까 레지스터 쓰지말라는 뜻이라고 함. 
	printf("const int cIntA: %d\n", cIntA);
	 


	printf("End of Program.");
	return 0;
}