#include <iostream>

class CHuman
{
private:
	int m_iAge;
	float m_fHeight;

public:
	// 생성자
	// 클래스 옵젝이 만들어질때 자동으로 호출
	CHuman()
		: m_iAge(0)
		, m_fHeight(0)
	{}

	~CHuman()
	{
	}

	// 연산자 오버로딩
	CHuman& operator = (const CHuman& _Other)
	{
		this->m_iAge = _Other.m_iAge;
		this->m_fHeight = _Other.m_fHeight;

		return *this;
		// this는 이 클래스의 개체의 주소를 들고 있는 포인터고, 그걸 역참조 한다는 건, 이 함수를 호출한 개체를 리턴한다는 뜻.
	}
	

	void SetAge(int _iData)
	{
		m_iAge = _iData;

		// 정확히는 아래와 같다.
		// this는 이 함수를 호출하는 오브젝트의 타입 포인터다. void SetAge(CHuman* object, int _iData)와 같다.
		// this는 컴파일러가 자동으로 붙여주고, 생략도 가능하다. 
		this->m_iAge = _iData;

	}
};

		//레퍼런스

int numA = 1024;				
// 변수 A

int* pNumA = &numA;				
// A를 가리키는 포인터 변수

const int* pConstNumA = &numA;
// A를 가리키지만 수정할 수 없는 포인터 변수

const int* const pConstNumAConst = &numA;
// A만 가리킬 수 있고 수정도 못하는 포인터 변수

int& iRef = numA;
// A의 참조 변수.
// 원본인 A를 바꿀 수 있고 A 외 다른 변수는 참조 불가능하다.
// int* const iRef = numA;와 같다.

const int& iRef = numA;
// A를 참조하는데 원본을 바꿀 수는 없는 변수


int main()
{
	CHuman human1 = {};
	CHuman human2;

	human1.SetAge(33);


	return 0;
}