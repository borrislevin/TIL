
/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/
// 함수를 만들지 말고, 함수를 만들수 있는 "틀(template)"을 제공하자.
// 개발자는 "틀"을 제공하고, "함수"는 컴파일러가 만들게 한다.
template<typename T> 
T square(T a)
{
	return a * a;
}

int main()
{
	// square 는 "함수"가 아닌 "틀"입니다.
	square<int>(10); // square<int>     : 틀을 사용해서 함수 생성
				     // square<int>(10) : 생성된 함수의 호출

	int n = square<int>(1.1); // (1) 1  (2) 1.21
							   // int square(int) 함수를 만들고 1.1 전달 => 결과는 1
	// 제대로 하려면
	double d = square<double>(1.1);

	// 사용자가 타입을 전달하지 않으면 컴파일러가 인자를 보고 타입결정
	square(3);  // 컴파일러가 "square<int>(3)" 로 변경
	square(3.4);
	
//	int aa;
//	std::cin >> 변수필요;  // 타입이 없이 변순느 만들수 없습니다.
}
