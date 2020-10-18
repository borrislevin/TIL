#include <iostream>
#include <string>

int main()
{
	// C언어 문자열 : 문자열 배열 또는 문자열 포인터
	char cs1[] = "hello";
	char cs2[] = "hello";

//	if (cs1 == cs2)				// 주소 비교
	if ( strcmp(cs1, cs2) == 0)	// 문자열 비교
		std::cout << "same" << std::endl;
	else
		std::cout << "not same" << std::endl;

	// C++ : 클래스 문법으로 이미 표준에서 "string" 클래스 제공
	std::string s1 = "hello";
	std::string s2 = "hello";

	if (s1 == s2)
		std::cout << "same" << std::endl;

	std::string s3 = s1 + s2;
	std::cout << s3 << std::endl;

	// 요즘 유행하는 모든 언어(java, C#, C++, python 등) : string 타입이 있습니다.
}

// C++을 배우는 것
// 1. vector 같은 클래스를 만드는 방법을 배우는 것 => 기본 문법 과정(C++기본, 지난주)

// 2. vector 같은 C++ 표준 클래스를 사용하는 법을 배우는것 => STL 과정

// 3. C++11 이후의 변화된 문법을 배우는 것 - MODERN C++

// 4. 하나의 클래스를 만드는 것이 아니라..
//    수십개의 클래스를 만들어서 하나의 프로그램으로 발전시키는 것 => "디자인 패턴"


