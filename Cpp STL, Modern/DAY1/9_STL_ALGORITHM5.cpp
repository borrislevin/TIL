#include <iostream>

// Step 5. 검색 실패시 반환값 변경

// nullptr 을 반환하지 말고 "last"를 반환하자.

// 장점 1. find 구현이 좀더 간결하고 빨라진다.
//      2. find() 반환값은 결국 다음 검색 구간의 시작이 된다.

// 아래 함수가 "C++ 표준에 이미 있는 std::find" 라는 함수 입니다.

template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first; //  == last ? nullptr : first;
}




int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 아래 코드에서
	// 검색 성공시 "x+3"은 나올수 없다.
	// 검색 실패시 "x+3"을 반환하면 어떨까 ?
	double* p = find(x, x + 3, 5); 




	if (p == x+3)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}




