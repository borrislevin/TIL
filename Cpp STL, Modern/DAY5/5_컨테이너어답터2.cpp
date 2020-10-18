// 3���� �����̳� ����Ͱ� �ֽ��ϴ�.
#include <stack>
#include <list>
#include <vector>
#include <queue> // queue, priority_queue
#include "show.h"

int main()
{
	// stack : Last In First Out : LIFO
	// queue : First In First Out : FIFO
	std::stack<int> s1;
	s1.push(10);

	// ������ ������ ã�� ������
	std::stack<int, std::list<int>>   st1;	// 1. ok
	std::stack<int, std::vector<int>> st2;	// 2. ok
	std::queue<int, std::list<int>>   q1;	// 3. ok
	std::queue<int, std::vector<int>> q2;	// 4. error

	q2.push(10);
	q2.pop(); // error. vector�� ������� �ȵ�. ��, push_front ����.

	// ���. queue ���ô� ���� �ڷ� ������ vector�� �ȵ˴ϴ�.

	// �Ϲ������δ� �׳� �������� ���� �Ʒ� ó�� ����ϼ���
	std::stack<int> s;
	std::queue<int> q;

	// ���� ����
	s.push(10);
	int n1 = s.top(); // ��� ���
	s.pop();		  //  ����

	// ť ����
	q.push(10);
	int n2 = q.front(); // ��� ���
	q.pop();

}






