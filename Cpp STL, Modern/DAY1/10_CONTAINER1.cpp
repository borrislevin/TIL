#include <iostream>
using namespace std;

// 자료구조란 ?
// 데이타를 보관하기 위해
// 메모리를 어떤 형태로 관리할 것인가 ?

// 동적 배열     : 연속된 메모리
//				   삽입삭제가 느리다.

// 링크드 리스트 : 모든 요소가 떨어진 메모리
//				   삽입삭제가 빠르다.

// Tree(트리)
// Hash(해쉬)

// stack
// queue
// 등이 있습니다.


template<typename T> struct Node
{
	T     data;
	Node* next;
	Node(const T& a, Node* n) : data(a), next(n) {}
};
//Node<int> d(10, 300번지); // 설명을위해!





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
	s.push_front(50); // 이 순간의 메모리 그림을 
					  // 그려 봅시다... 
}
// 싱글링크드 리스트 : NODE를 한 방향으로만 따라갈수 있다
// 더블링크드 리스트 : NODE를 양쪽 방향으로 따라갈수 있는것