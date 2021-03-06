int x = 10;

int  foo() { return x; } // "10"이라는 값을 반환
int& goo() { return x; } // x의 메모리 정보를 반환


// lvalue : 등호의 양쪽에 모두 놓일수 있다.
//			data 메모리 할당, 이름이 있다.
//			여러문장에서 사용가능.
//			주소 연산자로 주소를 구할수 있다.
//			"참조를 반환하는 함수"

// rvalue : 등호의 오른쪽에만 놓일수 있다.
//			이름이 없고, 값만 있다, 단일 문장에서만 사용된다.
//			주소 연산자로 주소를 구할수 없다.
//			"값타입으로 반환하는 함수"
//			literal(10, 3.4등),  임시객체 

int main()
{
	int v1 = 10, v2 = 10;
	v1 = 20;	// v1 : lvalue		20 : rvalue
	10 = v1;
	v2 = v1;

	int* p1 = &v1;
	int* p2 = &10; 

	foo() = 20; // error. foo는 값 반환
	goo() = 20; // ok.    goo는 참조(메모리정보)반환
				// 참조리턴을 하면 "함수호출"을 등호의 왼쪽에 놓을수 있습니다.
	//-----------------------------
	// c 는 lvalue 일까요 ? rvalue 일까요 ?
	const int c = 10;
	c = 20;			// lvalue 입니다.
					// 수정 불가능한(immutable) lvalue 라고 합니다.

}









