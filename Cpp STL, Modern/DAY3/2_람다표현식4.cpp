#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// v 의 모든 요소에 3을 더해 보세요 => 람다 표현식 사용하세요
	
	// 핵심 : 3번째 인자로 전달되는 함수가 "참조"로 받아야 원본을 수정할수 있습니다.
//	std::for_each(v.begin(), v.end(), [](int& a) { a = a + 3; } ); 
//	show(v); // 4,5,6,7,8,9,10,11,12,13  나와야 합니다
	

	int n = 0;
	std::cin >> n;

	// v의 모든 요소에 "사용자가 입력한 n" 을 더해 보세요.
//	std::for_each(v.begin(), v.end(), [](int& a) { a = a + n; }); // error

	// 중요 문법 : 지역변수 캡쳐 문법
	// 람다 표현식안에서 지역변수를 사용하고 싶을때 사용하는 문법
	std::for_each(v.begin(), v.end(), [n](int& a) { a = a + n; }); // ok

//	int n1 = 10, n2 = 20;
//	std::for_each(v.begin(), v.end(), [n1, n2](int& a) { a = a + n1 + n2; });    // 2개이상 캡쳐
//	std::for_each(v.begin(), v.end(), [=]     (int& a) { a = a + n + n1 + n2; });// 모든 지역변수캡쳐

	// 권장 : 되도록이면 [=]은 사용하지 말고, "[필요한변수들]" 만 캡쳐 하세요
	show(v);
}



