#include <stdio.h>
#include <wchar.h>
#include <assert.h>

// 문자열 갯수 세기
unsigned int CountWord(const wchar_t* inputString)
{
	unsigned int returnValue = 0;

	while (inputString[returnValue] != '\0')
	{
		++returnValue;
	}
	return returnValue;
}

// 문자열 비교 (내 코드)
int CompareString(const wchar_t* first, const wchar_t* second)
{
	int i = 0;

	while (first[i] != 0 && second[i] != 0)
	{ 
		
		if (first[i] == second[i])
		{
			++i;
			continue;
		}
		else if (first[i] < second[i])
		{
			return -1;
		}
		else
		{
			return 1;
		}
	} 

	if (first[i] < second[i])
	{
		return -1;
	}
	else if (first[i] > second[i])
	{
		return 1;
	}
	else { return 0; }
}

// 강사 코드
int CmpStr(const wchar_t* _left, const wchar_t* _right)
{
	int leftLen = CountWord(_left);
	int rightLen = CountWord(_right);

	int iLoop = leftLen;
	int iReturn = 0;

	if (leftLen < rightLen)
	{
		iLoop = leftLen;
		iReturn = -1;
	}
	else if (leftLen > rightLen)
	{
		iLoop = rightLen;
		iReturn = 1;
	}

	for (int i = 0; i < iLoop; ++i)
	{
		if (_left[i] < _right[i])
		{
			return -1;
		}

		else if (_left[i] > _right[i])
		{
			return 1;
		}
	}

	return iReturn;
}

// Cluade 코드
int CmpStrBetter(const wchar_t* left, const wchar_t* right)
{
	int i = 0;
	while (left[i] != L'\0' && left[i] == right[i])
	{
		++i;
	}
	if (left[i] < right[i]) return -1;
	if (left[i] > right[i]) return 1;
	return 0;
}


int main()
{
	wchar_t stringA[10] = L"abcd";
	wchar_t stringB[10] = L"abc";

	int result = CompareString(stringA, stringB);

	printf("%d", result);

	return 0;
}