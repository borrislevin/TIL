#include <iostream>
#include <algorithm> 


void for_each(int* first, int* last, void(*f)(int))
{
	while (first != last)
	{
		f(*first);
		++first;
	}
}
//----------------------
// foo�Լ��� "�̸� foo"�� ���� ȣ���ϸ� �ζ��� ġȯ �˴ϴ�.
// ������, for_each(x, x+10, foo) ó�� �Լ� ���ڷ� ������ ����ϸ� �ζ��� ġȯ �ȵ˴ϴ�.
inline void foo(int n) { std::cout << n << std::endl;}
inline void goo(int n) { std::cout << n << std::endl; }






int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	for_each(x, x + 10, foo);	// �ڵ带 �ߺ��� foo�� ��� ȣ��Ǵ��� ������ ������.
	for_each(x, x + 10, goo);	// �ᱹ, ������ ��Ұ� 10�� �̹Ƿ� 10�� ȣ��.
}




