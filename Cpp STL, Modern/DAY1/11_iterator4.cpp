#include <iostream>
#include <list>

int main()
{
	std::list<int> s1 = { 1,2,3 };

	auto p1 = std::begin(s1);
	auto p2 = std::end(s1);

	// [p1, p2)

	while (p1 != p2)
	{
		++p1;
	}

	std::list<int> s3;
	if (s3.empty()) {}

	if (std::begin(s3) == std::end(s3)) {}	
}