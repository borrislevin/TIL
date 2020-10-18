#include <iostream>
#include <list>   
#include <vector>

// STL ���� 50 page

template<typename T> struct Point
{
	T x, y;
	struct iterator {};
};
int main()
{
	// Point ��ü p1�� ����� ������
	Point<int> p1;
	// Point�ȿ� iterator Ÿ���� ��ü it �� ����� ������.
	Point<int>::iterator it;

	//-------------------------------
	std::list<int>   s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	// �ٽ� 1. �ݺ��� Ÿ�� : "std::�����̳��̸�<����Ÿ��>::iterator" - 50 PAGE
	std::list<int>::iterator   p1 = s.begin();
	std::vector<int>::iterator p2 = v.begin();    // ? ä�켼��.

	// C++11 �� ���Ե��� ���� ȯ�濡���� ��ó�� �ؾ� �մϴ�.
	// C++11 �� ���Ե� ȯ�濡���� auto �� ���մϴ�.
	auto p3 = s.begin();
	auto p4 = v.begin();


	// �ٽ� 2. .end() �� ������ ������ ����Ų�� - 49 page
	auto p5 = s.begin();
	auto p6 = s.end();	// "Past The end" ��� �մϴ�.
	*p5 = 10;
//	*p6 = 10; // runtime error

	// p6�� ���� �뵵�θ� ����ؾ� �մϴ�.
	if (p5 == p6) {} // �ƹ� ���� ����



	// �ٽ� 3. �����̳��� ����� �ڵ� ���� - 50 page �߰���..
	// ���� ������ ���� "�����̳ʸ� �ٲ� ���鼭 �׽�Ʈ �Ѵٰ� ������ ���ô�."
//	std::list<int>   c = { 1,2,3,4,5 };
//	std::vector<int> c = { 1,2,3,4,5 };
	int c[5] = { 1,2,3,4,5 };

//	std::list<int>::iterator it = c.begin(); // �����̳� ����� "�ڵ� ����" �߻�
//	auto it = c.begin();					 // �����̳� ����� "�ڵ� ����" �� ����.!!
											// ������, c�� ��¥ �迭�̸� begin()����Լ��� ����.

	// C++11���� ���� : ��� �Լ� begin ��� �Ϲ� �Լ� begin�� ����϶�.
	auto it = std::begin(c);	// c�� STL �����̳� �̰� ��¥ �迭�̰� ��� ok.
								// c�� ��¥ �迭�̸� it �� "int* it"

	std::reverse(c.begin(),     c.end());	  // �������� ����� �Դ� ���
											  // c�� STL �����̳ʸ� ok..
											  // c�� �迭�̸� error

	std::reverse(std::begin(c), std::end(c)); // C++11 ���� �����ϴ� ���
											  // c�� �迭�̶� ok
}








