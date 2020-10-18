#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"
using namespace std;

// 알고리즘은 인자로 "함수"를 받는 경우가 많이 있다

//void foo(int n) { std::cout << n << std::endl; }

void foo(int& n) { n = n * 2; }

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    
    // for_each 알고리즘 - 마지막 인자로 함수를 전달 받습니다.
    std::for_each(v.begin(), v.end(), foo);

	show(v);
	return 0;
}



















//
