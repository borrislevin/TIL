int main()
{
	int n = 10;

	// C++98 const : ����ð�, ������ �ð� ��� ��� ����
	const int c1 = 10;	// ok
	const int c2 = n;	// ok

	// C++11 constexpr : ������ �ð� ����� ����
	constexpr int c3 = 10; // ok
	constexpr int c4 = n;  // error
}
// constexpr : ������ �ð��� �ǹ�
// 1. constepxr ��� �����
// 2. constexpr �Լ� �����
//    => �Լ� ���ڰ��� ������ �ð��� �˼� �ִٸ� ���굵 ������ �ð��� �ش޶�.
constexpr int Add(int a, int b) { return a + b; }

int x[ Add(1, 2) ]; // ok. Add()�Լ��� ������ �ð��� ����.