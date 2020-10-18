#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::string s1 = "hello";
//	std::string s2 = s1;			// 자원의 복사	
	std::string s2 = std::move(s1); // 자원의 이동
	
	std::cout << s1 << std::endl; // ""
	std::cout << s2 << std::endl; // "hello"


	std::vector<int> v1(10, 3); 
//	std::vector<int> v2 = v1;

	std::vector<int> v2 = std::move(v1);

	std::cout << v1.size() << std::endl; // 0
	std::cout << v2.size() << std::endl; // 10

//	A a1;
//	A a2 = a1; // a1이 사용하던 자원을 "복사"
//	A a3 = std::move(a1);	// a1이 사용하던 자원을 a3에 전달(이동, move)
							// a1은 더이상 자원 없음
}

