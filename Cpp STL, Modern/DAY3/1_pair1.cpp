#include <iostream>

// pair : 2개의 임의의 타입을 보관하는 자료구조(구조체)
// 아래 코드가 이미 C++ 표준에 있습니다.
template<typename T, typename U>
struct pair
{
	T first;
	U second;
	pair(const T& a, const U& b) : first(a), second(b) {}
};

int main()
{
//	pair<int, double> p(1, 2.1);
	std::pair<int, double> p(1, 2.1); // C++ 표준의 pair, 구현 원리는 위와 유사

	std::cout << p.first  << std::endl; // 1
	std::cout << p.second << std::endl; // 2.1
}
// pair 의 대표적 활용 - 함수 반환값을 2개로 하고 싶을때
std::pair<int, double> foo()
{
	// 함수가 2개의 값을 반환하고 싶다
	std::pair<int, double> ret(1, 3.4);
	return ret;
}


