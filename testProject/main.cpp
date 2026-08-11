int main()
{
	int data = 100;	

	switch (data)
	{
	case 12:
		data = 13;
		break;

	case 100:
	case 200:
	case 300:
		data = 0;
		break;
		// 이렇게 묶어서 쓸 수 도 있음

	default:
		break;
	}


	//삼항 연산자
	data == 20 ? data = 1 : data = 20;
	// 조건검사 ?  참이면  : 거짓이면   실행
	if (data == 20)
	{
		data = 1;
	}
	else
	{
		data = 20;
	}
	//같은 의미
}