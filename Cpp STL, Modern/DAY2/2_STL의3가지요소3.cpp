#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// "�˰���" : "������ �ذ��ϴ� ���"�� ��Ÿ���� ���� ���

// �׷���, STL ���� "�˰���" ��

// STL �� �����ϴ� ����� �ƴ� "�Ϲ� �Լ�(find, reverse)" �� ��Ÿ���� ���

// STL 3�� ��� : C(container) I(iterator) A(algorithm)

// cppreference.com ���� ùȭ��, "algorithm" �׸� ����

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };	
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };	

	// v �� ��� ��Ҹ� ������ �ʹ�.
	// ��� 1. reverse()��� ��� �Լ��� ������
	//		���� : ����ϱ� ����. �������̰� ���ϴ�.  => java style
	//		���� : ��� �����̳ʿ� reverse() �Լ��� �־�� �Ѵ�.
	//			   �����̳ʰ� 10���� "10���� reverse" �� ������ �Ѵ�.
//	v.reverse();

	// ��� 2. reverse()�� ����Լ��� �ƴ� �Ϲ��Լ��� ��������.
	// ���� : �ϳ��� �Լ��� ��� �����̳ʿ� ���
	// ���� : ������ ������ ���δ�.(����Լ��� ���� ���� ���δ�)
	std::reverse(v.begin(), v.end());
	std::reverse(s.begin(), s.end());

	
	// STL �����̳��� ��� ��� ����� "range for" �� ���� ���մϴ�.
	for (auto e : v)
		std::cout << e << " ";
	std::cout << std::endl;
}