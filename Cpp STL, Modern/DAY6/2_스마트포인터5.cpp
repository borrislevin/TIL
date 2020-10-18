#include <iostream>
#include <memory>

// 아래 처럼 함수를 만들면 사용자가 "new" 사용시 아래 함수가 호출됩니다.
void* operator new(size_t sz)
{
	std::cout << "new : " << sz << std::endl;
	return malloc(sz);
}

struct Point
{
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
	// 아래 코드는 동적 메모리 할당을 몇번하게 될까요 ?
	// 2번, new Point(1,2) 와 new 참조계수용 메모리
	//std::shared_ptr<Point> sp(new Point(1, 2));

	// 객체 + 관리객체의 크기를 한번에(연속된 메모리)에
	// 할당하면 성능이 좋아집니다.
	std::shared_ptr<Point> sp1 = std::make_shared<Point>(1, 2);
	


	// 위 코드는 아래 코드와 같은 의미지만, 
	// 메모리 구조가 약간 다름니다.
	std::shared_ptr<Point> sp2(new Point(1, 2));

	// 권장 : shared_ptr을 사용하기로 했다면
	//        되도록이면 make_shared 로 만들어서 사용하자..!
}






