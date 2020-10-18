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
	Cat c3 = std::move(c1);	// move - static_cast<Cat&&>(c1), �� rvalue�� ĳ����
						// 1. Cat �� move �����ڰ� ������ "move ������ ���"
						// 2. move �����ڰ� ������ "���� ������" ��� 

	// move �� Ȱ��
	// 1. Ŭ���� ������
	//		"��������ڸ� ����� �ɶ�, move �����ڵ� ������"
	//		"move�����ڸ� �� ���� ���� ������, ����� ���� ���"

	// 2. Ŭ���� �����
	//    swap(), ���� ���� ���� �۾��� �Ҷ� "����" ���ٴ� "move"�� ������찡 �ִ�.
	//	  �� �����ؼ� �������.
	Cat c2 = c1;			// ����
	Cat c3 = std::move(c2); // move
}







