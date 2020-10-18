// C++ using : �⺻ typedef�� ����ϴ� ����
using LREF = int&; // typedef int& LREF;
using RREF = int&&;

int main()
{
	int n = 10;

	LREF r1 = n;  // int&  r1 = n
	RREF r2 = 10; // int&& r2 = 10;
	//--------------------------------------------
	// reference collapsing(�浹)
	// ��Ģ : ������ ��� && �϶��� && �� ����
	LREF& r3 = n ; // int& &	=> int&
	RREF& r4 = n ; // int&& &	=> int&

	LREF&& r5 = n ; // int& &&	=> int&
	RREF&& r6 = 10; // int&& &&	=> int&&

	// ���� : ����ڰ� ���� �浹 �ڵ带 �ۼ��Ҽ��� �����ϴ�.
	int& && r = n; // error

	// ���ø� �̳� typedef(using) �� ����� �ؼ��� ���ؼ��� ���
	foo<int&>(n);
}
template<typename T> void foo(T& a) {} // T& : int& & => int&





