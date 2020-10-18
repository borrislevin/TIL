#include <iostream>
#include <string>
// ��Ģ 1.
// ���� �����ڿ� move �����ڸ� ��� ������ ������
// "�����Ϸ��� ��� ����� �ش�."
// �����Ϸ� ���� : ���� �����ڿ����� ��� ��� ����
//                 move �����ڿ����� ��� ��� move - �ʹ����� ���

// ��Ģ 2.
// ����ڰ� ���� �����ڸ� ����� => move �����ڰ� ��� �����Ϸ��� ����� ���� �ʴ´�.
// std::move() ���� "����ڰ� ���� ���� ������" ���.!

struct People
{
	std::string name = "AAA";
	People() = default;

	People(const People& p) : name(p.name)
	{
		std::cout << "����ڰ� ���� ���� ������ ���" << std::endl;
	}
};

int main()
{
	People p1;
	People p2 = p1; // ����

	std::cout << p1.name << std::endl; // "AA"

	People p3;
	People p4 = std::move(p3); // �̵�

	std::cout << p3.name << std::endl; // ""

	// �� �ڵ忡�� ? �� ��� ������ ���ϴ��� ������ ������.
}