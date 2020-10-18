#include <iostream>
#include <unordered_set>
#include "show.h"

// unordered_set 

int main()
{	// vector<list<int>> hs;
	// STL 의 해쉬 함수는 "함수객체"로 되어 있습니다.
	std::hash<int> hi;		// int 를 저장할때 사용할 해쉬 함수
	std::hash<double> hd;	// double
	std::hash<std::string> hs; // 문자열을 

	// 100을 저장하고싶다.
	// 몇번 버킷(bucket, 캐비넷)에 저장할지 "해쉬함수"에 물어 본다.
	int n1 = hi(100);	// 나온 값 (n1 ) % 버킷크기(갯수) = 저장할 버킷 index

	std::cout << n1 << std::endl;

	std::cout << hi(300) << std::endl;
	std::cout << hi(200) << std::endl;
	std::cout << hi(733) << std::endl;
	std::cout << hs("hello") << std::endl;
	std::cout << hs("AAAA") << std::endl;

	// 200 을 찾고 싶다..
	// 200이 몇번째 bucket에 있는지 알아 낸다.
	std::cout << hi(200) << std::endl;
}
// 해쉬 함수 : 특정 데이타는 어디에 보관할지 bucket 번호를 리턴해 주는 함수
//				=> 빠르게 동작해야 한다.
//				=> 되도록이면 균일한 분포를 가질수 있게 만들어야 한다
// STL 에는 이미 "정수, 실수, 문자열" 등의 데이타를 위한 해쉬 함수를 제공한다.
// "함수객체"의 형태로 제공






