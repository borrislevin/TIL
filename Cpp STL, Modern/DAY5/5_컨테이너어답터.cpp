#include <iostream>

// list 가 이미 있습니다
#include <list>
#include <vector>
#include <deque>

// 그런데, 스택이 필요합니다.
// 1. 새로 만들자.
// 2. list를 스택처럼 보이게 하자.
// "어답터 패턴" : 기존 클래스의 인터페이스(함수이름)을 변경해서
//			      다른 클래스처럼 보이게 하는 디자인기술.
// stack 만들때
// 1. 직접 메모리를 관리해도 됩니다.
// 2. list 등의 함수이름만 바꾸는 식으로 만들어도 됩니다. => "STL" 이 선택한 방식


template<typename T, typename Cont = std::deque<T> > class stack
{
	Cont st;
public:
	void push(const T& a) { st.push_back(a); }
	void pop()            { st.pop_back(); }
	T&   top()			  { return st.back(); }
};

#include <stack>  // 이 안에 위처럼 만들어진 스택이 있습니다.
				  // 흔히 "stack adapter" 라고 합니다.
int main()
{
	std::stack<int> st;

	stack<int, std::vector<int>> s2; // vector를 list 처럼 사용하겠다는 의미
	stack<int, std::list<int>>   s3; // 

	stack<int> s; // deque 

	s.push(10);
	s.push(20);
	s.push(30);

	std::cout << s.top() << std::endl;
	s.pop();
	std::cout << s.top() << std::endl;
	// 핵심 : s를 잘못 사용(앞으로 넣기)할수 있을까요 ?
}



/*
int main()
{
	// 선형컨테이너을 한쪽으로만 사용하면 결국 스택이다.
	std::list<int> s;
	s.push_back(10);
	s.push_back(20);
	s.push_back(30);

	std::cout << s.back() << std::endl; // 꺼내기만 - 30
	s.pop_back();
	std::cout << s.back() << std::endl; // 꺼내기만 - 20

	s.push_front(40); // 스택이 망가 졌다... 약속을 지키지 않았다.
					  // 차라리, 한쪽으로만 쓸수있게 클래스를 다시 만들면 어떨까 ?
}
*/