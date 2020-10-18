// 4_1_reverse_iterator.cpp
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p1 = v.begin(); // '1'�� ����Ŵ
	auto p2 = v.end();   // '10' ������ ����Ŵ

	// �ٽ��� �Ʒ� 2��
	auto p3 = v.rbegin(); // '10'�� ����Ŵ
	auto p4 = v.rend();   // '1' �� �ϳ� ��

	std::cout << *p3 << std::endl; // 10
	++p3;
	std::cout << *p3 << std::endl; // 9
	//---------------------------------------

	std::vector<int> v2 = { 1,2,3,1,2,3,1,2,3,1 };

	// v2�� �տ��� ���� �˻��ؼ� "ó�� ������ 3"�� ã�ƶ�
	auto ret = std::find(v2.begin(), v2.end(), 3);

	// v2 �� �ڿ��� ���� �˻��ؼ� ó�� ������ 3�� ã�ƶ� 
	auto ret2 = std::find(v2.rbegin(), v2.rend(), 3);

	// �ٽ� : reverse �ݺ��� ���п� ��� �˰��� �Լ���
	//       "������" �� �ƴ϶� "������"���ε� ���� �մϴ�.
	//       => ���� �Ǹ��� ����!!!
}









