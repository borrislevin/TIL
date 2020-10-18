#include <iostream>
#include <thread>
#include <mutex> // �����ڿ� ��ȣ

// ���������� ������� �Ѱ��� ������ ���������
// => "�����忡 �����ϴ�"
// => ���� �����尡 �Լ��� ���ÿ� �����ص� �����ϴٴ� ��.

/*
void foo()
{
	int x = 0;
	x = 100;
}
*/

// C++11 ���ʹ� �پ��� ����ȭ ������ �����մϴ�.
std::mutex m;

int x = 0;

void foo()
{
	m.lock();

	x = 100;   // ���� ���� �����
	x = x + 1; // ���� ����
	printf("%d\n", x); // ���� �ݱ�.

	m.unlock();
}

int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);

	t1.join();
	t2.join();
}

