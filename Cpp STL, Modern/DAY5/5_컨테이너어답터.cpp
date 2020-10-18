#include <iostream>

// list �� �̹� �ֽ��ϴ�
#include <list>
#include <vector>
#include <deque>

// �׷���, ������ �ʿ��մϴ�.
// 1. ���� ������.
// 2. list�� ����ó�� ���̰� ����.
// "����� ����" : ���� Ŭ������ �������̽�(�Լ��̸�)�� �����ؼ�
//			      �ٸ� Ŭ����ó�� ���̰� �ϴ� �����α��.
// stack ���鶧
// 1. ���� �޸𸮸� �����ص� �˴ϴ�.
// 2. list ���� �Լ��̸��� �ٲٴ� ������ ���� �˴ϴ�. => "STL" �� ������ ���


template<typename T, typename Cont = std::deque<T> > class stack
{
	Cont st;
public:
	void push(const T& a) { st.push_back(a); }
	void pop()            { st.pop_back(); }
	T&   top()			  { return st.back(); }
};

#include <stack>  // �� �ȿ� ��ó�� ������� ������ �ֽ��ϴ�.
				  // ���� "stack adapter" ��� �մϴ�.
int main()
{
	std::stack<int> st;

	stack<int, std::vector<int>> s2; // vector�� list ó�� ����ϰڴٴ� �ǹ�
	stack<int, std::list<int>>   s3; // 

	stack<int> s; // deque 

	s.push(10);
	s.push(20);
	s.push(30);

	std::cout << s.top() << std::endl;
	s.pop();
	std::cout << s.top() << std::endl;
	// �ٽ� : s�� �߸� ���(������ �ֱ�)�Ҽ� ������� ?
}



/*
int main()
{
	// ���������̳��� �������θ� ����ϸ� �ᱹ �����̴�.
	std::list<int> s;
	s.push_back(10);
	s.push_back(20);
	s.push_back(30);

	std::cout << s.back() << std::endl; // �����⸸ - 30
	s.pop_back();
	std::cout << s.back() << std::endl; // �����⸸ - 20

	s.push_front(40); // ������ ���� ����... ����� ��Ű�� �ʾҴ�.
					  // ����, �������θ� �����ְ� Ŭ������ �ٽ� ����� ��� ?
}
*/