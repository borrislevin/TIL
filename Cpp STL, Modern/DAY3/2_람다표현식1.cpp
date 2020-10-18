// modern C++ ���� 126page
// C++11 �� �ٽ� ���
int add(int a, int b) { return a + b; }

// foo �Լ��� ���ڷ� �Լ��� �ּҸ� �䱸.
void foo(  int(*f)(int, int) )
{
	int n = f(1, 2);
}

int main()
{
	foo(add);  // ok

	// ���� ǥ���� : �Լ� �̸��� �ʿ��� �ڸ��� "�Լ� ���� ��ü"�� ����ϴ� ����
	//					C++11 �� "�ٽ�"!!
	//					C#, java, Python, swift �� ���� ��� �� ����
	//					C�� ���� ���� ����
	// [] : lambda introducer
	//		���� ǥ������ ���۵��� �˸��� ǥ���
	foo( [](int a, int b) { return a + b; } );

	int n1 = add(1, 2); // �Լ��̸�() : �Լ� ȣ��
	int n2 = (int a, int b) { return a + b; }(1, 2); // ���� ������ �ڵ�! ���������� �̷��� ���������
								// �����ϴ�. �ֵ� Ȱ���� ������������.
				
}


