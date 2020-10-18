#include <iostream>
#include <set>
#include <unordered_set>
#include "show.h"

// vector, list : 입력한 순서로 "한줄(sequence)"로 보관
// set(tree)    : 루트 부터 크기를 비교해서 넣기
// hash         : 입력한 데이타를 해쉬 함수에 보내서 어디에 보관할지 결정한후 저장
//				  검색시 다시 해쉬 함수를 사용

// tree : 검색이 빠른 편,            정렬을 유지(왼쪽 마지막 자식 => 오른쪽 마지막 자식순)
// hash : 검색이 가장 빠른 자료구조, 정렬이 유지 되지 않은다.

int main()
{
	std::set<int> s2;
	s2.insert(10);
	s2.insert(35);
	s2.insert(20);
	s2.insert(25);
	auto p1 = s2.find(20);
	std::cout << *p1 << std::endl;
	show(s2);	// 정렬 유지
	//-------------------------------------
	std::unordered_set<int> s;

	s.insert(10);	// 10을 해쉬 함수에 전달해서 버킷번호를 얻고
					// 해당 버킷에 보관
	s.insert(35);
	s.insert(20);
	s.insert(25);
	auto p = s.find(20); // 해쉬 함수를 사용해서 검색
						// 20을 해쉬 함수로 보내서 버킷 번호얻고
						// 해당 버킷에서 검색.
	std::cout << *p << std::endl;
	show(s);	// 정렬 유지 안됨.
}

