// C++ using : 기본 typedef에 대신하는 문법
using LREF = int&; // typedef int& LREF;
using RREF = int&&;

int main()
{
	int n = 10;

	LREF r1 = n;  // int&  r1 = n
	RREF r2 = 10; // int&& r2 = 10;
	//--------------------------------------------
	// reference collapsing(충돌)
	// 규칙 : 양쪽이 모두 && 일때만 && 로 결정
	LREF& r3 = n ; // int& &	=> int&
	RREF& r4 = n ; // int&& &	=> int&

	LREF&& r5 = n ; // int& &&	=> int&
	RREF&& r6 = 10; // int&& &&	=> int&&

	// 주의 : 사용자가 직접 충돌 코드를 작성할수는 없습니다.
	int& && r = n; // error

	// 템플릿 이나 typedef(using) 된 경우의 해석을 위해서만 사용
	foo<int&>(n);
}
template<typename T> void foo(T& a) {} // T& : int& & => int&





