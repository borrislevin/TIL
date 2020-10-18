#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };

	// 왜 remove_copy 를 만들었을까? 그냥 아래 처럼 하면 되는데...
	// 아래 처럼 하면 구간을 2번 반복해야 한다.
	std::copy  (v1.begin(), v1.end(), v2.begin());	
	std::remove(v2.begin(), v2.end(), 3);			

	// 구간을 1회만 반복하면  된다 => 위처럼 하는 것보다는 2배의 성능향상
	std::remove_copy(v1.begin(), v1.end(), v2.begin(), 3);



	show(v1);
	show(v2);
}
