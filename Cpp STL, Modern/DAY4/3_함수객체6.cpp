// 3_�Լ���ü6
// 1. �Ϲ� �Լ��� �ڽŸ��� Ÿ���� �����ϴ�.
//    signature(����Ÿ�԰� �Ķ����) �� 
//    ������ ��� �Լ��� ���� Ÿ���Դϴ�.

// 2. �Լ� ��ü�� ��� �ٸ� Ÿ���̴�.
//    signature(����Ÿ�Ը��� ���� ���, ��, �Լ� ����)�� ���Ƶ� "��� �ٸ� Ÿ���̴�."
struct Show
{
	inline void operator()(int n) { std::cout << n << std::endl; }
};
struct Show2
{
	inline void operator()(int n) { std::cout << n << std::endl; }
};
//----------------------------------------------------------------
// ���ڷ� "�Լ�(��ü)"�� ���� �޴µ�, �ش� �Լ�(��ü)�� ������ �ζ��� ġȯ �����ϰ� �ϴ� ���
// "�Լ� ��ü + ���ø�" ����� ����� ��� - STL �� �ٽ� ���� ö��

// �Ʒ� ����� ������ ? :
template<typename T> 
void for_each(int* first, int* last, T f)
{
	while (first != last)
	{
		f(*first);
		++first;
	}
}

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	Show  s1; s1(10); for_each(x, x + 10, s1); // ok.. �ƹ� ���� ����.  for_each(... Show) �Լ� ����
	Show2 s2; s2(10); for_each(x, x + 10, s2); // ??                    for_each(... Show2) �Լ� ����
}



