#pragma once
#include <iostream>

class CArr
{
private:
	int m_iCount;
	int m_iCountMax;
	int* m_pInt;

	void Reallocate();

public:
	CArr();
	~CArr();

	int GetArr(int _iCount);	
	void PushBack(int _iData);
};

