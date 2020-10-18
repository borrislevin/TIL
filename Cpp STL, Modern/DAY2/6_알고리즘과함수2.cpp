#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"

// 단항 함수 : 인자가 한개인 함수
// 이항 함수 : 인자가 2개인 함수
int foo(int a, int b) { return a + b; }
int main()
{
    std::list<int> s1 = { 1,2,3,4,5};
    std::list<int> s2 = { 6,7,8,9,10 };
	std::list<int> s3 = { 0,0,0,0,0 };

    // transform 알고리즘

	std::transform(s1.begin(), s1.end(), // 이 구간의 요소를 한개씩
		           s2.begin(),			 // 이 구간의 요소와 함께 마지막 인자인 함수에 보내서
		           //s3.begin(),			 // 함수의 결과를 여기에 담아라.
				   s3.rbegin(),			
				   foo);

	show(s3);

	return 0;
}



















//
