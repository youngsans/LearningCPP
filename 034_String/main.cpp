#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

#include <assert.h>

// 내 인생 첫 C++ 함수
unsigned int CountWords(const wchar_t* inputString)
{
	unsigned int returnValue = 0;
	
	for (int i = 0; *(inputString + i) != '\0'; ++i)
	{
		++returnValue;
	}

	return returnValue;
}

// 개선 버전
unsigned int CountWord(const wchar_t* inputString)
{
	unsigned int returnValue = 0;

	//while (true)
	//{
	//	if (*(inputString + returnValue) == '\0')
	//	{
	//		break;
	//	}

	//	++returnValue;
	//}
	// 이것도 맞지만, if 검사가 안에 있어서 가독성이 떨어짐

	while (inputString[returnValue] != '\0')
	{
		++returnValue;
	}
	return returnValue;
}

// 이건 두번째로 직접 만들어 본 문자열 합치기 함수
void BindWords(wchar_t* firstWord, unsigned int bufferSize, const wchar_t* secondWord)
{
	unsigned int firstWordCount = CountWord(firstWord);
	unsigned int secondWordCount = CountWord(secondWord);

	if (bufferSize < (firstWordCount + secondWordCount + 1))
	{
		assert(nullptr);
	}

	int i = CountWord(firstWord);
	int j = 0;
	while (secondWord[j] != '\0')
	{
		firstWord[i + j] = secondWord[j];
		++j;
	}
}

/* 메모리 영역
	1. 스택
	2. 데이터
	3. 힙
	4. 읽기 전용(코드)
*/
int main()
{
	// char
	char charArray[10] = "Hello!";
	*(charArray + 1) = 'a';

	printf("%s", charArray);
	
	// wchar_t: short와 같은 2byte. 문자 표현을 위한 자료형.

	wchar_t wcharA = L'a';
		// 'a' 문자를 2바이트 단위로 쓰겠다는 뜻.
		// char: 1바이트
		// wchar_t: 2바이트
	
	wchar_t wcharArray[10] = L"abcdef";
		// 이런식으로 배열에 문자열로 넣을 수 있다.
		// 스택 메모리에 wcharArray라는 배열 변수를 만들고, 거기에 문자를 한 칸 씩 집어넣은 것.

	const wchar_t* ptrWchar = L"abcdef"; 
		// 위의 초기화 선언과 비슷하지만 완전히 다르다.
		/*
			-코드에 적힌 문자 리터럴 "abcdef"는 메모리의 읽기 전용(리터럴/상수 영역 .rodata)에 저장. 읽기 전용(코드 영역 .text) 과는 다르다.
			-이 문자 리털럴의 주소다.
			-읽기 전용 이기 때문에 수정이 불가능하다. 그래서 const wchar_t*로 받는다. 
			-wchar_t*로 받으면 수정이 가능해지는데, 이 주소로 가서 저장된 데이터를 수정한다는 건, 프로그램이 동작하고 있는 와중에 코드를 바꾸겠다는 뜻이기 때문에, 운영체제 단계에서 프로그램을 터뜨린다.
			-원래는 wchar_t였는데, 프로그래머들이 실수로 저 포인터로 접근해서 문자를 바꾸려고 하다가 프로그램이 터지니까 C/C++ 표준에서 막았다.
		*/

	wcharArray[1] = 'z';

	{
		wchar_t charArrayA[20] = L"great!";
		wchar_t charArrayB[10] = L"abcdef";
			// 멀티바이트 
		int iWordsCount = wcslen(charArrayB);
			// wcslen() 함수는 글자수를 세주는 함수인데, 인자로 const wchar_t*를 받는다.
			// 이 인자로 이 함수가 내가 준 주소로 가서 값을 읽기만 하고 바꾸진 않겠구나를 알아야함.

		int myFuncTest = CountWords(charArrayB);

		BindWords(charArrayA, 30, charArrayB);

		printf("%ls", charArrayA);

		int i = 0;
	}




	return 0; 
}