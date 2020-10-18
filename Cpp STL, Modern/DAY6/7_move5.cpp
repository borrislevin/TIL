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

	Cat c4 = static_cast<Cat&&>(c1); // move ������ ȣ���ϱ� ���� ĳ�����Ѵ�.	
									 // �����Ŀ��� c1�� ���̻� �ڿ��� �����ϴ�.

	Cat c5 = std::move(c2); // �� �Լ��� ��ó�� ĳ�����ϴ� ��Ȱ

	// ������ �´� ���� ? => ���� "2"
	// 1. move �Լ��� �ڿ��� �̵��Ѵ�.
	// 2. �ڿ��� �̵��� �ᱹ Ŭ���� ������(Cat) �� ���� "move ������"�� �ϰ� �ִ�.

	std::string s1 = "hello";
	std::string s2 = std::move(s1); // static_cast<string&&>(s1) �̴�.
						// ��, string Ŭ���� �� ���� ����� "move ������"�� ����� ���� ���̴�
}






