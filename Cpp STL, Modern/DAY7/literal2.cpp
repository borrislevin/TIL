#include <iostream>
#include <complex>
#include <chrono>  // 시간 관련 클래스
using namespace std::literals; // C++ 표준 리터럴 접미사가 여기에 있습니다.

int main()
{
	std::chrono::seconds s = 1h + 3min + 20s;

	std::cout << s.count() << std::endl;

	std::complex<double> c1(1);  // 1 + 0i;
	std::complex<double> c2(1i); // 0 + 1i;
}
