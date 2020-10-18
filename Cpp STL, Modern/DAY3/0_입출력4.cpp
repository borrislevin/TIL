// 0_입출력4.cpp
#include <iostream>
#include <string>
#include <sstream>

int main()
{
	double d = 3.141592;

	// 숫자를 문자열로 변경하는 방법 
	// 방법 1. std::to_string() 함수   =>> C++11 에서 추가
	// 특징 : "숫자 한개" 를 문자열로
//	std::string s = std::to_string(d); // 3.141592 => "3.141592"
	std::string s = "d = " + std::to_string(d) + " 입니다."; // ok

	// 방법 2. osstringstream			=>> C++ 초기(C++98) 부터 있던 기술.
	// 특징 : "숫자를 포함한 서식"을 문자열로
	std::ostringstream oss;
//	oss << d;
	oss << "d = " << d << " 입니다";

	std::string s2 = oss.str();
}
// cppreference.com 에서 std::to_string 검색해 보세요.
// 어떤 문제를 해결하는 데 "방법이 여러가지가 있을때"
// 1. 각 방법이 나온 버전을 살펴 보자.
// 2. 각 방법의 성능을 고려 해야 한다.
//			숫자 한개만 문자열로 변경 => to_string()이 빠르다.
//			서식화된 문자열 만들기    => ostringstream 이 빠르다.