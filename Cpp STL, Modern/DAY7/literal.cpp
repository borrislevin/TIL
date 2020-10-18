// literal.cpp
#include <iostream>

class Meter
{
	int value;
public:
	Meter(int n) : value(n) {}
};

// ���� �ڿ� �ٴ� ���̻縦 ���鶧�� ���ڸ� �ݵ�� "unsigned long long " ���
// unsigned long long: 64��Ʈ ����

// ���� : ����ڰ� ���鶧�� �ݵ�� _ �� �����ؾ� �մϴ�.
Meter operator""_m(unsigned long long n)
{
	return Meter(n);
}

int main()
{
	Meter a = 3_m; // operator""m(3) ���� �ؼ��˴ϴ�.

//	3.4g; // operator""g(long double) �� ã�´�.
}



/*
int main()
{
	float f1 = 3.4f;   // 3.4 : double     3.4f : float

	// 10 : int    10l : long

	Meter a = 3m; // operator""m(3) ���� �ؼ��˴ϴ�.

//	Gram  b = 3g;

//	Sleep(20ms);
}

*/
