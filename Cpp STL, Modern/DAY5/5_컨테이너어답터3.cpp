#include <stack>
#include <list>
#include <vector>
#include <queue> // queue, priority_queue
#include "show.h"

int main()
{
	// ������ ������ ��� ��� ������
	std::stack<int, std::list<int>>   s1;
	std::stack<int, std::vector<int>> s2;
	std::stack<int, std::deque<int>>  s3;

	std::queue<int, std::list<int>>   q1;
	std::queue<int, std::vector<int>> q2; // error. ���⼭ ������ �ƴ϶�..
										  // q2.pop() ���� ����
	std::queue<int, std::deque<int>>  q3;
}



