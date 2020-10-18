#include <iostream>

class Car {};

int main()
{
	// shared_ptr : 참조계수 증가, 수명에 관여, 항상 안전합니다.
	std::shared_ptr<Car> sp1(new Car);
	std::shared_ptr<Car> sp2 = sp1;

	std::cout << sp1.use_count() << std::endl;  // 2

	// sp1이 자원 포기
	sp1 = nullptr; // 또는 sp1.reset()

	// sp2는 어떤 상황에서도 안전하게 사용가능합니다.
	// 그래서, "shared_ptr"을 "소유권을 가지는 스마트 포인터" 라고 합니다.
	// sp2->Go();
	//--------------------------------------------------------------

	// raw pointer : 참조계수와 무관, 수명에 관여 못함. Dangling pointer의 가능성 있음.
	std::shared_ptr<Car> sp3(new Car);
	Car* p = sp3.get();

	sp3 = nullptr;

	// 자원은 파괴 되었지는 p는 그 사실을 알수 없습니다
	if (p != nullptr) // 참이나오지만 그래도 객체는파괴된 상태
	{
		// p 사용시 runtime error
	}
	//------------------------------------
	// std::weak_ptr : 참조계수 증가 안함, 수명관여 안함.
	//					객체 파괴여부 조사 가능
	std::shared_ptr<Car> sp4(new Car);
	std::weak_ptr<Car> wp = sp4;

	std::cout << sp4.use_count() << std::endl;

	sp4 = nullptr;

	if (wp.expired())  // 이 기능 때문에 Raw Pointer 보다 좋다. Dangling Pointer 방지.
	{
		std::cout << "객체는 이미 파괴 되었습니다." << std::endl;
	}

	// 언제 weak_ptr을 사용하나요 ?
	// => 상호 참조 등의 문제가 발생할 확률이 있다면
	//    참조계수가 증가하지 않는(수명에 관여 하지 않는) 스마트 포인터 필요
	//    "이 경우에 사용"
	//	  대부분은 shared_ptr 사용



}








