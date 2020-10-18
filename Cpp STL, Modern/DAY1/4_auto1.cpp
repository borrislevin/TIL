// 4_auto1
#include <iostream>
#include <vector>

int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };


	// auto : 좌변의 코드를 보고 우변 변수의 타입을 컴파일러가 결정해 달라.
	//        실행시 성능저하 없음.
	// 장점1 : 코드의 한곳이 변경될때 다른 곳의 수정을 최소한 한다.
	// 단점  : 가독성이 떨어진다.
	auto n = x[0];


	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 장점 2. 복잡한 형식의 표기법이 있을때 auto를 사용하자!
	// 반복자 꺼내기
	//std::vector<int>::iterator p = v.begin();
	auto p = v.begin();
}