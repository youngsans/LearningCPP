// 전처리기: 모든 컴파일 과정에서 제일 먼저 처리
#define HUNGRY		0x0001 // 0000 0001
#define THIRSTY		0x0002 // 0000 0010
#define TIRED		0x0004 // 0000 0100
#define HORNED		0x0008 // 0000 1000

#define BURNED		0x0010 // 0001 0000
#define FROZEN		0x0020 // ...
#define POISNED		0x0040
#define BLEACHED	0x0080
` 

// 비트 연산자: 비트 단위로 연산할 때 사용

// 비트 쉬프트
// 비트 곱, 합, xor, 반전



int main()
{
	unsigned char testByte = 1;

	// 비트 쉬프트

	testByte << 1;
		// 0000 0001 을 왼쪽으로 한칸 씩 민다. 0000 0010
	testByte <<= 1;
		// 대입까지 하려면 =를 붙인다.
	
	testByte = 10;
		// 0000 1010
	testByte <<= 1;
		// 0000 1010 → 0001 0100 즉 "2^n으로 곱한" 20이 된다.

	testByte = 13;
		// 0000 1101
	testByte >>= 1;
		// 0000 0110 왼쪽으로 밀어버림. 즉 "2^n 으로 나눈 몫" 6이 된다.

	
		
	// 비트 곱(&), 비트 합(|), 비트 xor(^), 비트 반전(~)
	
	unsigned char dataA = 9; // 0000 1001
	unsigned char dataB = 13; // 0000 1101

	unsigned char dataC = dataA & dataB; 
		// 1001 과 1101 을 자리끼리 비교해서 하나라도 0이면 0, 나머지는 1
		// 따라서 1001, 즉 9가 된다.

	dataC = ~dataC;
		// 비트를 반전 시킨다. 1001 → 0110 즉 6이 된다.

	dataC = dataA ^ dataB;
		// 자리를 비교해서 같으면 0, 다르면 1이 된다.
		// 1001과 1101 을 xor 연산하면 0100, 즉 8이 된다.

	unsigned int iStatus = 0;
	
	iStatus |= HUNGRY;
	iStatus |= THIRSTY; 

	if (iStatus & HUNGRY)
		// 배고픔 상태인지 확인하는 코드
		// iStatus의 첫번째 자리가 HUNGRY 0000 0001 처럼 1인지만 확인
	{	

	}

	iStatus &= ~HUNGRY;
		// 배고픔 상태 제거 코드
		// 그냥 암기해버리는게 편함. '이 자리 빼버리겠다'
 
}