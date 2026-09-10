#include "Sort.h"
#include <iostream>

void Bubble(int* _pData, int _iCount)
{
	if (_iCount <= 1) { return; }

	for (int i = 0; i < _iCount - 1; ++i)
	{
		for (int j = 0; j < _iCount - i - 1; ++j)
		{
			if (_pData[j] > _pData[j + 1])
			{
				int iTemp = _pData[j + 1];
				_pData[j + 1] = _pData[j];
				_pData[j] = iTemp;
			}
		}
	}
	for (int i = 0; i < _iCount; ++i)
	{
		printf("%d\n", _pData[i]);
	}
}
