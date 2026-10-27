#include "CArr.h"

CArr::CArr()
	: m_iCount(0)
	, m_iCountMax(2)
{
	m_pInt = new int[2];
}

CArr::~CArr()
{
	delete[] m_pInt; 
}

void CArr::Reallocate()
{
	m_iCountMax *= 2;
	int* pTempInt = new int[m_iCountMax];

	for (int i = 0; i < m_iCount; ++i)
	{
		pTempInt[i] = m_pInt[i];
	}
	delete[] m_pInt;
	m_pInt = pTempInt;
}

int CArr::GetArr(int _iCount)
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

void CArr::PushBack(int _iData)
{
	if (m_iCount == m_iCountMax)
	{
		Reallocate();
	}
	m_pInt[m_iCount++] = _iData;
}