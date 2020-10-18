#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

bool foo(int a) { return a > 2; };

int main()
{
	std::vector<int> v1 = { 1,2,3,1,2,3,1,2,3,1 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };

	// v1�� ��� ������ v2�� �����ϰ� �ʹ�.

	// STL �ʺ��� - �ַ� for�� ���
	for (int i = 0; i < v1.size(); i++)
		v2[i] = v1[i];


	// STL �ɼ��� - copy �˰���
	std::copy(v1.begin(), v1.end(), v2.begin());

	// v1���� 2���� ū ��� ��Ҹ� v2�� ��� �ʹ�.
	// find_if ���� �Ѱ��� �˻�������, ��� ����� ��Ƴ����� copy_if
	auto p = std::copy_if(v1.begin(), v1.end(), v2.begin(), foo);

	// �ᱹ p�� v2�� �ݺ����ε�, �ʿ� ���� �κ��� �������
	v2.erase(p, v2.end());

	show(v1);
	show(v2);
}

// cafe.naver.com/cppmaster ���� �ǽ��ڷ� �޾ƺ�����..

// 3:25 ~ 4:20 �� 




