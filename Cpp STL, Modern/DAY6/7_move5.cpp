#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


class Cat
{
	char* name;
	int   age;
public:
	Cat(const char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	~Cat() { delete[] name; }

	Cat(const Cat& c) : age(c.age)
	{
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);
		std::cout << "copy" << std::endl;
	}
	Cat(Cat&& c) : age(c.age), name(c.name)
	{
		c.name = nullptr; 
		std::cout << "move" << std::endl;
	}
};

Cat foo()
{
	Cat c("yaong", 3);
	return c;
}

int main()
{
	Cat c1("nabi", 2);

	Cat c2 = c1;	// copy
	Cat c3 = foo(); // move

	Cat c4 = static_cast<Cat&&>(c1); // move 버전을 호출하기 위해 캐스팅한다.	
									 // 수행후에는 c1은 더이상 자원이 없습니다.

	Cat c5 = std::move(c2); // 이 함수가 위처럼 캐스팅하는 역활

	// 다음중 맞는 것은 ? => 답은 "2"
	// 1. move 함수가 자원을 이동한다.
	// 2. 자원의 이동은 결국 클래스 설계자(Cat) 가 만든 "move 생성자"가 하고 있다.

	std::string s1 = "hello";
	std::string s2 = std::move(s1); // static_cast<string&&>(s1) 이다.
						// 즉, string 클래스 를 만든 사람이 "move 생성자"를 만들어 놓은 것이다
}






