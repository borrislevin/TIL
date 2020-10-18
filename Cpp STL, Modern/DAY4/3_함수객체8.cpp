// 3_�Լ���ü8
#include <iostream>
#include <vector>
#include <numeric>
#include <functional>   // plus<>, minus<>, multiplies<> ���� �پ��� �Լ���ü�� �����˴ϴ�.
						// C++98 ���� �����Ǵ� ����.

inline int Mul(int a, int b) { return a * b; }

template<typename T> struct multiplies
{
	inline T operator()(T a, T b) const { return a * b; }
};

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = std::accumulate(v.begin(), v.end(), 0); // �⺻ ���� "+ ����" ����
//	int n = std::accumulate(v.begin(), v.end(), 1, Mul); // ������ ���� ���� - �Ϲ� �Լ�
												// ���� �ڵ忡�� Mul()�� �� 10�� ȣ��˴ϴ�
												// �ζ��� ġȯ �ȵ�.
//	multiplies<int> m;
	std::multiplies<int> m; // C++ ǥ���� multiplies<>
	int n = std::accumulate(v.begin(), v.end(), 1, m); // �Լ� ��ü ����
													   // m�� () �����ڱ����ΰ� �ζ��� ġȯ��

	std::cout << n << std::endl;
}

// cpprefernce.com �� ùȭ�鿡��
// General utilities library -> function object




