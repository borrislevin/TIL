#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

// �̼ҽ��� ��� - "���� �����ڸ� ������ �ߴٸ�"
// C++98 : ��������ڸ� ������.
// C++11 : "���������" �� �ƴ϶� "move ������"(�ӽð�ü�� ���� ���������)�� ������!

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

	// �ӽð�ü�� �ƴ� ��쿡 ����� ���� ������
	// const Cat& : lvalue �� rvalue ��� ������ �ִ�.
	Cat(const Cat& c) : age(c.age)  
	{
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);
		std::cout << "copy" << std::endl;
	}
	// �ӽð�ü�� ���� ���� ������
	// �ӽð�ü�� "rvalue" ��� ����� �� ����ϼ���.
	// Cat&& : rvalue �� ������ �ִ�.
	Cat(Cat&& c) 
		: age(c.age), name(c.name) // ��� ����� ���� �����Ŀ�
	{
		c.name = nullptr; // �ڿ�����
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
					// �� ������ �߻����� ������
					// ������ ������ ������ ����� ?
}






