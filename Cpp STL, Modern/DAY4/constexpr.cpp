// constexpr �Լ� : ������ ���� ������ �ð��� �˼� ������
//					�Լ� ���൵ ������ �ð��� �ش޶�.
constexpr int Add(int a, int b)
{
	return a + b;
}
int main()
{
	int n = 10;

	int x1[10]; // ok
//	int x2[n];  // error. �迭�� ũ��� ������ �ð��� �˾ƾ� �Ѵ�.
				//       ��, gcc ���� �Ϻ� �����Ϸ��� ���.   VC++ �� �ȵ�

	int x3[ Add(1, 2) ]; //  ok

	int a = 1, b = 2;

//	int x4[ Add(a, b) ] ; // error. a, b�� ���� �̹Ƿ� Add�� ������ �ð��� ���� ����.

	n = Add(a, b); // ������, �Ϲ� �Լ� ó�� ����ð��� ������ ����.
}