#include <iostream>
#include <list>

int main()
{
	std::list<int> s1 = { 1,2,3 };

	auto p1 = s1.begin();
	auto p2 = s1.end();

	// 핵심 1. .end()로 얻는 반복자는 "비교"의 용도로만 사용해야 합니다.
	// [p1, p2)
//	*p2 = 10; //runtime error

	while (p1 != p2)	// ok.. 비교 용도로 사용
	{
		++p1;
	}

	// 핵심 2. 비어있는 컨테이너는 s.begin() == s.end() 가 참입니다.
	std::list<int> s3;
	if (s3.empty()) {}

	if (s3.begin() == s3.end()) {}	// empty container
}