#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// "알고리즘" : "문제를 해결하는 방법"을 나타내는 전산 용어

// 그런데, STL 에서 "알고리즘" 은

// STL 이 제공하는 멤버가 아닌 "일반 함수(find, reverse)" 를 나타내는 용어

// STL 3개 요소 : C(container) I(iterator) A(algorithm)

// cppreference.com 에서 첫화면, "algorithm" 항목 선택

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };	
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };	

	// v 의 모든 요소를 뒤집고 싶다.
	// 방법 1. reverse()라는 멤버 함수를 만들자
	//		장점 : 사용하기 쉽다. 직관적이고 편리하다.  => java style
	//		단점 : 모든 컨테이너에 reverse() 함수가 있어야 한다.
	//			   컨테이너가 10개면 "10개의 reverse" 를 만들어야 한다.
//	v.reverse();

	// 방법 2. reverse()를 멤버함수가 아닌 일반함수로 제공하자.
	// 장점 : 하나의 함수로 모든 컨테이너에 사용
	// 단점 : 사용법이 복잡해 보인다.(멤버함수가 좀더 쉬워 보인다)
	std::reverse(v.begin(), v.end());
	std::reverse(s.begin(), s.end());

	
	// STL 컨테이너의 모든 요소 출력은 "range for" 가 가장 편리합니다.
	for (auto e : v)
		std::cout << e << " ";
	std::cout << std::endl;
}