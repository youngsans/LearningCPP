int main()
{
	// if, else

	int data = 0;

	if (100 && 200)
	{
		data = 100;
	}

	if (data == 100)
	{
		data = 0;
	}

	else if (data == 1)
	{
		data = 0;
	}

	switch (data)
	{
	case 100:
		data = 0;
		break;
	
	case 200:
		data = 1;
		break;

	case 0:
		data = 100;
		break;

	default:
		break;
	}

	if (data == 100)
	{
		data = 0;
	}



	return 0;
}