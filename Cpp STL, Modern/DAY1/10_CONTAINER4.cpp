#include <list> 
#include <iostream>
#include <algorithm> // 여기에 std::find()가 있습니다

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p1 = x;      // 배열의 시작주소
	int* p2 = x + 10; // 마지막 다음 요소의 주소

	// 배열 전체에서 3을 검색
	int* p3 = std::find(x, x + 10, 3);

	//---------------------------------------
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p4 = s.begin(); // list의 1번째 요소를 가리키는 반복자(포인터 역활의 객체)
	auto p5 = s.end();   // list의 마지막 다음 요소를 가리키는 반복자

	// list 전체에서 3을 찾아라!! ? 채워보세요 p4, p5 사용하지 말고, 직접 적어 보세요
	auto ret = std::find( s.begin(), s.end() , 3);

	if (ret == s.end() )
		std::cout << "검색 실패" << std::endl;
	else
		std::cout << "검색 성공 : " << *ret << std::endl;
}




