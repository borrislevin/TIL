// literal.cpp
#include <iostream>

class Meter
{
	int value;
public:
	Meter(int n) : value(n) {}
};

// 정수 뒤에 붙는 접미사를 만들때는 인자를 반드시 "unsigned long long " 사용
// unsigned long long: 64비트 정수

// 주의 : 사용자가 만들때는 반드시 _ 로 시작해야 합니다.
Meter operator""_m(unsigned long long n)
{
	return Meter(n);
}

int main()
{
	Meter a = 3_m; // operator""m(3) 으로 해석됩니다.

//	3.4g; // operator""g(long double) 을 찾는다.
}



/*
int main()
{
	float f1 = 3.4f;   // 3.4 : double     3.4f : float

	// 10 : int    10l : long

	Meter a = 3m; // operator""m(3) 으로 해석됩니다.

//	Gram  b = 3g;

//	Sleep(20ms);
}

*/
