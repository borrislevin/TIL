#include <iostream>
#include <vector>
#include <algorithm>  
#include <numeric>    
#include <functional>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };

	// STL 알고리즘에 함수를 전달하는 경우
	// "값" 버전과 "함수" 버전의 인자가 모두 3개라서. 동일이름을 사용할수 없었습니다
	auto p1 = std::find   (v1.begin(), v1.end(), 3);
	auto p2 = std::find_if(v1.begin(), v1.end(), [](int a) {return a % 3 == 0; });

	// 수치계산 관련 알고리즘은 "함수 버전"에 _if 가 붙지 않습니다
	// "기본연산" 버전과 "함수전달"버전의 인자의 갯수가 다릅니다. 동일이름을 사용할수 있었습니다.
	int n1 = std::accumulate(v1.begin(), v1.end(), 0);
	int n2 = std::accumulate(v1.begin(), v1.end(), 1, [](int a, int b) { return a * b; } );
}
