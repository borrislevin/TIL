// 0_�����4.cpp
#include <iostream>
#include <string>
#include <sstream>

int main()
{
	double d = 3.141592;

	// ���ڸ� ���ڿ��� �����ϴ� ��� 
	// ��� 1. std::to_string() �Լ�   =>> C++11 ���� �߰�
	// Ư¡ : "���� �Ѱ�" �� ���ڿ���
//	std::string s = std::to_string(d); // 3.141592 => "3.141592"
	std::string s = "d = " + std::to_string(d) + " �Դϴ�."; // ok

	// ��� 2. osstringstream			=>> C++ �ʱ�(C++98) ���� �ִ� ���.
	// Ư¡ : "���ڸ� ������ ����"�� ���ڿ���
	std::ostringstream oss;
//	oss << d;
	oss << "d = " << d << " �Դϴ�";

	std::string s2 = oss.str();
}
// cppreference.com ���� std::to_string �˻��� ������.
// � ������ �ذ��ϴ� �� "����� ���������� ������"
// 1. �� ����� ���� ������ ���� ����.
// 2. �� ����� ������ ��� �ؾ� �Ѵ�.
//			���� �Ѱ��� ���ڿ��� ���� => to_string()�� ������.
//			����ȭ�� ���ڿ� �����    => ostringstream �� ������.