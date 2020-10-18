#include <iostream>

// Step 3. 검색 대상의 일반화 => "template"

// "일반화(generic)" : 함수(클래스)의 활용도를 넓혀 가는 것.

// 1. 문자열 뿐 아니라 모든 타입의 배열의 [first, last) 구간에서 선형검색
// 2. 함수 이름 변경. strchr() = > find()

template<typename T>
T* find(T* first, T* last, T c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// x ~ x+9 검색 : 마지막 요소 검색 안됨
	// x ~ x+10 검색 : 모든 요소 검색
	double* p = find(x, x + 10, 5.0);




	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}




