#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity ����

int main()
{
	std::vector<int> v(10, 0);

	v.resize(7);  // �̼����� ������ ������ ���ô�.

	std::cout << v.size()     << std::endl; // 7
	std::cout << v.capacity() << std::endl; // 10

	v.push_back(10); // ���� �Ѱ�(10) �߰�.
					 // �� ������ "��δ� ?","�δ� ?" => cheap!!!
					// ������ �տ� �߰��� �׻� "��δ�"

	std::cout << v.size()     << std::endl; // 8
	std::cout << v.capacity() << std::endl; // 10

	v.shrink_to_fit(); // ���������� �����ش޶�.
					   // �̼��� 8��¥�� �޸� ���� �Ҵ���
					   // ���� ��� ����, ���� ���۴� ����.

	std::cout << v.size()     << std::endl; // 8
	std::cout << v.capacity() << std::endl; // 8

	v.push_back(20); // expensive operation!!!

	std::cout << v.size()     << std::endl; // 9
	std::cout << v.capacity() << std::endl; // VC�� ���� ũ���� 1.5��

	// STL�� vector�� ĳ�н��Ͱ� Ŀ���� ������ �����Ҽ� �����ϴ�
	// MFC���� �ٸ� C++ ���̺귯���� ���� ������ ��쵵 �ֽ��ϴ�.

	v.reserve(100);	// size�� �������� ����, capacity(�޸�)�� Ȯ��..
					// �޸� ����� ������, ������ ��������.
					//						 �ݺ��� ��ȿȭ ����(invalidate)�� �پ� ���.

	std::cout << v.size()     << std::endl; // 9
	std::cout << v.capacity() << std::endl; // 100

	// capacity ������ vector���� �ְ� list, deque ��� �����ϴ�.

	
}








