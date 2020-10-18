// 함수 인자로
// int&  : int 형 lvalue 만 받을수 있다
// int&& : int 형 rvalue 만 받을수 있다

// T&  : 임의 타입의 lvalue  만 전달 받을수 있다.
//     => 뒤에 &가 한개 이므로 T가 어떤형태(int&, int&&) 라도 결국 은 lvalue reference 이다.


// T&& : 임의 타입의 lvalue 와 rvalue 를 모두 받을수 있다.
//		  "받을수 있다" 의 의미  => int& 버전의 함수와 int&& 버전의 함수를 생성해준다는것

// n(lvalue)  을 보내면 =>  T 는 "int&" , T&& 는 "int&"    최종생성된 함수 f4(int&)
// 10(rvalue) 을 보내면 =>  T 는 "int" ,  T&& 는 "int&&"   최종생성된 함수 f4(int&&)

// 즉, 모든 종류의 인자를 call by value 가 아닌 "call by reference"로 받는다.

// effective modern C++ 책에서 "T&&" 를 "universal reference" 라고 부르자고 제안
// 하지만 결국, "forwarding reference" 라고 부르기로 결정.









void f1(int&  r) {}
void f2(int&& r) {}

template<typename T> void f3(T& a)
{
}

int main()
{
	int n = 10;

	// 1. 사용자가 템플릿의 인자 타입을 직접 전달하는 경우
	f3<int>( n );	// T : int    T& : int&              최종함수모양 void f3(int& a) 
	f3<int&>(n );   // T : int&   T& : int& & => int&    최종함수모양 void f3(int& a) 
	f3<int&&>(n );  // T : int&&  T& : int&& & =>int&    최종함수모양 void f3(int& a) 

	// 2. 사용자가 타입을 전달하지 않으면
	//    컴파일러는 함수인자를 보고 "최대한 함수를 생성하기 위해 노력합니다."
	foo(10); // error. 함수를 만들어 낼수 없다.
	foo(n);  // T 가 "int"로 결정됨.     생성된 함수 - void f3(int& a)
}














template<typename T> void f4(T&& a)
{
}
int main()
{
	int n = 10;

	// 1. 사용자가 타입을 직접 전달하는 경우 - ? 채워 보세요
	f4<int>(10 );	// T : int    T&& : int&&				최종함수 모양  void f4(int&& a)
	f4<int&>(n );	// T : int&   T&& : int& && => int&		최종함수 모양  void f4(int& a)
	f4<int&&>(10);	// T : int&&  T&& : int&& &&=> int&&	최종함수 모양  void f4(int&& a)

	// 2. 사용자가 타입을 전달하지 않으면
	//    컴파일러는 함수 인자를 보고 "함수를 생성할수 있게 하기 위해 T 의 타입을 결정합니다.

	// 아래 코드를 보고 컴파일러는 T의 타입을 뭘로 했을지 맞춰 보세요
	f4(n);  // T : int&   T&& : int& && => int&		f4(int&  a) 
	f4(10); // T : int    T&& :	int&&				f4(int&& a)

}
