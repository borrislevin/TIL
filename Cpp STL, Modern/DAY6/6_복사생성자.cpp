// 10_복사생성자
class Point
{
	int x, y;
public:
	Point() {}				// 1
	Point(int a, int b) {}	// 2

	// 복사 생성자를 직접 만들어 봅시다.
	// 모양 1. call by value
//	Point(Point pt) {}  // 인자를 받는 모양이 "Point pt = p2" 됩니다. 다시 복사 생성자 호출
						// 복사 생성자가 무한히 호출되는 표기법
						// 그래서 , 컴파일 에러!! 절대 값 타입이 될수 없다.

	// 모양 2. call by reference
	// 컴파일 에러없음. 그런데...  "임시객체"를 받을수 없다.
	//				값을 리턴하는 함수 리턴값을 받을수 없게 된다.
	//				Point ret = foo(); // error
	// Point(Point& pt) {}

	// 모양 3. lvalue 와 rvalue 모두 받는것이 좋다 => "const lvalue reference"!!
	Point(const Point& pt)
		: x(pt.x), y(pt.y)
	{
	}
	// 이런 이유 때문에 "복사 생성자의 모양"이 위처럼 만들게 됩니다.
	//----------------------------------------------------------------
};

Point foo()
{
	Point pt(1, 2);
	return pt;	// 임시객체 반환
}
int main()
{
	Point p1;		// 1번 생성자 사용	
	Point p2(1, 2); // 2번 생성자 사용
	Point p3(p2);	// 인자가 한개인 생성자 필요. 
					// Point(Point)모양일 필요한데, 만들지 않으면 컴파일러제공.

	Point ret = foo(); // Point ret( foo() );
					
}




