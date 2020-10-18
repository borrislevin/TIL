int main()
{
	int n = 10;

	// 아래 3개 규칙은 반드시 외워 두세요

	// 1. non const lvalue reference lvalue 만 가리킬수 있다.
	int& r1 = n;  // ok
	int& r2 = 10; // error

	// 2. const  lvalue reference 는 lvalue, rvalue 를 모두 가리킨다.
	const int& r3 = n;  // ok
	const int& r4 = 10; // ok

	// rvalue가 항상 const 인것은 아니다. 임시객체(Point(1,2))는 상수가 아니다.!!

	// 3. C++11 에서 새로나온 문법- rvalue reference
	//    rvalue reference 는 rvalue 만 가리킬수 있다.
	int&& r5 = n;  // error
	int&& r6 = 10; // ok

	// int&  : lvalue reference - lvalue 만 가리킨다.
	// int&& : rvalue reference - rvalue 만 가리킨다.
	// const int& : lvalue, rvalue 모두 가리킨다.

	// 언제 이개념이 사용되는가 => "move", "완벽한전달"
}

