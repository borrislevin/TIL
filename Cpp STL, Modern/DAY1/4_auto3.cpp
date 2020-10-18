// modern c++ 교재, 73 page

/*
int square(int a)
{
	return a * a;
}
*/
// C++11 의 새로운 함수 만드는 기법 - suffix return type 이라고 합니다.
auto square(int a) -> int
{
	return a * a;
}

int main()
{
	int s = square(3);
}