

// cafe.naver.com/cppmaster 게시판에서

// "3일차 사전 소스" 받으시면 됩니다.

// x86, Debug 로 설정해 주세요

// 빌드 에러 있으신 분은

// 프로젝트/속성 메뉴에서 "Windows SDK 버전" 과 "플랫폼 도구 집합" 설정해 주세요







#include <iostream>
#include <string>

// cin, cout 의 정체
// >> 와 std::getline 함수

/*
namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(const char* s) { printf("%s", s); return *this; };
	};
	ostream cout; // 결국 cout은 전역 공간에 만들어진 객체
}
*/
int main()
{
	printf("hello\n"); // C 언어! => 함수

	std::cout << "hello" << std::endl; // cout 정체.. 객체
//	std::cout.operator<<("hello");     // 결국 위 한줄의 원리

	// endl은 함수 입니다.
//	std::cout << std::endl; 
//	std::endl(std::cout); // 위 코드와 동일


	// 핵심 : "std::cin >> s" 와 "std::getline(std::cin, s)" 의 차이점

	std::string s;
//	std::cin >> s;  // "aaa bbb" 라고 입력하면 => "aaa" 즉, 단어 입력

	std::getline(std::cin, s); // 문장 입력

	std::cout << s << std::endl; // 1) "aaa bbb"
								 // 2) "aaa"
}



