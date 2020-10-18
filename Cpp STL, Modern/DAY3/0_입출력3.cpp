// stringstream

// C++ 입출력 스트림(데이타의 흐름)은 3개 입니다.
// std::cout << "hello"
#include <iostream>	// 표준 입출력
#include <fstream>	// 파일 입출력
#include <sstream>  // 메모리 입출력 - 많은 C++ 개발자 분들이 잘 모르고 있습니다.
#include <string>
/*
int main()
{
	std::ifstream      fin("0_입출력3.cpp");
	std::istringstream iss("I am a student");

	std::string s;
//	std::cin >> s; // 표준 입력(키보드)에서 한단어 입력
//  fin      >> s; // 화일 에서 한단어 입력
//	iss		 >> s; // 메모리(iss 가 가진 문자열)에서 "한단어 입력"

	// 언제 istringstream 을 활용하는가 ?
	// 문장을 단어별로 분리하고 싶을때 => C언어 strtok() 함수로 분리합니다.
	std::istringstream iss2("we are the world");

	while(iss2 >> s)				
		std::cout << s << std::endl;
}
*/
int main()
{
	std::istringstream iss("I am a student");  // 메모리에 있는 문장열(iss)에서 입력
	std::ostringstream oss;// 메모리에 출력

//	std::cout << "hello"; // 화면에 출력
	
	oss       << "hello"; // oss가 관리하는 메모리에 출력
	std::string s = oss.str();  // oss의 메모리(버퍼)에 있는 문자열 꺼내기
	std::cout << s << std::endl; 

	// 언제 활용 할까 ?
	double d = 3.141592;	
	
	// 10 은 정수, "10"은 문자열
	// d의 값을 문자열로 변경하고 싶다.
	// C언어..
	char buf[16];
	sprintf(buf, "d = %f", d);  // "d = 3.141592" 라는 문자열이 buf에 놓이게 됩니다.
							    // 단점. buf 크기가 12이므로 문자열이 절대 12보다 크면 안됩니다.

	// 위 방식의 문제점 : d의 값에 따라 버퍼의 크기가 안전하지 않을수 있다.

	// C++ 해결책
	oss << "d = " << d;   // oss의 버퍼는 자동 증가 기능이 있어서 절대 부족하지 않다.

	std::string s2 = oss.str(); // s2 는 "d = 3.141592"

	// 즉, ostringstream 은 "숫자" => "문자열"로 바꿀때 널리 사용

}




