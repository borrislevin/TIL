// 4_set2_1
#include <iostream>
#include "show.h"
#include <set> 
#include <functional>

// set 의 원리
/*
template<typename T> class set
{
	NODE* root;
public:
	void insert(T data)
	{
		// 아래 처럼 코드를 작성하면
		// 무조건 "<" 연산자를 사용하게 됩니다.
		if (data < root->data)
			add left child;

		else if (root->data < data)
			add right child;

		else
			이미 데이타 있음;
	}
};
*/
// std::less<int> f;  // < 연산을 수행하는 함수 객체
// bool b = f(10,3); // "10 < 3" 이므로 false
/*
template<typename T, typename CMP = std::less<T> > class set
{
	NODE* root;
	CMP cmp;	// 변경하지 않은 경우 less<int> cmp 의 의미.
public:
	void insert(T data)
	{
		// 직접 "<" 하는 대신에 cmp 함수객체의 ()연산자 사용
		if (cmp(data, root->data) )    // 결국, "data < root->data" 의미
			add left child;

		else if (cmp(root->data,  data) )
			add right child;

		else
			이미 데이타 있음;
	}
};
*/
// 2개의 요소를 비교하는 함수객체를 만듭니다.
template<typename T> struct greater
{
	inline bool operator()(T a, T b) const { return a > b; }
};

int main()
{
	// 각 요소를 어떻게 비교 할지, 템플릿의 2번째 인자 함수객체를 전달 합니다.
//	std::set<int, greater<int> > s;
	std::set<int, std::greater<int> > s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	s.insert(25);

	auto p = s.begin();

	while (p != s.end())
	{
		std::cout << *p << std::endl;
		++p;
	}

}







