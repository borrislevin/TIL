// �ӽ� ��ü
// ����

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

// �ӽð�ü�� ���� �����ϴ� ����
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
	// �ӽ� ��ü�� ���� Ÿ���� ���ؼ� ������ �Ұ����ϴ�

	// �ӽ� ��ü�� const Test&�� ���ؼ� ������ �����ϴ�. (�ӽ� ��ü�� ���� line ����� �ı��Ǵµ�, ���� �����)
	const Test& t = Test();

	// �ӽ� ��ü�� T&&�� ���ؼ� ������ �����ϴ�. (R-value Reference)
	const Test&& t2 = Test();
}