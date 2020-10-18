#include <iostream>

// Step 4. 보다 일반화 되게.. => 약간 까다로운 지점.

// 아래 처럼 만들면 문제점은 2개 입니다.
// 1. 구간의 타입과 요소의 타입이 연관됩니다.
//    double 배열에서 int 검색이 안됩니다. 

// 2. T* 라고 하면 반드시 "Raw 포인터" 만 사용할수 있습니다.
//    스마트 포인터 등을 사용할수 없습니다.

//template<typename T>
//T* find(T* first, T* last, T c)
// 아래 코드의 장점
// 1. 구간을 나타내는 것은 "반드시 포인터" 일 필요는 없다.
// 2. 구간의 타입과 요소의 타입이 연관되지 않는다.
//     double 배열에서 float, int 등도 검색 가능.

template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}




int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

//	double* p = find<double*, int>(x, x + 10, 5 ); // 정확한 표기법

	double* p = find(x, x + 10, 5); // find(double*, double*, int) 인 함수 생성




	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}




