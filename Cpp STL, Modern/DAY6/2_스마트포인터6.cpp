#include <iostream>
#include <memory>

void foo(void* p) { free(p); }

int main()
{
	// 삭제자 변경
	std::shared_ptr<int>  sp1(new int); // sp1이 소멸자에서 delete 하므로 별도의 delete 필요없음

	// 메모리 할당 방식을 변경한 경우.
	std::shared_ptr<int>  sp2( (int*)malloc(sizeof(int)), foo ); // 소멸자에서 delete 하지 말고
																// foo를 호출해 달라.

	std::shared_ptr<int> sp3((int*)malloc(100), [](int* p) { free(p); });

	// 배열 모양으로 할당한 경우 - delete 가 아닌 delete[] 로 해야 합니다.
	std::shared_ptr<int> sp4(new int[10],  [](int* p) { delete[] p; });

	// C++17 부터는 아래 처럼 하면 됩니다.
	std::shared_ptr<int[]> sp4(new int[10]);

	// 결론..
	// 1. 삭제자 변경이 필요 없다면
	std::shared_ptr<int> p1(new int);					// 이코드 보다는
	std::shared_ptr<int> p2 = std::make_shared<int>();	// 이코드가 좋다.


	// 2. 삭제자를 변경해야 한다면 - make_shared는 사용할수 없고..
	std::shared_ptr<int> p3((int*)malloc(100), [](int* p) { free(p); });


	// 3. new를 배열 처럼 사용하면
	std::shared_ptr<int>   p4(new int[10], [](int* p) { delete[] p; }); // C++17 전까지
	std::shared_ptr<int[]> p5(new int[10]);								// C++17 부터
//	std::shared_ptr<int[]> p6 = std::make_shared<int[10]>();		    // C++20 부터 지원

	// 만약 int[10] 를 힙에 할당 하고 스마트포인터로 사용하고 싶었다면 
	// => 어렵게 하지말고 "std::vector<int> v(10)" 을 사용하세요...
}







