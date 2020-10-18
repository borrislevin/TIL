// 방법 1. call by value
//		특징 : 메모리에 복사본을 만들어서 "값"을 전달 받고 있다.
//			   int 가 아닌 크기가 큰 구조체이면 오버헤드가 있다.
// void foo(int a) {}

// 방법 2. const lvalue reference
//		특징 : 복사본이 생성되지 않는다.
//			   상수성이 추가 되므로 원본의 값을 수정할수는 없다.
// void foo(const int& a) {}

// 방법 3. 상수성 추가 없고, 복사본도 없이 그대로 전달 받고 싶다
//			C++98 : 방법이 없다.
//			C++11 : 동일이름의 함수를 2개 만들면 된다.
// void foo(int&  a) {}
// void foo(int&& a) {}


// 방법 4. "방법3"의 2개 함수를 자동으로 생성되게 할수 없을까 ?
// "forwarding reference"가 이런 용도로 사용되는것!!!
template<typename T> void foo(T&& a) {}

// foo(n) => void foo(int& a)  함수 생성
// foo(10)=> void foo(int&& a) 함수 생성



int main()
{
	int n = 10;

	// lvalue 와 rvalue를 모두 받을수 있는 foo 함수를 만들고 싶다
	foo(n);
	foo(10);
}
