// 3개의 컨테이너 어답터가 있습니다.
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

	// 다음중 에러를 찾아 보세요
	std::stack<int, std::list<int>>   st1;	// 1. ok
	std::stack<int, std::vector<int>> st2;	// 2. ok
	std::queue<int, std::list<int>>   q1;	// 3. ok
	std::queue<int, std::vector<int>> q2;	// 4. error

	q2.push(10);
	q2.pop(); // error. vector는 전방삭제 안됨. 즉, push_front 없음.

	// 결론. queue 사용시는 내부 자료 구조로 vector는 안됩니다.

	// 일반적으로는 그냥 변경하지 말고 아래 처럼 사용하세요
	std::stack<int> s;
	std::queue<int> q;

	// 스택 사용법
	s.push(10);
	int n1 = s.top(); // 요소 얻기
	s.pop();		  //  제거

	// 큐 사용법
	q.push(10);
	int n2 = q.front(); // 요소 얻기
	q.pop();

}






