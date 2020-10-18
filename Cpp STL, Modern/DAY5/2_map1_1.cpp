#include "show.h"
#include <map>  

int main()
{
	// map 을 사용하는 일반적인 코드
	// 1. 맵 객체 생성, 초기화 할수도 있습니다.

	std::map<std::string, std::string> m = { {"mon", "월요일"}, {"tue", "화요일"} };

	// 2. 요소추가.  (1번소스의 4가지 방법 가능)
	m.emplace("wed", "수요일");

	m["thu"] = "목요일";

	// 3. [] 연산에 대해서
	std::string data = m["mon"]; // data = "월요일"
	m["mon"] = "월";			 // 변경도 가능

	// 아래 코드 주의 하세요..
	std::string s = m["sun"]; // 1. "sun" 이라는 키값이 없다. 실행시간 에러
							  // 2. { "sun", "" } 이라는 항목을 추가되고, data 인 빈문자열"" 이 반환

	// 3. 키값을 가지고 data 를 검색할때는
//	std::string s2 = m["sat"]; // 무조건 성공입니다. {"sat", "" }를 만들기 때문에
							   // 반환값은 빈 문자열

	// 멤버 함수 find로 검색 하세요
	auto p = m.find("wed");

	if (p == m.end())
		std::cout << "검색 실패" << std::endl;
	else
	{
		// p는 map의 요소를 가리키는 반복자 입니다.
		// 반복자 : "요소를 가리키는 포인터 역활이 객체"
		// map 반복자 : "pair 를 가리키는 포인터로 생각하면 됩니다."
		std::cout << p->first << " : ";		 // "wed"    나오게 해보세요
		std::cout << p->second << std::endl; // "수요일" 나오게 해보세요
	}

}

// Tree 가 한쪽으로 길어지면 검색 속도가 떨어집니다.
// 이 경우 "tree를 회전(root변경)"해서 "균형잡힌 이진 tree" 로 만들어야 합니다.
// 균형잡힌 이진 트리를 만드는 기술
// AVL Tree, Red Black Tree

// STL 은 Red Black Tree 사용 - "RB Tree"

// vector, list : 한쪽으로만 입력하면 먼저 입력된 요소를 구별할수 있다.
// tree : 입력순서는 알수 없다. 크기 순서만 보장된다.

// C 언어로된 "자료구조" 책 참고!
// "C로 배우는 자료구조" - 좀 오래된책
