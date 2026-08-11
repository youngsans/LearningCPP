unsigned int dataGlobal = 0; //전역 변수

int main()
{
	unsigned int dataA = 0; //지역 변수
	unsigned int dataB = 10;
	
	unsigned int dataC = sumNumbs(dataA, dataB);


	int iName = 0; // main의 지역변수

	{
		int iName = 0; // {}대괄호 안의 지역변수

		iName = 1; // 대괄호 안의 iName
	}

	iName = 1; // main의 iNmae


	return 0;
}

int sumNumbs(int numA, int numB)
{
	int numResult = numA + numB;

	return numResult;
}