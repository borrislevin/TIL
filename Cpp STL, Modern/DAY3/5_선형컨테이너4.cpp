#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// C 시절에 만들어 놓은 함수 
void foo(int* arr, int sz) 
{
	// 중요한 작업 수행.
}
int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	foo(x, 10); // foo 에 배열을 보낼때 이렇게 합니다.


	// 배열 보다는 vector 가 편리하다.(크기변경가능, 요소 추가 가능)
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// vector인 v를 예전에 만들었던 foo 에 보내고 싶다.
//	foo(v, v.size());  // error
//	foo(&v, v.size()); // error.

	foo(&v[0], v.size());    // 오래전에 사용했던 방법
	foo(v.data(), v.size()); // C++11 이후

	std::vector<int> v1 = { 1,2,3 };
	std::vector<int> v2 = { 10,20 };

	v1.swap(v2); // v1의 데이타와 v2의 데이타 교환
}


