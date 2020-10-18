#include <iostream>
#include <vector>
#include <algorithm>  
#include <numeric>    
#include <functional>
#include "show.h"

// 핵심 : STL은 "부품 조립" 하듯이 "유연성" 있게 설계 되어 있습니다.
// 잘사용하려면 "알고리즘에 전달되는 함수의 모양"을 잘 파악해야 합니다.

int Mul(int a, int b) { return a * b; }

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	
	// <numeric> 헤더
//	int n = std::accumulate(v1.begin(), v1.end(), 0); // 55 => 덧셈의 합
											// int s = 0;
											// s = s + 1번째 요소;
											// s = s + 2번째 요소;

//	int n = std::accumulate(v1.begin(), v1.end(), 1, Mul); // 어떤연산의 합인지는 변경할수 있습니다
											// int s = 1;
											// s = Mul( s * 1번째요소) 
											// s = Mul( s * 2번째요소) 
											// 결국 s = 1 로 초기화 하고
											// s = s * 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10

	// 위 코드 주석으로 막고.. "람다 표현식"을 사용해 보세요..
	int n = std::accumulate(v1.begin(), v1.end(), 1, [](int a, int b) { return a * b; } );

	std::cout << n << std::endl;
	//-----------------------
	std::vector<int> v2 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v3 = { 0,0,0,0,0,0,0,0,0,0 };
						//  1,3,6,10 	

	// 결과 보고 아래 함수가 하는 일을 예측해 보세요.
//	std::partial_sum(v2.begin(), v2.end(), v3.begin());  // 덧셈이 기본 연산

	std::partial_sum(v2.begin(), v2.end(), v3.begin(), [](int a, int b) { return a * b; }); // 곱셈이 부분합이 되도록 해보세요

	show(v3); 
}
