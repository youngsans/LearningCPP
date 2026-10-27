#include "CArray.h"

CArray::CArray()
	: m_iCount(0)
	, m_iCountMax(2)
{
	m_iArray = new int[m_iCountMax];
}

CArray::~CArray()
{
	delete[] m_iArray;
}

void CArray::Reallocate()
{
	int* pTempInt = new int[m_iCountMax * 2];
	for (int i = 0; i < m_iCountMax; ++i)
	{
		pTempInt[i] = m_iArray[i];
	}
	delete[] m_iArray;
	m_iArray = pTempInt;
}


int CArray::Length()
{
	return m_iCount;
}

void CArray::PushBack(int _iData)
{
	if (m_iCount == m_iCountMax)
	{
		Reallocate();
	}
	m_iArray[m_iCount++] = _iData;
}
