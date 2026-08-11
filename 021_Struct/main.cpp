//변수의 종류
/*
	-지역 변수
	-전역 변수
	-정적 변수(static)
		:
	-외부 변수(extern)
*/

// 메모리의 영역
/*
	-스택 영역
		: 함수의 변수들이 사용
	-힙 영역
		: 동적 할당, 포인터
	-읽기 전용(코드, ROM)

	-데이터 영역
		: 전역, 정적, 외부 변수가 사용
*/

// 전역 변수
int g_i = 0; //Data 영역. 
// 프로그램 시작 시 메모리 점유
// 프로그램 종료 시 해제

// 외부 변수
int g_iExtern = 0;

#include <stdio.h>
#include "func.h"
	// Add()가 func.cpp(다른 파일)에 구현되어 있더라도, 같은 프로젝트면 링커가 연결해준다.
#include "common.h"

void Test() // 함수를 선언만 해둘 수 있다. 링커가 연결해줌.
{
	static int g_iStaticInFunc = 0;
	
	// ***** 중요 ****** 
	
	// 함수 안에 static 변수가 초기화 선언 되면, 최초 실행 후 작동하지 않음.
	// '이 함수에서 선언된 정적변수의 초기값이 0'이라고 알려주는 것.
}

// 정적 변수
// 메모리의 데이터 영역에 할당됨
// 선언된 곳 이외에서는 접근 불가
static int g_iStatic = 0;

int main()
{ 
	g_i = 0;

	Test();
	Test();
	Test();
	printf("%d", Add(1, 20));

	printf("%d", Sub(1, 20));

	printf("%d", Mul(1, 20));

	return 0;
}

void Test()
{
	++g_i;
}
