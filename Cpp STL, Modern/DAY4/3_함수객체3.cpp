#include <iostream>

// �Լ���ü�� "����"�� ������ �ִ�.
// => "��� ����Ÿ"�� �ִٴ� �ǹ�.. 

class URandom
{
	int history[10];
public:
	int operator()() 
	{
		int v = rand() % 10;

		return v;
	}
};

int main()
{
	URandom f;
	URandom urand; // urand�� �Լ��� �����ϰ� ��밡��

	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}





