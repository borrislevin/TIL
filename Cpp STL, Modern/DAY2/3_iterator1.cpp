#include <iostream>
#include <list>   
#include <vector>

// STL 교재 50 page

template<typename T> struct Point
{
	T x, y;
	struct iterator {};
};
int main()
{
	// Point 객체 p1을 만들어 보세요
	Point<int> p1;
	// Point안에 iterator 타입의 객체 it 를 만들어 보세요.
	Point<int>::iterator it;

	//-------------------------------
	std::list<int>   s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	// 핵심 1. 반복자 타입 : "std::컨테이너이름<저장타입>::iterator" - 50 PAGE
	std::list<int>::iterator   p1 = s.begin();
	std::vector<int>::iterator p2 = v.begin();    // ? 채우세요.

	// C++11 이 도입되지 않은 환경에서는 위처럼 해야 합니다.
	// C++11 이 되입된 환경에서는 auto 가 편리합니다.
	auto p3 = s.begin();
	auto p4 = v.begin();


	// 핵심 2. .end() 는 마지막 다음을 가리킨다 - 49 page
	auto p5 = s.begin();
	auto p6 = s.end();	// "Past The end" 라고 합니다.
	*p5 = 10;
//	*p6 = 10; // runtime error

	// p6은 비교의 용도로만 사용해야 합니다.
	if (p5 == p6) {} // 아무 문제 없음



	// 핵심 3. 컨테이너의 변경과 코드 수정 - 50 page 중간쯤..
	// 성능 측정을 위해 "컨테이너를 바꿔 가면서 테스트 한다고 가정해 봅시다."
//	std::list<int>   c = { 1,2,3,4,5 };
//	std::vector<int> c = { 1,2,3,4,5 };
	int c[5] = { 1,2,3,4,5 };

//	std::list<int>::iterator it = c.begin(); // 컨테이너 변경시 "코드 수정" 발생
//	auto it = c.begin();					 // 컨테이너 변경시 "코드 수정" 이 없다.!!
											// 하지만, c가 진짜 배열이면 begin()멤버함수가 없다.

	// C++11권장 사항 : 멤버 함수 begin 대신 일반 함수 begin을 사용하라.
	auto it = std::begin(c);	// c가 STL 컨테이너 이건 진짜 배열이건 모두 ok.
								// c가 진짜 배열이면 it 는 "int* it"

	std::reverse(c.begin(),     c.end());	  // 오랫동안 사용해 왔던 방식
											  // c가 STL 컨테이너면 ok..
											  // c가 배열이면 error

	std::reverse(std::begin(c), std::end(c)); // C++11 부터 권장하는 방식
											  // c가 배열이라도 ok
}








