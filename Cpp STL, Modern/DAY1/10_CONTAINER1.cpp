#include <iostream>
using namespace std;

// �ڷᱸ���� ?
// ����Ÿ�� �����ϱ� ����
// �޸𸮸� � ���·� ������ ���ΰ� ?

// ���� �迭     : ���ӵ� �޸�
//				   ���Ի����� ������.

// ��ũ�� ����Ʈ : ��� ��Ұ� ������ �޸�
//				   ���Ի����� ������.

// Tree(Ʈ��)
// Hash(�ؽ�)

// stack
// queue
// ���� �ֽ��ϴ�.


template<typename T> struct Node
{
	T     data;
	Node* next;
	Node(const T& a, Node* n) : data(a), next(n) {}
};
//Node<int> d(10, 300����); // ����������!





template<typename T> class slist
{
	Node<T>* head = 0;
public:
	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}
};

int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50); // �� ������ �޸� �׸��� 
					  // �׷� ���ô�... 
}
// �̱۸�ũ�� ����Ʈ : NODE�� �� �������θ� ���󰥼� �ִ�
// ����ũ�� ����Ʈ : NODE�� ���� �������� ���󰥼� �ִ°�