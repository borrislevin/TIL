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

	std::multiplies<int> m; 
	int n = std::accumulate(v.begin(), v.end(), 1, m);

	std::cout << n << std::endl;


	// C++98 : �ζ��� ġȯ���� ��� �Ѵٸ� �Լ� ���� "�Լ���ü"�� ����.

	// C++11 : ���� ǥ������ ����ض�. - ��ü�� ���� ?
	//		=> "�Լ� ��ü"�� �����Ϸ����� ����� �޶�� ǥ����

	int n2 = std::accumulate(v.begin(), v.end(), 1, [](int a, int b) { return a * b; });
/*
	// �� ������ ���� �����Ϸ��� �Ʒ� �ڵ带 �����մϴ�.
	class ClosureType
	{
	public:
		inline int operator()(int a, int b) const
		{
			return a * b;
		}
	};
	ClosureType f;
	int n2 = std::accumulate(v.begin(), v.end(), 1, f);

	// ��� : ����ǥ������ ���� ����� "�����Ϸ��� ���� Ŭ����(()�����ڸ� ��������)�� ��ü"
	//			�Դϴ�.
*/
}
// ���ϱ�, ���ϱ�, ������ ���� �����ϴ� �Լ� ��ü�� �ʿ� �ϴ�.
// 1. <functional> ����� �ִ� plus<>, minus<>, multiplies<> �� ����ص� "����" - C++98�� ����
// 2. ���� ǥ������ ����ص� ����. ��, C++11 ����


// <functional> ����� ���� ����� �����ϴ� �Լ���ü�� �ʿ� �ϴ�.
// 1. ���� Ŭ������ ���� ()�����ڸ� ������ �ص� ������
// 2. ���� ǥ������ �����մϴ�. - ����






