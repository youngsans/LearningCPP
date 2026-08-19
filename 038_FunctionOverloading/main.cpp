#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

void Test(int a)
{
	// 오버로딩: 함수의 이름이 같아도, 인자의 개수나 자료형에 다르면 사용 가능하다.
	// 오버라이딩과 반드시 구별할 것.
}

void Test(int a, int b){}

void Test(float a){}


int main()
{
	return 0;
}