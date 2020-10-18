#include <forward_list>
#include <list>
using namespace std;

int main()
{
	std::forward_list<int> s1 = { 1,2,3 };

	std::list<int> s2 = { 1,2,3 };

	auto p1 = begin(s1);
	auto p2 = begin(s2);
	
	++p1;
	--p1;
	++p2;
	--p2;

}