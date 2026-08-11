#include "func.h"
#include "common.h"

int Add(int a, int b)
{
	return a + b;
	// g_i = 100; 
		// 이런 전역 변수 접근은 불가능 하다.
		// 링킹 전의 컴파일러는 이 파일만 문법 체크 한다.

}

int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}