#include <iostream>
#include <memory>

void foo(void* p) { free(p); }

int main()
{
	// ������ ����
	std::shared_ptr<int>  sp1(new int); // sp1�� �Ҹ��ڿ��� delete �ϹǷ� ������ delete �ʿ����

	// �޸� �Ҵ� ����� ������ ���.
	std::shared_ptr<int>  sp2( (int*)malloc(sizeof(int)), foo ); // �Ҹ��ڿ��� delete ���� ����
																// foo�� ȣ���� �޶�.

	std::shared_ptr<int> sp3((int*)malloc(100), [](int* p) { free(p); });

	// �迭 ������� �Ҵ��� ��� - delete �� �ƴ� delete[] �� �ؾ� �մϴ�.
	std::shared_ptr<int> sp4(new int[10],  [](int* p) { delete[] p; });

	// C++17 ���ʹ� �Ʒ� ó�� �ϸ� �˴ϴ�.
	std::shared_ptr<int[]> sp4(new int[10]);

	// ���..
	// 1. ������ ������ �ʿ� ���ٸ�
	std::shared_ptr<int> p1(new int);					// ���ڵ� ���ٴ�
	std::shared_ptr<int> p2 = std::make_shared<int>();	// ���ڵ尡 ����.


	// 2. �����ڸ� �����ؾ� �Ѵٸ� - make_shared�� ����Ҽ� ����..
	std::shared_ptr<int> p3((int*)malloc(100), [](int* p) { free(p); });


	// 3. new�� �迭 ó�� ����ϸ�
	std::shared_ptr<int>   p4(new int[10], [](int* p) { delete[] p; }); // C++17 ������
	std::shared_ptr<int[]> p5(new int[10]);								// C++17 ����
//	std::shared_ptr<int[]> p6 = std::make_shared<int[10]>();		    // C++20 ���� ����

	// ���� int[10] �� ���� �Ҵ� �ϰ� ����Ʈ�����ͷ� ����ϰ� �;��ٸ� 
	// => ��ư� �������� "std::vector<int> v(10)" �� ����ϼ���...
}







