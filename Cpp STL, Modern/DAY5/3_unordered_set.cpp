#include <iostream>
#include <unordered_set>
#include "show.h"

// unordered_set 

int main()
{	// vector<list<int>> hs;
	// STL �� �ؽ� �Լ��� "�Լ���ü"�� �Ǿ� �ֽ��ϴ�.
	std::hash<int> hi;		// int �� �����Ҷ� ����� �ؽ� �Լ�
	std::hash<double> hd;	// double
	std::hash<std::string> hs; // ���ڿ��� 

	// 100�� �����ϰ�ʹ�.
	// ��� ��Ŷ(bucket, ĳ���)�� �������� "�ؽ��Լ�"�� ���� ����.
	int n1 = hi(100);	// ���� �� (n1 ) % ��Ŷũ��(����) = ������ ��Ŷ index

	std::cout << n1 << std::endl;

	std::cout << hi(300) << std::endl;
	std::cout << hi(200) << std::endl;
	std::cout << hi(733) << std::endl;
	std::cout << hs("hello") << std::endl;
	std::cout << hs("AAAA") << std::endl;

	// 200 �� ã�� �ʹ�..
	// 200�� ���° bucket�� �ִ��� �˾� ����.
	std::cout << hi(200) << std::endl;
}
// �ؽ� �Լ� : Ư�� ����Ÿ�� ��� �������� bucket ��ȣ�� ������ �ִ� �Լ�
//				=> ������ �����ؾ� �Ѵ�.
//				=> �ǵ����̸� ������ ������ ������ �ְ� ������ �Ѵ�
// STL ���� �̹� "����, �Ǽ�, ���ڿ�" ���� ����Ÿ�� ���� �ؽ� �Լ��� �����Ѵ�.
// "�Լ���ü"�� ���·� ����






