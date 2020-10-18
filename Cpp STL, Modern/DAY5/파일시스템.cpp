#include <iostream>
#include <filesystem>

int main()
{
	// 디렉토리 생성
	std::filesystem::create_directories("D:\\AAA"); // 원하는 디렉토리 넣어 보세요.
	
	// 아래 코드가 Windows 디렉토리 안의 모든 요소를 열거하는 코드 입니다.
	std::filesystem::directory_iterator di("C:\\Windows");
//	++di;

	for (auto p : di)
	{
		std::cout << p.path() << std::endl;
	}
}
// cppreference.com 의 첫번째 화면에 와보세요..

// 빌드해서 에러 있는지 확인해 보세요
// g++ 최신버전			: C++14가 디폴트
// visual C++ 2017/2019 : C++14가 디폴트

// C++ 17을 사용하려면

// g++ 소스이름.cpp -std=c++17

// VC : /std:c++latest   또는 /std:c++17   옵션 추가.


// vs2019 : C++17 을 모두 지원, C++20 도 일부 지원
// vs2017 : C++17 을 일부 지원,