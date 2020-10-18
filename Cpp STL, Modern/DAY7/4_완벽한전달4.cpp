#include <iostream>

void foo(int a) {}
void goo(int& a) { a = 100; }

void hoo(int&& a) {}


template<typename F> void chronometry(F f, int& arg)
{
	f(arg);
}

// main						chronometry								hoo(int&& a)
// hoo(10)  ===========================================================>  ok
// chronometry(10) =========> int&& arg�� ����
//							  hoo(arg)   ======> hoo(int&)ã��.. �����Ƿ� error

template<typename F> void chronometry(F f, int&& arg)
{
	// int&& r2 = 10;  // 10�� rvalue, r2 ��  "lvalue"

	// �� main ���� rvalue �� 10�� ���´µ�, int&& arg �� �޾Ҵ�.
	// �׷���, arg�� lvalue �̹Ƿ� 
	//f(arg); // �� �ڵ�� hoo(int&) �Լ��� ã�� �ȴ�.

	// �ذ�å : �ٽ� ���� �Ӽ��� rvalue �� �����ؼ� ����
	f( static_cast<int&&>(arg) );
}

int main()
{
	hoo(10); // ok
	chronometry(hoo, 10); // �� �ȵɱ�� ? �� �ڵ��� ������ ����� ?
						  // error.
}
