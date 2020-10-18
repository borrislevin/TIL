#include <iostream>

// C++ 이라면 
// 앞에서 만든 "동적 배열"을 누군가 잘하는 사람이 만들어 주고,
// 일반 개발자는 사용만 하면 편리하지 않을까 ? (물론, 개념은 다 이해 하고 있는 사람이... )

#include <vector> // C++의 동적 배열 클래스

int main()
{	
	std::vector<int> v;		// 아직 메모리 할당이 안된 동적 배열 (크기 0)
	int n = 0;

	while (1)
	{
		std::cin >> n;
		if (n == -1) break;

		v.push_back(n);	// 메모리가 부족하면 알아서 커진다.
						// 3번소스의 코드에서는 5씩 증가 했습니다.
						// vector는 얼마씩 커질까요 ==> STL 수업시간에 배우는 내용.
	}
	std::cout << "[입력값]" << std::endl;

	// vector는 배열처럼 [] 로 요소에 접근
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << std::endl;
	}
}
// vs 에러 나셨던 분은 "프로젝트, 속성 메뉴에서" "SDK 버전을 다른 것으로 변경 가능한지 보세요"
// 변경가능하면 변경해 보세요.