#pragma once
class CArray
{
private:
	int m_iCount;
	int m_iCountMax;
	int* m_iArray;

	void Reallocate();

public:
	CArray();
	~CArray();

	int Length();
	void PushBack(int _iData);
};


