#include <iostream>
#include <vector>
#include <algorithm>

void foo(int n) { std::cout << n << std::endl; }

int main()
{
	std::vector<int> v = { 1,2,6,5,4,3,7,8 };

	// for_each : 구간의 모든 내용을 "특정 함수"에 전달하는 알고리즘
	std::for_each(v.begin(), v.end(), foo); // 일반 함수


	// 위 한줄을 "람다표현식"으로 다시 만들어 보세요.
	// "람다표현식(lambda expression)" 을 "익명의 함수"라고도 합니다
//	std::for_each(v.begin(), v.end(), [](int n) { std::cout << n << std::endl; });

	// 람다 표현식의 완전한 표기법 : 리턴 타입의 표기는 () 뒤에 -> 로 표기
	// 하지만 리턴 타입 생략시, 구현부를 보고 컴파일러가 추론해 준다.
	std::for_each(v.begin(), v.end(), [](int n) ->void { std::cout << n << std::endl; });



	// 람다 표현식의 장점
	// 위 코드에서 "람다표현식"을 사용한 것이 "더 빠르게 동작" 합니다.


}

