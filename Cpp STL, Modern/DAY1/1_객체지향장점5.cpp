#include <iostream>
#include <string>

int main()
{
	// C��� ���ڿ� : ���ڿ� �迭 �Ǵ� ���ڿ� ������
	char cs1[] = "hello";
	char cs2[] = "hello";

//	if (cs1 == cs2)				// �ּ� ��
	if ( strcmp(cs1, cs2) == 0)	// ���ڿ� ��
		std::cout << "same" << std::endl;
	else
		std::cout << "not same" << std::endl;

	// C++ : Ŭ���� �������� �̹� ǥ�ؿ��� "string" Ŭ���� ����
	std::string s1 = "hello";
	std::string s2 = "hello";

	if (s1 == s2)
		std::cout << "same" << std::endl;

	std::string s3 = s1 + s2;
	std::cout << s3 << std::endl;

	// ���� �����ϴ� ��� ���(java, C#, C++, python ��) : string Ÿ���� �ֽ��ϴ�.
}

// C++�� ���� ��
// 1. vector ���� Ŭ������ ����� ����� ���� �� => �⺻ ���� ����(C++�⺻, ������)

// 2. vector ���� C++ ǥ�� Ŭ������ ����ϴ� ���� ���°� => STL ����

// 3. C++11 ������ ��ȭ�� ������ ���� �� - MODERN C++

// 4. �ϳ��� Ŭ������ ����� ���� �ƴ϶�..
//    ���ʰ��� Ŭ������ ���� �ϳ��� ���α׷����� ������Ű�� �� => "������ ����"


