int main()
{
	int n = 10;

	// �Ʒ� 3�� ��Ģ�� �ݵ�� �ܿ� �μ���

	// 1. non const lvalue reference lvalue �� ����ų�� �ִ�.
	int& r1 = n;  // ok
	int& r2 = 10; // error

	// 2. const  lvalue reference �� lvalue, rvalue �� ��� ����Ų��.
	const int& r3 = n;  // ok
	const int& r4 = 10; // ok

	// rvalue�� �׻� const �ΰ��� �ƴϴ�. �ӽð�ü(Point(1,2))�� ����� �ƴϴ�.!!

	// 3. C++11 ���� ���γ��� ����- rvalue reference
	//    rvalue reference �� rvalue �� ����ų�� �ִ�.
	int&& r5 = n;  // error
	int&& r6 = 10; // ok

	// int&  : lvalue reference - lvalue �� ����Ų��.
	// int&& : rvalue reference - rvalue �� ����Ų��.
	// const int& : lvalue, rvalue ��� ����Ų��.

	// ���� �̰����� ���Ǵ°� => "move", "�Ϻ�������"
}

