// 9_�Ϻ�������_���ǻ���3

// forwarding reference �̾߱�

template<typename T> class Test
{
public:
	// Ŭ������ ���ø� ����, foo �Լ��� ���ø��� �ƴմϴ�.
	void foo(T&& arg)
	{
	}
	// forwarding reference �� �Ƿ��� "�Լ� ��ü�� ���ø�" �̾�� �մϴ�.
	template<typename U> void goo(U&& arg) {}
};
int main()
{
	int n = 0;
	Test<int> t; // �̼��� T�� int�� ������.
				 // �̹� "void foo(int&&)" �� ������.

	// �Ʒ� �ڵ带 �����غ�����. ������ ������� ?
	t.foo(n);  // error
	t.foo(10); // ok

	t.goo(n);  // ok
	t.goo(10); // ok

}