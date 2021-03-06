#include <iostream>


// 핵심 : 왜 "동적 메모리 할당(힙 메모리)" 을 해야 하는 가 ?

//       => 1. 실행시간에 결정된 크기 만큼의 메모리가 필요 할때
//       => 2. 원할때 메모리를 할당하고, 원할때 즉시 지우기 위해
//				지역변수는 원할때 지울수 없고 "{}"을 벗어나야만 삭제

int main()
{
	// 사용자에게 학생 수를 입력 받으세요
	int cnt = 0;
	std::cin >> cnt;  // 학생수 입력.

	// 사용자에게 입력된 학생 수 만큼 점수를 입력 받으세요.
	// 배열의 크기가 "소스작성시 결정되지 않고, 실행시간에 결정되었다"!!!

//	int jumsu[cnt]; // g++ ok..  vc++ : error, clang ok
					// 1989년 C표준 문법   : 배열의 크기는 변수 안됨
					// 1999년 새로운 C문법 : 배열의 크기는 변수 가능. 하지만 많은 
					//									컴파일러가 지원 안함.

	// 모든 컴파일러에서 에러 없이 사용하려면 동적으로 메모리를 할당해야 한다.
//	int* jumsu = (int*)malloc(sizeof(int)*cnt); // C 언어 스타일

	int* jumsu = new int[cnt]; // C++ style

	for (int i = 0; i < cnt; i++)
	{
		std::cin >> jumsu[i];
	}
	// 더이상 필요 없다면 "반드시 메모리를 해지" 해야 한다.
	delete[] jumsu;
}

