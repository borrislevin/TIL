#include <iostream>
#include <list>
#include <stack>
#include "show.h"

// ���ſ� ��ȯ�� ���ÿ� ������ �ʴ´�.
int main()
{
	std::list<int> s = { 1,2,3,4,5 };

	// ���� ���� ��� ���
	int n = s.back(); // ��⸸ �ϰ�.. ���� ������ �ʴ´�.

	std::cout << n << std::endl; // 5

	show(s); // 1,2,3,4,5

	s.pop_back(); // ���Ÿ� �ǰ�.. ��ȯ������ �ʴ´�. 
					// ��, ��ȯŸ���� void

//	int n2 = s.pop_back(); // error

	// ��� : ó�� ��Ҹ� �����鼭 ���� �Ϸ��� 2���� ȣ���ʿ�
	int n3 = s.front(); // ���� ��Ҹ����..
	s.pop_front();      // �����ؾ� �մϴ�.
}