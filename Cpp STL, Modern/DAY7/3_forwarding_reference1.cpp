// �Լ� ���ڷ�
// int&  : int �� lvalue �� ������ �ִ�
// int&& : int �� rvalue �� ������ �ִ�

// T&  : ���� Ÿ���� lvalue  �� ���� ������ �ִ�.
//     => �ڿ� &�� �Ѱ� �̹Ƿ� T�� �����(int&, int&&) �� �ᱹ �� lvalue reference �̴�.


// T&& : ���� Ÿ���� lvalue �� rvalue �� ��� ������ �ִ�.
//		  "������ �ִ�" �� �ǹ�  => int& ������ �Լ��� int&& ������ �Լ��� �������شٴ°�

// n(lvalue)  �� ������ =>  T �� "int&" , T&& �� "int&"    ���������� �Լ� f4(int&)
// 10(rvalue) �� ������ =>  T �� "int" ,  T&& �� "int&&"   ���������� �Լ� f4(int&&)

// ��, ��� ������ ���ڸ� call by value �� �ƴ� "call by reference"�� �޴´�.

// effective modern C++ å���� "T&&" �� "universal reference" ��� �θ��ڰ� ����
// ������ �ᱹ, "forwarding reference" ��� �θ���� ����.









void f1(int&  r) {}
void f2(int&& r) {}

template<typename T> void f3(T& a)
{
}

int main()
{
	int n = 10;

	// 1. ����ڰ� ���ø��� ���� Ÿ���� ���� �����ϴ� ���
	f3<int>( n );	// T : int    T& : int&              �����Լ���� void f3(int& a) 
	f3<int&>(n );   // T : int&   T& : int& & => int&    �����Լ���� void f3(int& a) 
	f3<int&&>(n );  // T : int&&  T& : int&& & =>int&    �����Լ���� void f3(int& a) 

	// 2. ����ڰ� Ÿ���� �������� ������
	//    �����Ϸ��� �Լ����ڸ� ���� "�ִ��� �Լ��� �����ϱ� ���� ����մϴ�."
	foo(10); // error. �Լ��� ����� ���� ����.
	foo(n);  // T �� "int"�� ������.     ������ �Լ� - void f3(int& a)
}














template<typename T> void f4(T&& a)
{
}
int main()
{
	int n = 10;

	// 1. ����ڰ� Ÿ���� ���� �����ϴ� ��� - ? ä�� ������
	f4<int>(10 );	// T : int    T&& : int&&				�����Լ� ���  void f4(int&& a)
	f4<int&>(n );	// T : int&   T&& : int& && => int&		�����Լ� ���  void f4(int& a)
	f4<int&&>(10);	// T : int&&  T&& : int&& &&=> int&&	�����Լ� ���  void f4(int&& a)

	// 2. ����ڰ� Ÿ���� �������� ������
	//    �����Ϸ��� �Լ� ���ڸ� ���� "�Լ��� �����Ҽ� �ְ� �ϱ� ���� T �� Ÿ���� �����մϴ�.

	// �Ʒ� �ڵ带 ���� �����Ϸ��� T�� Ÿ���� ���� ������ ���� ������
	f4(n);  // T : int&   T&& : int& && => int&		f4(int&  a) 
	f4(10); // T : int    T&& :	int&&				f4(int&& a)

}
