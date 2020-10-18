#include <string>
#include <vector>

void foo(std::string s)      {}
void goo(std::vector<int> v) {}

int main()
{
	// ������ ������ ���̴� �ڵ�� ?
	foo("hello");	// 1. ������ �ʴ�. �ǰ� ����.!
					// �� �ڵ尡 �Ǹ� s2 �� ok
	goo(10);		// 2. ������ ���δ�. �ȵǰ� ����.

	// string�� explicit �����ڰ� �ƴ�.
	std::string s1("hello");	// ok	
	std::string s2 = "hello";	// ok

	// vector(int) �����ڴ� explicit
	std::vector<int> v1(10);	// ok
	std::vector<int> v2 = 10;	// error
	std::vector<int> v3 = { 10 };// ok.. �̰��� vector(int)�� �ƴ϶�
								 //		 vector(initializer_list<int>) ��� ���.

	// ����Ͽ� ����Ʈ ������ ���ϴ�
	std::shared_ptr<int> sp1(new int); // ok
	std::shared_ptr<int> sp2 = new int; // error. �ᱹ "explicit"������

	// ���� Ʈ���� : explicit �� ���� �θ� ���˴ϴ�. �������� �ʰ� ����!!
}
