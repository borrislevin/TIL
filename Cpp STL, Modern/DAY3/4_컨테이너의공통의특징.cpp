#include <iostream>
#include <list>
#include <stack>
#include "show.h"

// 제거와 반환이 동시에 되지는 않는다.
int main()
{
	std::list<int> s = { 1,2,3,4,5 };

	// 제일 끝의 요소 얻기
	int n = s.back(); // 얻기만 하고.. 제거 되지는 않는다.

	std::cout << n << std::endl; // 5

	show(s); // 1,2,3,4,5

	s.pop_back(); // 제거만 되고.. 반환되지는 않는다. 
					// 즉, 반환타입은 void

//	int n2 = s.pop_back(); // error

	// 결론 : 처음 요소를 얻으면서 제거 하려면 2번의 호출필요
	int n3 = s.front(); // 먼저 요소를얻고..
	s.pop_front();      // 제거해야 합니다.
}