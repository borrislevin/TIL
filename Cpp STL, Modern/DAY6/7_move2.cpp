#include <iostream>
#include <string>
#include <vector>

// 왜 move가 중요한가 ? 

// 아래 코드는 복사생성자, 대입연산자를 사용한
// swap 입니다. 느립니다.
/*
template<typename T>
void Swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
*/
// move를 사용한 swap - 위 코드보다 빠릅니다.
template<typename T>
void Swap(T& a, T& b)
{
	T tmp = std::move(a);
	a = std::move(b);
	b = std::move(tmp);
}
// move가 중요한 이유
// 다양한 알고리즘 함수를 만들때 
// "복사"보다 "move"를 사용하는 것이 빠르다.!

int main()
{
	std::string s1 = "hello";
	std::string s2 = "world";
	Swap(s1, s2);

	int n1 = 10;
	int n2 = n1;
	int n3 = std::move(n1); // primitive 타입은 자원이 없으므로
							// 의미 없습니다.
							// 바로 위 코드와 완전히 동일. 에러없음.
}
// std::move() 를 적절히 사용하면 빨라집니다
// 그런데, 많은 C++ 개발자가 아직 move를 잘 이해 못해서 제대로 사용못하는 경우가 많습니다.



