#include <iostream>
#include <thread>
#include <algorithm>
#include <execution>
#include <chrono>
using namespace std::literals;

void foo(int n)
{
	std::cout << n << " : " << std::this_thread::get_id() << std::endl;
	std::this_thread::sleep_for( 1s ); // �۾� ����
}
int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// �Ѱ��� CPU�� ��� ����Ÿ ó��
	//std::for_each(x, x + 10, foo);

	// ���� ����ȯ�濡�� CPU�� ����� �ľ��ؼ�
	// �ֻ��� ������ ������ �����ؼ� ���ķ� ����Ÿ�� ó���� �޶�
	// "STL ���� �˰��� ���̺귯��" - C++17 ����
	std::for_each(std::execution::par, x, x + 10, foo);
	
	
}

// ������Ʈ�޴� => �Ӽ� �޴� ����   "C/C++" "�����"����

// /std:c++latest