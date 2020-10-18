#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

// 이소스의 결론 - "복사 생성자를 만들어야 했다면"
// C++98 : 복사생성자를 만들어라.
// C++11 : "복사생성자" 뿐 아니라 "move 생성자"(임시객체를 위한 복사생성자)도 만들어라!

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

	// 임시객체가 아닌 경우에 사용할 복사 생성자
	// const Cat& : lvalue 와 rvalue 모두 받을수 있다.
	Cat(const Cat& c) : age(c.age)  
	{
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);
		std::cout << "copy" << std::endl;
	}
	// 임시객체를 위한 복사 생성자
	// 임시객체는 "rvalue" 라는 사실을 꼭 기억하세요.
	// Cat&& : rvalue 만 받을수 있다.
	Cat(Cat&& c) 
		: age(c.age), name(c.name) // 모든 멤버를 얕은 복사후에
	{
		c.name = nullptr; // 자원포기
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
					// 이 한줄을 잘생각해 보세요
					// 에러는 없지만 단점이 뭘까요 ?
}






