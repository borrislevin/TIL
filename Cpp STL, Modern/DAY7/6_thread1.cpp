#include <iostream>
#include <thread>  // C++11 ���� �����ϴ� ���
#include <chrono>
using namespace std::literals;  
// this_thread namespace 

int main()
{
	// std �ȿ� "this_thread" �̸� �����ȿ� 4���� "��ƿ��Ƽ��" �Լ��� �����մϴ�.
	std::cout << std::this_thread::get_id() << std::endl; // ���� ������ ID


	std::this_thread::sleep_for( 3s ); // �ð� ��ŭ ����

	std::cout << "AAA" << std::endl;

	std::this_thread::yield(); // ���罺���� ������ �����ϰ� ������� ������ ����

}


