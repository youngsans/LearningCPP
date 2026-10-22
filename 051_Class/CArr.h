#pragma once
#include <iostream>

class CArr
{
private:
	int m_iCount;
	int m_iCountMax;
	int* m_pInt;

	void Reallocate()
	{
		m_iCountMax *= 2;
		int* pTempInt = (int*)malloc(sizeof(int) * m_iCountMax);

		for (int i = 0; i < m_iCount; ++i)
		{
			pTempInt[i] = m_pInt[i];
		}
		free(m_pInt);
		m_pInt = pTempInt;
	}

public:

	CArr()
		: m_iCount(0)
		, m_iCountMax(2)
	{
		m_pInt = (int*)malloc(sizeof(int) * m_iCountMax);
	}

	int GetArr(int _iCount)
	{
		if (_iCount > m_iCountMax)
		{
			return -1;
		}
		else
		{
			return m_pInt[_iCount];
		}		
	}

	void PushBack(int _iData)
	{
		if (m_iCount == m_iCountMax)
		{
			Reallocate();
		}
		m_pInt[m_iCount++] = _iData;
	}

};

