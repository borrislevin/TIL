#include <iostream>
#include <vector>
#include <algorithm>

// 조건자(Predicator) : 리턴값이 bool 인 함수

bool foo(int a) { return (a % 3) != 0; }


int main()
{
    std::vector<int> v = { 6, 9, 3, 1, 2};
 
	// find 는 정말 "generic(일반화)" 할까 ?
    // 주어진 구간에서 첫번째 나오는 3을 찾고 싶다.
    auto ret1 = std::find( v.begin(), v.end(), 3); // "값 검색"


	// 주어진 구간에서 첫번째 나오는 "3의 배수가 아닌것을 찾고싶다"???
	// 조건 검색 :  조건자가 "true" 를 리턴하는 첫번째 요소 검색

	auto ret2 = std::find_if(v.begin(), v.end(), foo);

	std::cout << *ret2 << std::endl; // 1

 
}

