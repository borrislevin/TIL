// 실습1.cpp
#include <iostream>
#include <sstream>
#include <string>

// 객체지향 설계 1. 프로그램의 기능을 잘 분석해서 필요한 타입을 주의깊게 설계 한다.
class People
{
	std::string name;
	int         age;
	std::string address;
public:
	People(const std::string& n, int a, const std::string& addr = "UNKNOWN")
		: name(n), age(a), address(addr) {}

	// private 멤버에 대한 getter 와 setter를 고려해야 합니다.
	std::string  get_name() const { return name; }
	std::string  get_addr() const { return address; }
	int          get_age()  const { return age; }

	// setter는 필요한 멤버에 대해서만 주의 있게 제공.

	// 다양한 유틸리티성 함수
	// to_string() 객체의 상태를 문자열로 반환하는 함수
	std::string to_string() const
	{
		std::ostringstream oss;
		oss << name << "(" << age << ", " << address << ")";
		return oss.str();
	}
};
int main()
{
//	People p; // 실전에서는 이렇게 사용할수 있게 하는게 좋을까요 ? => 안되게 해야 합니다.
	People p("홍길동", 20, "마북리");

	std::string s = p.to_string();
	std::cout << s << std::endl;
}

