// constexpr 함수 : 인자의 값을 컴파일 시간에 알수 있으면
//					함수 수행도 컴파일 시간에 해달라.
constexpr int Add(int a, int b)
{
	return a + b;
}
int main()
{
	int n = 10;

	int x1[10]; // ok
//	int x2[n];  // error. 배열의 크기는 컴파일 시간에 알아야 한다.
				//       단, gcc 등의 일부 컴파일러는 허용.   VC++ 는 안됨

	int x3[ Add(1, 2) ]; //  ok

	int a = 1, b = 2;

//	int x4[ Add(a, b) ] ; // error. a, b가 변수 이므로 Add를 컴파일 시간에 수행 못함.

	n = Add(a, b); // 하지만, 일반 함수 처럼 실행시간에 수행은 가능.
}