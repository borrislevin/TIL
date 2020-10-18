// 6_bind1
#include <iostream>
#include <functional> 
using namespace std::placeholders; // _1, _2, _3... ���� ����ϱ� ���� ����

void foo(int a, int b, int c, int d)
{
	printf("%d, %d, %d, %d\n", a, b, c, d);
}
int main()
{
	// bind : �Լ��� Ư�� ���ڸ� ������ ���ο� �Լ��� ����� ���� - C++11���� �߰��� ���̺귯��

	foo(1, 2, 3, 4);

	// ���� : bind(N�� �Լ��ּ�, N���� ����)
	std::bind(&foo, 1, 2, 3, 4) ();  // 4���Լ� => 0�� �Լ�
	//<<-----���ο� �Լ� ----->|()

	std::bind(&foo, 3, _1, 8, _2)(10, 9); // 4�� �Լ� => 2�� �Լ�
	   									  // 3, 10, 8, 9

	std::bind(&foo, _3, _1, 7 , _2 )(8, 9, 3); // 3, 8, 7, 9 ������ ? ä�켼��.
						// 4�� �Լ� => 3���Լ��� �����Ѱ�.
}