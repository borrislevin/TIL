#include <iostream>
#include <list>

int main()
{
	std::list<int> s1 = { 1,2,3 };

	auto p1 = s1.begin();
	auto p2 = s1.end();

	// �ٽ� 1. .end()�� ��� �ݺ��ڴ� "��"�� �뵵�θ� ����ؾ� �մϴ�.
	// [p1, p2)
//	*p2 = 10; //runtime error

	while (p1 != p2)	// ok.. �� �뵵�� ���
	{
		++p1;
	}

	// �ٽ� 2. ����ִ� �����̳ʴ� s.begin() == s.end() �� ���Դϴ�.
	std::list<int> s3;
	if (s3.empty()) {}

	if (s3.begin() == s3.end()) {}	// empty container
}