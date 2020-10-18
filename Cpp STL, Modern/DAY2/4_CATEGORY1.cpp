#include <forward_list>
#include <list>
#include <vector>

int main()
{
	// 링크드 리스트(linked list ) : 각 요소가 떨어진 메모리
	// 2가지 종류가 있습니다.
	// Single linked list : 하나의 노드가 한쪽으로만 메모리 주소를 관리
	// Double linked list : 하나의 노드가 양쪽으로 메모리 주소를 관리
	std::forward_list<int> s1 = { 1,2,3 };  // 싱글리스트
	std::list<int>         s2 = { 1,2,3 };	// 더블리스트

	auto p1 = s1.begin();
	auto p2 = s2.begin();
	
	// 다음중 에러를 모두 고르세요
	++p1; // 1
	--p1; // 2. error. 싱글리스트의 반복자는 ++만가능
		  //		   노드가 한쪽으로만 주소를 관리.
	++p2; // 3
	--p2; // 4

	//---------------------
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int>   s = { 1,2,3,4,5 };

	auto pv = v.begin();
	auto ps = s.begin();

	// 아래 코드중 에러가 있을까요 ?
	// 반복자 사용시
	// "++연산보다 성능의 향상이 있는 경우만 + 연산제공"
	// 즉, 연속된 메모리의 반복자는 +가능
	//     list의 반복자는 + 안됨

	++pv;			// 1
	++ps;			// 2
	pv = pv + 3;	// 3
	ps = ps + 3;	// 4. error

}


