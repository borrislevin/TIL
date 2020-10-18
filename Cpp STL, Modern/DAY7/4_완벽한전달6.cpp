#include <iostream>

void foo(int a) {}
void goo(int& a) { a = 100; }

void hoo(int&& a) {}

/*
template<typename F> void chronometry(F f, int& arg)
{
	//f(arg);

	f(static_cast<int&>(arg));  // arg�� �̹� int& Ÿ���̹Ƿ� "�ʿ� ���� ĳ����" �Դϴ�
								// ������ �־ ���� ���� ���� �ʽ��ϴ�.
}
template<typename F> void chronometry(F f, int&& arg)
{

	f(static_cast<int&&>(arg));
}
*/
// forwarding reference �� ����ϸ� �� 2���� �Լ��� �ڵ����� �˴ϴ�.
template<typename F, typename T> void chronometry(F f, T&& arg)
{
	// �Ʒ� ĳ������ main���� � ���ڸ�(n �Ǵ� 10) �����°��� ���� �޶����� ĳ����.
	f(static_cast<T&&>(arg));
}

int main()
{
//	hoo(10);
//	chronometry(hoo, 10);

	chronometry(foo, 10); // 10(rvalue) T: int   T&& :int&&  �̹Ƿ� static_cast<int&&>(arg)
	chronometry(goo, n);  // n(lvalue), T: int&, T&& : int&  �̹Ƿ� static_cast<int&>(arg)
}
