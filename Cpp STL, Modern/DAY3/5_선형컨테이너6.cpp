#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <fstream>
#include "show.h"

// 예제 - 

int main()
{
	std::vector<std::string> v;
	std::ifstream fin("5_선형컨테이너6.cpp");
	std::string s;

	while ( std::getline(fin, s) )
		v.push_back(s);
	//----------------------------

//	std::reverse(v.begin(), v.end()); // 파일 "상하로"뒤집기

//	std::reverse(v[0].begin(), v[0].end()); // 1번째 줄을 좌우로뒤집기
	for (auto e : v)	// 각 요소를 값으로 복사하고 있으므로, 원본 수정안됨
//	for (auto& e : v)
	{
//		std::reverse(e.begin(), e.end());
//		std::replace(e.begin(), e.end(), 'i', ' ');

		// 모든 숫자(0~9)를 공백으로 변경해 보세요
		// 1. "replace"를 보고 "replace_if" 가 있을것이라는 것을 예측해야 합니다.
		// 2. 3번째 인자로 넘어가는 함수의 모양을 예측해야 합니다.
		// 3. 람다표현식으로 원하는 코드 작성
		//std::replace_if(e.begin(), e.end(), 함수, ' '); // 함수 모양 : bool 함수(char c)

		std::replace_if(e.begin(), e.end(),
						[](char c) { return  c >= '0' && c <= '9'; },
						' ');
	}


	//------------------------
	for (auto e : v)
		std::cout << e << std::endl;

}






