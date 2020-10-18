// 6_선형컨테이너

// 핵심 1. 선형 컨테이너의 종류와 헤더 파일
// "컨테이너한개 당 헤더 하나"
// C++98 : 3개의 선형컨테이너
#include <vector> 
#include <deque>  
#include <list>   

// C++11 : 2개의 선형 컨테이너 추가
#include <forward_list>
#include <array>

#include "show.h"


int main()
{
	// 핵심 2. 선형 컨테이너 는 사용법의 거의 동일 합니다.
//	std::list<int> c = { 1,2,3,4,5,6,7,8,9,10 };
//	std::deque<int> c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// 핵심 3. 선형컨테이너의 사용법은 유사하지만 "성능의 차이"가 있습니다.
	// 3개의 컨테이너는 "기능"은 유사 하지만 "성능"의 차이가 있습니다

	// 삽입삭제가 많다. : list가 좋습니다.
	// 검색이 많다.     : vector가 좋습니다. CPU 캐쉬를 고려하면 vector가 좋은 경우가 많습니다.
	//									
	
	// 사용법이 유사하지만, 차이가 있다면, 
	// 해당 컨테이너의 해당 함수는 너무 비효율적이므로
	// 사용하지 말라는 의미.
	// vector는 앞쪽으로 삽입/삭제 할수 없다.


//	c.push_front(10);		// vector는 에러
	c.push_back(10);
//	c.pop_front(); // 제거만, vector는 에러.
	c.pop_back();			

	int n1 = c.front();
	int n2 = c.back();

	auto p1 = std::find(c.begin(), c.end(), 5);
//	c.erase(p1);          // 한개만 지우기
	c.erase(p1, c.end()); // 구간 지우기

	// 핵심 3. 각 컨테이너의 반복자의 종류를 파악해라..

	// vector : 임의접근 반복자 => 모든 알고리즘 사용가능, p = p + 5  가능
	// deque  : 임의접근 반복자 => 모든 알고리즘 사용가능, p = p + 5  가능

	// list  : 양방향 반복자 => std::sort()는 사용할수 없다.  p = p+5 안됨, ++p만 가능
	//		   std::sort(s.begin(), s.end()); // error
	//         s.sort(); // ok.. 멤버함수로 정렬 가능

	// forward_list : 싱글리스트, 전진형 반복자  => std::reverse()도 사용못함

	// array : 연속된 메모리, 임의 접근 반복자



	// 핵심 4. [] 로 접근하는 것은 "임의접근 반복자"를 가진 것만 가능
	c[0] = 10; // vector, deque, array 는 가능
				// list, forward_list 는 안됨..

	// 권장 
	// [] 연산을 사용하고 싶은데, 앞쪽으로 삽입삭제는 필요 없다. : vector
	// [] 연산을 사용하고 싶은데, 앞쪽으로 삽입삭제는 필요 하다. : deque
	// 앞/뒤/중간에 삽입삭제가 많고, []는 필요없다. :  list
	// 앞/뒤/중간에 삽입삭제가 많고, []는 필요하다. :  deque

	// 절대적인 관점이 아님.. 개발하면서 컨테이너를 변경하면서 성능 테스트하면된다.

}



