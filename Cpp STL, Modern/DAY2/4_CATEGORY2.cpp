﻿#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>

// 반복자의 5가지 분류

// 입력 반복자    : =*p, ++
// 출력 반복자    : *p=, ++
// ----- 아래 3가지는 "멀티 패스"를 보장하는 반복자
// 전진형 반복자  : =*p, ++						싱글리스트의 반복자
// 양방향 반복자  : =*p, ++, --					더블리스트의 반복자
// 임의접근 반복자: =*p, ++, --, +, -, []       연속된 메모리의 반복자
//												vector의 반복자
int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// find 알고리즘은 1,2번째 인자가 반복자 입니다.
	// 최소 요구 조건은 "5가지 분류"중에서 무엇일까요 ? => 입력반복자가 최소 조건
	auto p = std::find(v.begin(), v.end(), 5);

	// 1,2 번째 인자로 전달되는 반복자의 최소 요구 조건은 ?  => 양방향 반복자
	// reverse 함수의 구현을 예측할수 있어야 합니다.
	std::reverse(v.begin(), v.end());

	//std::reverse()
	//---------------------------------------
	// 다음중 에러를 고르세요
	std::forward_list<int> fs = { 1,2,3 };
	std::list<int>         ds = { 1,2,3 };

	// reverse 요구사항 : 반드시 인자로 오는 반복자는 "양방향 반복자(즉, --가 가능해야)"
	//					  이어야 한다.
	
	// forward_list : 전진형 반복자(++ 만 가능)
	// list         : 양방향 반복자(-- 만 가능)

	std::reverse(ds.begin(), ds.end());	// 1. ok..
//	std::reverse(fs.begin(), fs.end()); // 2. error. 그런데.. 에러 창에서는 이 부분이 아닌
										// reverse의 내부 코드를 보여 준다... 
										// 그래서 에러 찾기가 어려워 진다.
}

// 핵심 : 각 컨테이너에서 꺼내는 반복자가 어떤 종류인지 명확히 파악해라!!
// vector       : 임의접근, 모든 연산 가능
// list         : 양방향,   ++, -- 만 가능, +, - 안됨
// forward_list : 전진형,   ++ 만 가능,     --, +, - 안됨

// 알고리즘 공부시 각 알고리즘 함수의 요구 사항을 정확히 파악하라.!!
// find()    : 입력 반복자 - 모든 컨테이너의 반복자 전달 가능
// reverse() : 양방향      - 싱글리스트의 반복자는 보낼수 없다.

// 위 내용을 모르면 STL 사용시 "실수가 많고, 에러가 너무 많이 발생"
//							   "에러 원인 찾기가 어렵다"

// cppreference.com 에서   우측 상단에서 reverse 검색해 보세요.  
// 검색 결과에서 std::reverse 선택하세요



