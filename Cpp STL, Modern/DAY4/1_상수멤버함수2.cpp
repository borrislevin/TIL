class Rect
{
	int x, y, w, h;
public:
	// 객체의 상태를 변경하지 않는 모든 멤버 함수는 "반드시 상수 멤버 함수" 로 만들어야 합니다.
	// 모든 "getter" 는 반드시 "상수 멤버 함수"로 하세요
	// "필수 문법" 입니다.
	int getArea() const { return w * h; }

	// 객체의 상태를 변경(멤버 데이타 변경) 하는 함수는 "비상수 멤버 함수로"!
	void setY(int yVal) { y = yVal; }
};

//void foo(Rect r) // call by value : 복사본에 의한 오버헤드
void foo(const Rect& r) // const reference : C++ 에서 제일 좋아하는 인자 전달 기술
{
	int n = r.getArea(); // error. 되게 하려면 getArea()는 상수 멤버함수가 되어야 한다
}

// 상수 멤버 함수의 의미 : 해당 함수안에서는 멤버 값을 변경하지 않을 테니..
//						상수 객체라도 호출할수 있게 해달라고 컴파일러에게 알려주는 것




int main()
{
	Rect r;		// 생성자로 초기화 했다고 가정하고.. 
				// 상수 객체 아님.			
	int n = r.getArea(); // ok...!!
	
	foo(r);
}