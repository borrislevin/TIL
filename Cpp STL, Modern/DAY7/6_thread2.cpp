#include <iostream>
#include <thread> 
#include <chrono>
using namespace std::literals;

// C++ STL ������ ����� ����
// 1. ��� OS ���� ���������� ����ɼ� �ִ�.
//    ������ ���α׷� : pthread_create( , ������ �Լ� ) �Լ�
//    ������ ���α׷� : CreateThread() �Լ�   
//    OS���� �ڵ尡 �޶�����.

// 2. C�� ����� ������ �Լ��� ��翡 ������ �ִ�.
//   ������/������ ��� : ������ �Լ��� �ݵ�� ���ڰ� void* �Ѱ� �̾�� �Ѵ�.

void foo(int n, double d, int c)
{
	std::cout << std::this_thread::get_id() << std::endl;

	std::this_thread::sleep_for(10s);

	std::cout << "foo finish" << std::endl;
}




int main()
{
	// C++�� ������ �����ϴ� ���
	std::thread t1(&foo, 3, 4.2, 10);    // �̼��� �����尡 �����ǰ� foo ����
									// ��ü������ �ϸ� �����尡 �����		
									// t1.start() ��� �ڵ�� �ʿ� ����.

	std::cout << "main : " << std::this_thread::get_id() << std::endl;

//	t1.join(); // ������ : pthread_join()
			   // ������ : WaitForSingleObject()
			   // �����尡 ���� �ɶ����� ���
	t1.detach(); // ��ٸ��� �ʰڴ�..
				// �ֽ����� �����,, �������� ��罺����� ���� ����
}


