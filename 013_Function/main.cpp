// 프로그램을 실행한다는 것은 프로그램의 첫번째 함수, main을 호출한다는 것.
// 반환(return) 한다는 것은 함수의 종료를 의미.
// 프로그램을 실행하면 변수가 모두 메모리에 올라간다.

// Stack	:후입선출
// Queue	:후입후출

// 함수가 사용하는 메모리는 'Stack 메모리 영역'
// main 함수가 호출되는 순간 함수 내에서 필요한 변수의 메모리 영역을 모두 잡아둔다.
// 함수가 return 하는 순간 스택에서 사라진다.
// 함수가 호출 될때마다 메모리가 잡혔다 사라졌다 반복

#include <stdio.h>

int sum(int a, int b)
{
	return a + b; 
}

// 내가 짠 펙토리얼 코드
int factorial(int num)
{
	int result = 1;

	if (num == 0)
	{
		return 1;
	}

	else
	{
		for (int i = 1; i <= num; ++i)
		{
			result *= i;			
		}
		return result;
	}
	
}

// 강사가 짠 펙토리얼 코드. 2부터 시작해서 if 분기 없이 처리 가능함.
int Factorial(int num)
{
	int result = 1;
	for (int j = 0; j < num - 1; ++j)
	{
		result *= (j + 2);
	}
	return result;
}


/*
	<재귀 함수>
	- 함수 안에서 자기 자신을 호출함
	- 가독성이 높고 구현하기 직관적
	- 성능이 떨어짐
*/

// 재귀함수로 피보나치 나열
// 주어진 번째의 피보나치를 출력
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 ...




int main()
{
	int numA = 100;
	int numB = 7;

	int numC = sum(numA, numB);

	for (int i = 0; i < 10; ++i)
	{
		//범위가 확실한 반복
		printf("Output Test\n");

		continue; // 다음 반복으로 그냥 넘겨버림

		break; // 반복문을 나가버림
		
	}

	// 피보나치 반복문
	int count = 10;
	int previousNum = 0;
	int result = 1;

	for (int i = 4; i < count; ++i)
	{
		if (count == 1)
		{
			result = 0;
			break;
		}
		else if (count == 2)
		{
			result = 1;
			break;
		}
		else if (count == 3)
		{
			result = 1;
			break;
		}
		else
		{
			result += previousNum;
			previousNum = result;
		}
		
	}



	int dataA = 0;
	float dataB = 3.14f;
	while (dataA < 4)
	{
		printf("While Output Test: %d \n", dataA); 
			// %d는 뒤에 오는 정수형 변수 값을 문자열로 변환
		printf("While Output Test: %f \n", dataB);
			// %f는 실수형 변수
		++dataA;
	}

	printf("Factorial: %d\n", Factorial(5));
	printf("Fibonacci: %d\n", result);

	return 0;
}

// 지정한 구문 주석			: Ctrl + K, C
// 지정한 구문 주석 해제		: Ctrl + K, U
// 세로로 다중 드래그			: Alt + 드래그

// 디버깅 시작					: F5
// 디버깅 중 다음 중단점까지 이동	:F5
// 중단점 설정/해제				: F9
// 프로시저 단위로 실행			: F10
// 한 세부 단계씩 실행			: F11

