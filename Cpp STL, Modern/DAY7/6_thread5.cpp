#include <iostream>
#include <thread> 
#include <chrono>
#include <future>
using namespace std::literals;

// C++ STL  �� ������ ����� ���
// 1. std::thread Ŭ���� ��� - ���� �⺻���� ���
//	  ���� : ������ �Լ��� ��ȯ���� ��Ⱑ ���� �ʴ�.

// 2. std::async() �Լ� ��� 

int foo()
{
	std::cout << "foo : " << std::this_thread::get_id() << std::endl;
	std::this_thread::sleep_for(10s);
	return 100;
}
int main()
{
//	std::thread t(&foo);
	std::future<int> ret = std::async(std::launch::async, foo); // foo�� �񵿱�(������)�� ������ �޶�

	std::cout << "main �� ��ӽ���˴ϴ�." << std::endl;

	// ��� �����ϴٰ�, ����� �ʿ� �ϸ� "�̷� ��ü" ���� ������ �˴ϴ�

	int n = ret.get(); // �̼��� "foo" �� ���� ������� �ʾ����� ����ϰ� �˴ϴ�.
	std::cout << "��� : " << n << std::endl;
}
// www.isocpp.org  ������ ������.. ���� "Current ISO C++ Status"


// extern "C"







