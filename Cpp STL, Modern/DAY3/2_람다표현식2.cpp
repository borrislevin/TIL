#include <iostream>
#include <vector>
#include <algorithm>

void foo(int n) { std::cout << n << std::endl; }

int main()
{
	std::vector<int> v = { 1,2,6,5,4,3,7,8 };

	// for_each : ������ ��� ������ "Ư�� �Լ�"�� �����ϴ� �˰���
	std::for_each(v.begin(), v.end(), foo); // �Ϲ� �Լ�


	// �� ������ "����ǥ����"���� �ٽ� ����� ������.
	// "����ǥ����(lambda expression)" �� "�͸��� �Լ�"��� �մϴ�
//	std::for_each(v.begin(), v.end(), [](int n) { std::cout << n << std::endl; });

	// ���� ǥ������ ������ ǥ��� : ���� Ÿ���� ǥ��� () �ڿ� -> �� ǥ��
	// ������ ���� Ÿ�� ������, �����θ� ���� �����Ϸ��� �߷��� �ش�.
	std::for_each(v.begin(), v.end(), [](int n) ->void { std::cout << n << std::endl; });



	// ���� ǥ������ ����
	// �� �ڵ忡�� "����ǥ����"�� ����� ���� "�� ������ ����" �մϴ�.


}

