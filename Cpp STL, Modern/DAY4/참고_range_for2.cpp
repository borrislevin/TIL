// 참고_range_for2
#include <iostream>

struct Point3D
{
	int x = 1;
	int y = 2;
	int z = 3;
};
// 사용자 정의 타입을 range_for 에 넣으려면
// begin()/end()를 제공하면 됩니다.
int* begin(Point3D& p) { return &(p.x); }
int* end(Point3D& p)   { return &(p.z) + 1; } // 마지막 요소의 다음번 주소

// 정리 : 아래 코드에서 "복합객체" 자리에는
// 1. STL 의 모든 컨테이너
// 2. 크기가 정해진 배열 ( 주의 !, 동적 할당된 배열은 안됨. ex) int* p = new int[10] )
// 3. 사용자 정의 타입을 보내려면 begin()/end() 함수를 제공 하면 된다.
for (auto n : "복합객체")
{
}



int main()
{
	Point3D pd;

	// 아래 코드가 될까요 ? 왜 안될까요 ? 되게 하려면 ?
	// 컴파일후 에러 메세지 확인해 보세요
	for (auto n : pd)
	{
		std::cout << n << std::endl;
	}

	//-----------------------
	/*
	for (auto p = std::begin(pd); p != std::end(pd); ++p)
	{
		auto n = *p;
		//-------------------------------
		std::cout << n << std::endl;
	}
	*/
}



