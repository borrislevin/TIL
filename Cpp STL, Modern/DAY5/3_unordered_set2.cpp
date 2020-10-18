#include <iostream>
#include <set>
#include <unordered_set>
#include "show.h"

// vector, list : �Է��� ������ "����(sequence)"�� ����
// set(tree)    : ��Ʈ ���� ũ�⸦ ���ؼ� �ֱ�
// hash         : �Է��� ����Ÿ�� �ؽ� �Լ��� ������ ��� �������� �������� ����
//				  �˻��� �ٽ� �ؽ� �Լ��� ���

// tree : �˻��� ���� ��,            ������ ����(���� ������ �ڽ� => ������ ������ �ڽļ�)
// hash : �˻��� ���� ���� �ڷᱸ��, ������ ���� ���� ������.

int main()
{
	std::set<int> s2;
	s2.insert(10);
	s2.insert(35);
	s2.insert(20);
	s2.insert(25);
	auto p1 = s2.find(20);
	std::cout << *p1 << std::endl;
	show(s2);	// ���� ����
	//-------------------------------------
	std::unordered_set<int> s;

	s.insert(10);	// 10�� �ؽ� �Լ��� �����ؼ� ��Ŷ��ȣ�� ���
					// �ش� ��Ŷ�� ����
	s.insert(35);
	s.insert(20);
	s.insert(25);
	auto p = s.find(20); // �ؽ� �Լ��� ����ؼ� �˻�
						// 20�� �ؽ� �Լ��� ������ ��Ŷ ��ȣ���
						// �ش� ��Ŷ���� �˻�.
	std::cout << *p << std::endl;
	show(s);	// ���� ���� �ȵ�.
}

