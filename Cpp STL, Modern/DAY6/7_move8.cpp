#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// Ŭ������ ������ ����� �ִٸ�
// "���� ���� �ذ��� ���� "���� ������" �ʿ�
// "���� ����� ���� move �����ڵ� �ʿ�

// ��� : Ŭ���� ���鶧 ����� ������ ������� ����!
//		  ����� move�� �����ϴ� ���� �Ǹ��� Ŭ������ �ȴ�.

class Cat
{
	//char* name;
	std::string name;
	int   age;
public:
	Cat(std::string n, int a) : age(a), name(n)
	{
	}
	// ����� move�� ������ �ʾ����Ƿ� "�����Ϸ��� ����"
};


int main()
{

}






