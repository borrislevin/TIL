#include <iostream>
#include <vector>
#include <algorithm>  
#include <numeric>    
#include <functional>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };

	// STL �˰��� �Լ��� �����ϴ� ���
	// "��" ������ "�Լ�" ������ ���ڰ� ��� 3����. �����̸��� ����Ҽ� �������ϴ�
	auto p1 = std::find   (v1.begin(), v1.end(), 3);
	auto p2 = std::find_if(v1.begin(), v1.end(), [](int a) {return a % 3 == 0; });

	// ��ġ��� ���� �˰����� "�Լ� ����"�� _if �� ���� �ʽ��ϴ�
	// "�⺻����" ������ "�Լ�����"������ ������ ������ �ٸ��ϴ�. �����̸��� ����Ҽ� �־����ϴ�.
	int n1 = std::accumulate(v1.begin(), v1.end(), 0);
	int n2 = std::accumulate(v1.begin(), v1.end(), 1, [](int a, int b) { return a * b; } );
}
