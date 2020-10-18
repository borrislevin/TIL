#include <iostream>
#include <string>
#include <unordered_map>

// 이름을 "unorderd_set" 대신 "hash_set" 으로 하면 좋지 않았을까 ?
// C++98 : 표준에 hash 가 없었다. 그래서 다른 컴파일러 제조사들이 임으로 hash_set 이라는 이름으로
//			제공하는 경우가 있었다.
// C++11 : hash 를 넣고 싶었다. 그런데, hash_set 이라는 이름이 이미 사용되는 컴파일러가 있어서
//		이름 충돌을 피하고 싶었다.
// set : 정렬을 유지
// unordered_set : 정렬되지 않은 set
// set, unordered_set : 키값만 보관
// map, unordered_map : "키값 - value(data)" 를 보관, 흔히 다른 언어는 "dictionary" 라고 부릅니다.

int main()
{
	// pair 를 저장하는 hash 
	std::unordered_map<std::string, std::string> m = { {"mon", "월요일"}, {"tue", "화요일"} };

	// 요소 추가
	m.emplace("wed", "수요일");

	m["sun"] = "일요일";
	auto p = m.find("mon");
	if (p == m.end())
		std::cout << "검색 실패" << std::endl;
	else
		std::cout << p->first << " : " << p->second << std::endl;

//	std::hash<int> hi; // 해쉬 함수.. 데이타를 받아서 버킷 번호 리턴
//	int n = hi(100);  // 이렇게 사용하는게 전부..

//	std::unordered_set<int> s; // "해쉬 테이블" 이라는 자료구조
//	s.insert(100);   
//	s.insert(200); // 이순간 hash<int> 를 사용해서 어디에 넣을지 결정
					
	// 결국 unorered_set 이 내부적으로 hash<> 를 사용해서 버킷 번호 결정.
}


