#include <stack>
#include <queue> // queue, priority_queue
#include <iostream>
#include "show.h"

int main()
{
	// queue : 먼저 들어간 요소가 먼저 나온다.
	std::queue<int> q;
	q.push(10);
	q.push(20);

	std::cout << q.front() << std::endl; // 10

	// 우선순위큐 : 요소를 꺼낼때 우선순위가 가장 높은
	//			요소가 나오게 된다.
	std::priority_queue<int> pq;
	pq.push(10);
	pq.push(-10);
	pq.push(-20);
	pq.push(20);
	pq.push(15);

	std::cout << pq.top() << std::endl; // 20
	pq.pop();
	std::cout << pq.top() << std::endl;  // 15

	// set :  요소가 들어올때마다 정렬 상태를 유지
	// priority_queue : 내부적으로 정렬되어 있지 않지만, 꺼낼때 제일 큰 요소를 찾아서 반환

}



