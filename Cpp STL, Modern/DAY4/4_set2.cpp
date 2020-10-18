#include <iostream>
#include "show.h"
#include <set> 

int main()
{
	std::set<int> s;

	s.insert(20);	
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	s.insert(25);

	// �ٽ� 1. set �� ��Ʈ ���� �񱳷θ� ������ �ֽ��ϴ�
	// s.insert() �Ǵ� s.emplace()�� ����.
//	s.push_front(300);	// error
//	s.push_back(20);	// error


	auto p = s.begin();

	// �ٽ� 2. �ݺ��ڴ� �б� �����Դϴ�.
	//*p = 300; // error.
	int n = *p; // ok


	// �ٽ� 3. �Ʒ� �ڵ带 ���� ������
	auto ret = std::find(s.begin(), s.end(), 30);	// ������ ������!!!
					// s.begin() ���� ++�� �̵��ϸ鼭 �˻� - ���� �˻�

	// STL �ٽ� - ���ϴ� ����� ������
	// A. ����Լ��� �ִ��� ���� ã�ƶ�!
	// B. ����� ������ �Ϲ� �Լ�(�˰���)���� ã�ƶ�
	auto ret2 = s.find(30);  // ���� �˻�(��Ʈ ��� ���� ���� ���鼭 �˻�)

	// �׻� "STL" �����̳� ���� - �ڷᱸ��(�޸� ���)�� �� �����ϸ鼭 ����ϼ���..


	while (p != s.end())
	{
		std::cout << *p << std::endl;
		++p;
	}

}







