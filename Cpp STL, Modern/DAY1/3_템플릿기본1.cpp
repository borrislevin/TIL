// 2_���ø��⺻1

// �Լ� �����ε�.
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}

int main()
{
	square(3);
	square(3.4); // ������ ������ ������ ����� 9
				 // C��� : �Ǽ�(double) => ����(int)�� �Ͻ��� ��ȯ��.
				 // java, C# �� �ٸ� ��� : �Ǽ��� ������ ��ȯ �ȵ�.
				 // C++�ذ�å : double ������ ������.
}
