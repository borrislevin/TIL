#include <iostream>
using namespace std;


template<typename T> struct Node
{
	T     data;
	Node* next;
	Node(const T& a, Node* n) : data(a), next(n) {}
};


// 이전시간에 만든 find()를 사용해서 
// 아래 slist 에서 "30"을 검색할수 있을까 ?
// 왜 안될까 ?

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
	s.push_front(50); 					  
}
