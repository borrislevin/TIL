// modern C++ 교재 126page
// C++11 의 핵심 기술
int add(int a, int b) { return a + b; }

// foo 함수는 인자로 함수의 주소를 요구.
void foo(  int(*f)(int, int) )
{
	int n = f(1, 2);
}

int main()
{
	foo(add);  // ok

	// 람다 표현식 : 함수 이름이 필요한 자리에 "함수 구현 자체"를 사용하는 문법
	//					C++11 의 "핵심"!!
	//					C#, java, Python, swift 등 거의 모든 언어가 지원
	//					C언어만 아직 지원 안함
	// [] : lambda introducer
	//		람다 표현식이 시작됨을 알리는 표기법
	foo( [](int a, int b) { return a + b; } );

	int n1 = add(1, 2); // 함수이름() : 함수 호출
	int n2 = (int a, int b) { return a + b; }(1, 2); // 위와 동일한 코드! 실전에서는 이렇게 사용할일은
								// 없습니다. 주된 활용은 다음예제에서.
				
}


