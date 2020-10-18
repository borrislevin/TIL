#include <memory>
#include <iostream>

int main()
{
	// C++에는 3개의 스마트 포인터가 있습니다.

	// 1. shared_ptr
	std::shared_ptr<int> sp1(new int);
	std::shared_ptr<int> sp2 = sp1;     // 참조계수 증가

	// 2. weak_ptr
	std::shared_ptr<int> sp(new int);
	std::weak_ptr<int> wp = sp;        // 참조계수 증가 안함

	// 3. unique_ptr
	std::unique_ptr<int> up1(new int); // 자원의 독점.. up1만 자원을 가리킬수 있다.
//	std::unique_ptr<int> up2 = up1;    // 컴파일 에러

	std::cout << sizeof(sp) << std::endl; // shared_ptr   8
	std::cout << sizeof(up1) << std::endl; // shared_ptr   4
											// 그리고 별도의 "참조계수 메모리"도 없습니다.



	// 단지 "객체의 자동 삭제 기능정도만" 필요 하다면 unique_ptr을 사용하세요
	// => 가볍고, 빠르고, 오버헤드도 없습니다.

	// 소유권이 없는 스마트 포인터 : weak_ptr
	// 소유권이 독점 : unique_ptr
	// 소유권의 공유 : shared_ptr
}