int main()
{
	int n = 10;

	// C++98 const : 실행시간, 컴파일 시간 상수 모두 가능
	const int c1 = 10;	// ok
	const int c2 = n;	// ok

	// C++11 constexpr : 컴파일 시간 상수만 가능
	constexpr int c3 = 10; // ok
	constexpr int c4 = n;  // error
}
// constexpr : 컴파일 시간의 의미
// 1. constepxr 상수 만들기
// 2. constexpr 함수 만들기
//    => 함수 인자값을 컴파일 시간에 알수 있다면 연산도 컴파일 시간에 해달라.
constexpr int Add(int a, int b) { return a + b; }

int x[ Add(1, 2) ]; // ok. Add()함수를 컴파일 시간에 수행.