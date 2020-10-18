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
	/*
	Cat(Cat&& c) : age(c.age), name(c.name)
	{
		c.name = nullptr;
		std::cout << "move" << std::endl;
	}
	*/
};
int main()
{
	Cat c1("nabi", 2);

	Cat c2 = c1;			// copy
	Cat c3 = std::move(c1);	// move - static_cast<Cat&&>(c1), 즉 rvalue로 캐스팅
						// 1. Cat 에 move 생성자가 있으면 "move 생성자 사용"
						// 2. move 생성자가 없으면 "복사 생성자" 사용 

	// move 의 활용
	// 1. 클래스 제작자
	//		"복사생성자를 만들게 될때, move 생성자도 만들어라"
	//		"move생성자를 안 만들어도 문제 없지만, 만들면 성능 향상"

	// 2. 클래스 사용자
	//    swap(), 버퍼 복사 등의 작업을 할때 "복사" 보다는 "move"가 빠른경우가 있다.
	//	  잘 생각해서 사용하자.
	Cat c2 = c1;			// 복사
	Cat c3 = std::move(c2); // move
}







