#include <stack>
#include <queue> // queue, priority_queue
#include <iostream>
#include "show.h"

int main()
{
	// queue : ���� �� ��Ұ� ���� ���´�.
	std::queue<int> q;
	q.push(10);
	q.push(20);

	std::cout << q.front() << std::endl; // 10

	// �켱����ť : ��Ҹ� ������ �켱������ ���� ����
	//			��Ұ� ������ �ȴ�.
	std::priority_queue<int> pq;
	pq.push(10);
	pq.push(-10);
	pq.push(-20);
	pq.push(20);
	pq.push(15);

	std::cout << pq.top() << std::endl; // 20
	pq.pop();
	std::cout << pq.top() << std::endl;  // 15

	// set :  ��Ұ� ���ö����� ���� ���¸� ����
	// priority_queue : ���������� ���ĵǾ� ���� ������, ������ ���� ū ��Ҹ� ã�Ƽ� ��ȯ

}



