// 6_map1
#include "show.h"
#include <map>  

// map : Tree. pair 를 저장하는 set,   key 값으로 value 를 저장
int main()
{
//	std::set<std::string> s; // string 한개만 보관

	std::map<std::string, std::string> m;
					// pair<string, string> 를 보관

	// 요소 넣기
	// 1. pair 만들어서 넣기
	std::pair<std::string, std::string> p("mon", "월요일");
	m.insert(p);

	// 2. make_pair
	m.insert( make_pair("tue", "화요일") );

	// 3. emplace
	m.emplace("wed", "수요일");


	// 4. [] 연산자 사용 - 가장 널리 사용
	//    배열 처럼 사용하는데, 정수가 아닌 index 로 사용.
	m["thu"] = "목요일";

	// 3, 4번이 제일 널리 사용됩니다.

	std::cout << m["mon"] << std::endl;
	
	// 맵이름["키값"] 을 넣으면 second 즉, data가 나옵니다



	//------------------------
	
	// 반복자에 대해서
	auto p = m.find("wed"); // find(키값)

	// p를 사용해서 "wed : 수요일" 이라고 출력해보세요

	// [] 연산자
	std::cout << m["sun"] << std::endl; 
}




