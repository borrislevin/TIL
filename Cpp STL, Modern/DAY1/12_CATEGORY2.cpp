#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>
using namespace std;

int main()
{
	forward_list<int> s1 = { 1,2,3 };
	list<int> s2 = { 1,2,3 };
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = find(begin(v), end(v), 5);
}