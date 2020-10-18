#include <iostream>

/*
int Mul(int a, int b)
{
	return a * b;
}
*/

// 1, 2��° ������ Ÿ���� �ٸ��� �� �־�� �Ѵ�.
/*
template<typename T>
T Mul(T a, T b)
{
	return a * b;
}
*/
// decltype, ���� ��ȯ ǥ��� ���� "�Ϲ� ������" ���ٴ� "���̺귯��" �����ڰ� ���� ����ϴ� �����Դϴ�

// C++ : "���̺귯�� ���迡 ����ȭ�� �� ������"�� ö���� �ֽ��ϴ�.

template<typename T1, typename T2>
//decltype( a * b ) Mul(T1 a, T2 b)	// �̷� ���� ���� "decltype"�� ��������ϴ�.�ٵ� �� �����ϱ��?
								    // a, b ������ �������� ���Ǿ���.

//auto Mul(T1 a, T2 b) -> decltype(a * b)	// ok.. C++11 ��Ÿ��.
auto Mul(T1 a, T2 b) //-> decltype(a * b)	// ok.. C++14 ��Ÿ��.
{
	return a * b;
}



int main()
{
	std::cout << Mul(3, 4)     << std::endl;
	std::cout << Mul(1.2, 4.3) << std::endl;
	std::cout << Mul<int, double>(2, 4.3) << std::endl; // ��Ȯ�� ǥ���
	std::cout << Mul(2, 4.3) << std::endl;              // ������, Ÿ�� ��������. ���ں��� Ÿ�԰���


//	a = 30; // error. ������ �������� ���
//	int a = 10;
//	a = 20; // ok..
}





