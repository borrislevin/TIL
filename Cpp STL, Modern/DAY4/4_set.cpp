#include <iostream>
#include "show.h"
#include <set> // Red Black Tree로 구현

// 사용자가 입력한 100개의 데이타를 "선형컨테이너(list, vector, deque, array)"에 보관했다.

// 입력된 값중 50을 찾으려고 한다. 

// 최선의 경우 몇번 만에 찾을까 : 1번째에서 바로 찾는 경우
// 최악의 ""				    : 마지막에 있는 경우, 100번 비교
// 평균   ""                    : 50번 비교


// 좀더 효율적인 검색을 하려면 ?
// => "Tree" 라는 자료 구조를 사용한다.
// STL 의 set이 "Tree" 로 구현되어 있습니다

// set(TREE)의 장점
// 1. 검색 속도가 빠르다.
//    루트 부터 크기 비교로 검색 => 이진 검색
//    참고, 앞에서 부터 무조건 차례대로 검색 => 선형검색

// 2. 왼쪽 마지막 자식부터 오른쪽마지막 자식까지보면
//   "정렬"을 유지 한다
//	 std::sort()를 사용할 필요 없다.
//   항상, 정렬을 유지 하고 있다.

// sequence container : 선형(한줄로)으로 되어 있는 컨테이너
// associative container : data가 어떤 규칙에 따라 저장되어 
//							있는 컨테이너들.

int main()
{
	std::set<int> s;

	s.insert(20);	// root node에 보관
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	s.insert(25);

	auto p = s.begin(); // 왼쪽 마지막 노드

	// ++p; 정렬을 유지 할수 있도록 이동
	//     

	while (p != s.end())
	{
		std::cout << *p << std::endl;
		++p;
	}
	
}







