#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using namespace std;


int main()
{
	vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = begin(s);

	// 반복자 p를 5칸 전진하고 싶다.
	p = p + 5;
	
	cout << *p << endl;
}