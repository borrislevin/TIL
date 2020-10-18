#include <iostream>
#include <complex>
#include <chrono>  // �ð� ���� Ŭ����
using namespace std::literals; // C++ ǥ�� ���ͷ� ���̻簡 ���⿡ �ֽ��ϴ�.

int main()
{
	std::chrono::seconds s = 1h + 3min + 20s;

	std::cout << s.count() << std::endl;

	std::complex<double> c1(1);  // 1 + 0i;
	std::complex<double> c2(1i); // 0 + 1i;
}
