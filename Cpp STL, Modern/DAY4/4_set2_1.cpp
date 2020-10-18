// 4_set2_1
#include <iostream>
#include "show.h"
#include <set> 
#include <functional>

// set �� ����
/*
template<typename T> class set
{
	NODE* root;
public:
	void insert(T data)
	{
		// �Ʒ� ó�� �ڵ带 �ۼ��ϸ�
		// ������ "<" �����ڸ� ����ϰ� �˴ϴ�.
		if (data < root->data)
			add left child;

		else if (root->data < data)
			add right child;

		else
			�̹� ����Ÿ ����;
	}
};
*/
// std::less<int> f;  // < ������ �����ϴ� �Լ� ��ü
// bool b = f(10,3); // "10 < 3" �̹Ƿ� false
/*
template<typename T, typename CMP = std::less<T> > class set
{
	NODE* root;
	CMP cmp;	// �������� ���� ��� less<int> cmp �� �ǹ�.
public:
	void insert(T data)
	{
		// ���� "<" �ϴ� ��ſ� cmp �Լ���ü�� ()������ ���
		if (cmp(data, root->data) )    // �ᱹ, "data < root->data" �ǹ�
			add left child;

		else if (cmp(root->data,  data) )
			add right child;

		else
			�̹� ����Ÿ ����;
	}
};
*/
// 2���� ��Ҹ� ���ϴ� �Լ���ü�� ����ϴ�.
template<typename T> struct greater
{
	inline bool operator()(T a, T b) const { return a > b; }
};

int main()
{
	// �� ��Ҹ� ��� �� ����, ���ø��� 2��° ���� �Լ���ü�� ���� �մϴ�.
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







