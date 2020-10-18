// 2_array3.cpp
#include <iostream>
#include <vector>

// C++11 에서는 스택에 데이타를 보관하는 컨테이너 추가
/*
template<typename T, int N> struct array
{
	T buff[N];
	
	inline bool empty() const { return N == 0; }
	inline int  size() const  { return N; }

	// 반복자 : ++로 이동하고 *로 요소에 접근 가능한 것
	//	        포인터처럼 동작하는 모든 것
	// 포인터도 "반복자" 입니다.
	inline T* begin() const { return buff ; }
	inline T* end()   const { return buff+N ; }
};
*/
#include <array>

// array 에 대한 질문
// 1. 크기 변경 : 할수 없다. resize() 멤버 함수 없다.
// 2. 반복자 종류 : 임의접근 반복자
// 3. [] 연산자 : 사용가능.
// 언제 사용 : 대부분 vector를 사용하는데. 
//			크기변경이 필요 없고, 정말 빠른 속도가 요구될때
//			임베디드 개발자가 자주 사용.
int main()
{
	// 모든 데이타가 스택에 있다.
	// 진짜 배열을 사용하지.. 왜 array 를 만들었는가?
	// => 유용한 멤버 함수를 추가할수 있다.
//	array<int, 5> arr = { 1,2,3,4,5 };
	std::array<int, 5> arr = { 1,2,3,4,5 };  // C++11 의 array

	int n = arr.size();
	auto p1 = arr.begin();
	auto p2 = arr.end();


	// C 배열     : 불편한다.(크기변경X)
	// STL vector : 편리하다.(크기변경O)
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };			// 스택 메모리
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };	// 힙 메모리


}



