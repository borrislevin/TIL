// ��� 1. call by value
//		Ư¡ : �޸𸮿� ���纻�� ���� "��"�� ���� �ް� �ִ�.
//			   int �� �ƴ� ũ�Ⱑ ū ����ü�̸� ������尡 �ִ�.
// void foo(int a) {}

// ��� 2. const lvalue reference
//		Ư¡ : ���纻�� �������� �ʴ´�.
//			   ������� �߰� �ǹǷ� ������ ���� �����Ҽ��� ����.
// void foo(const int& a) {}

// ��� 3. ����� �߰� ����, ���纻�� ���� �״�� ���� �ް� �ʹ�
//			C++98 : ����� ����.
//			C++11 : �����̸��� �Լ��� 2�� ����� �ȴ�.
// void foo(int&  a) {}
// void foo(int&& a) {}


// ��� 4. "���3"�� 2�� �Լ��� �ڵ����� �����ǰ� �Ҽ� ������ ?
// "forwarding reference"�� �̷� �뵵�� ���Ǵ°�!!!
template<typename T> void foo(T&& a) {}

// foo(n) => void foo(int& a)  �Լ� ����
// foo(10)=> void foo(int&& a) �Լ� ����



int main()
{
	int n = 10;

	// lvalue �� rvalue�� ��� ������ �ִ� foo �Լ��� ����� �ʹ�
	foo(n);
	foo(10);
}
