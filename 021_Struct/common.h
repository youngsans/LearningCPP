#pragma once

//정적 변수
static int g_iStatic = 0;
	// 다른 파일에 g_iStatic이 있어도(같은 이름이여도) 구별됨.


//외부 변수
extern int g_iExtern;
	// extern 자료형은 선언시 초기화를 하면 안된다.
	// 선언이 아니라 '이런 변수가 있을 것이다'라고 알려주는 것
