
/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/
// �Լ��� ������ ����, �Լ��� ����� �ִ� "Ʋ(template)"�� ��������.
// �����ڴ� "Ʋ"�� �����ϰ�, "�Լ�"�� �����Ϸ��� ����� �Ѵ�.
template<typename T> 
T square(T a)
{
	return a * a;
}

int main()
{
	// square �� "�Լ�"�� �ƴ� "Ʋ"�Դϴ�.
	square<int>(10); // square<int>     : Ʋ�� ����ؼ� �Լ� ����
				     // square<int>(10) : ������ �Լ��� ȣ��

	int n = square<int>(1.1); // (1) 1  (2) 1.21
							   // int square(int) �Լ��� ����� 1.1 ���� => ����� 1
	// ����� �Ϸ���
	double d = square<double>(1.1);

	// ����ڰ� Ÿ���� �������� ������ �����Ϸ��� ���ڸ� ���� Ÿ�԰���
	square(3);  // �����Ϸ��� "square<int>(3)" �� ����
	square(3.4);
	
//	int aa;
//	std::cin >> �����ʿ�;  // Ÿ���� ���� ������ ����� �����ϴ�.
}
