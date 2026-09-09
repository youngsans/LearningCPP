#include <iostream>

//매개 변수를 주소로 받아야함 (엠퍼샌드 필요)
int ChangeValue(int* p)
{
	*p = 7;
	return 0;
}

//받은 매개 변수의 레퍼런스를 만듬 (앰퍼샌드 불필요)
int ChangeRefValue(int& r)
{
	r = 2048;
	return 0;
}

int main()
{
	int numA = 3;
	int numB = 1024;
	int& anotherNumber = numA;
	// 변수 nubmer를 참조하는 레퍼런스 변수
	// 선언 시 초기화(참조)를 같이 해야한다.
	// 포인터와 달리 컴파일러가 메모리 공간을 할당해두지 않는다.
	
	anotherNumber = numB;
	// number에 numB를 대입하겠다는 뜻. numB를 참조하는게 아니라.

	anotherNumber = 6;

	std::cout << numA << std::endl;				// 3
	std::cout << anotherNumber << std::endl;	// 3
	ChangeValue(&numA);	
	std::cout << numA << std::endl;				// 7
	std::cout << anotherNumber << std::endl;	// 7
	
	std::cout << numB << std::endl;				// 1024
	ChangeRefValue(numB);
	std::cout << numB << std::endl;				// 2048
}