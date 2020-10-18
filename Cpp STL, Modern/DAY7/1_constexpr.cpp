// cafe.naver.com/cppmaster 에서 
// 7일차 사전소스 받으시면 됩니다.

// Legacy C++ : C++98
// Modern C++ : C++11/14/17
//				핵심 ) "move", "완벽한전달", "람다표현식", "auto" ...
// ???        : C++20
//				Big4 ) "concept", "range", "coroutine", "module"
//				유튜브 에서 cppcon 검색

// 추천도서 : effective C++ 시리즈 3권
//			  effective C++,  3/e
//			  more effective C++, 
//			  effective modern C++, 
//            


int main()
{
	int n = 10;

	// const : 2가지 의미의 상수
	const int c1 = 10; // 컴파일 시간 상수. 컴파일러가 컴파일 시간에 값을 알고 있다
	const int c2 = n;  // 실행시간 상수. 컴파일러는 값이 얼마인지는 모르고, 
					   // 단지, c2를 변경하는 코드가 있으면 에러.
					   // 배열의 크기로 사용안됨.

	int x1[10]; // ok
	int x2[n];  // error. 배열의 크기는 컴파일 시간에 알아야 한다.

	int x3[c1]; // 10
	int x4[c2]; // error. 

	foo(n); // n도  보낼수 있다.
}

void foo(const int c)
{
	int x[c]; // 될까요 ? error.
}



