// 9_STL_ALGORITHM6
#include <iostream>
#include <algorithm> // 이안에 앞에서 만든것과 동일한 std::find() 함수가 있습니다

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// x배열 전체에서 15을 검색하세요
	int* p = std::find(x , x + 10 , 15 );

	if ( p == x+10 )
		std::cout << "검색실패" << std::endl;
	else
		std::cout << "검색 성공 : " << *p << std::endl;
}