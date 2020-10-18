#include <stack>
#include <list>
#include <vector>
#include <queue> // queue, priority_queue
#include "show.h"

int main()
{
	// 다음중 에러를 모두 골라 보세요
	std::stack<int, std::list<int>>   s1;
	std::stack<int, std::vector<int>> s2;
	std::stack<int, std::deque<int>>  s3;

	std::queue<int, std::list<int>>   q1;
	std::queue<int, std::vector<int>> q2; // error. 여기서 에러가 아니라..
										  // q2.pop() 사용시 에러
	std::queue<int, std::deque<int>>  q3;
}



