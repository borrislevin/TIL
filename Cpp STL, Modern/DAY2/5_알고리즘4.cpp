#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// �˰���� ������ �̸��� ��� �Լ��� �ִٸ� ��� �Լ��� ����϶�. - 84 page

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// v�� ��� ��Ҹ� ������ ������
	std::reverse(v.begin(), v.end());
	
	show(v);
	//-----------------------------------------
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// s�� ��� ��Ҹ� ������ ������
	// std::reverse(s.begin(), s.end()); // �̷��� ���� ����
	s.reverse();	// �����̸��� ����� �ִ��� ���� �����ϼ���

	show(s); // 10, 9,8,7,6,5,4,3,2,1
}







