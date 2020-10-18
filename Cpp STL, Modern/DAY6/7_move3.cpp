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


	// 깊은 복사를 구현한 복사 생성자
	Cat(const Cat& c)
		: age(c.age)  // 포인터가 아닌것은 그냥 복사
	{
		// 포인터 멤버를 메모리 할당후 메모리 자체를 복사
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);
	}

};
int main()
{
	Cat c1("nabi", 2);

	Cat c2 = c1; // runtime error. 얕은 복사 문제.
				// 깊은 복사로 구현하면 에러 없음.
}