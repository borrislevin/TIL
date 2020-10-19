// 임시 객체
// 복사

#include <iostream>
using namespace std;
class Test {
public:
	Test() {
		cout << "Test()" << endl;
	}

	~Test() {
		cout << "~Test()" << endl;
	}

	Test(const Test& t) {
		cout << "Test(const Test&)" << endl;
	}
};
//

//void foo() {Test t}

// 임시객체를 직접 생성하는 문법
// TYPE()

Test foo() {
	/*Test t;
	return t;*/
	return Test();
}

void goo(const Test& t) {

}


int main() {
	foo();

	Test t = Test();
	// 임시 객체는 참조 타입을 통해서 참조가 불가능하다

	// 임시 객체를 const Test&를 통해서 참조가 가능하다. (임시 객체는 원래 line 벗어나면 파괴되는데, 생명 연장됨)
	const Test& t = Test();

	// 임시 객체를 T&&를 통해서 참조가 가능하다. (R-value Reference)
	const Test&& t2 = Test();
}