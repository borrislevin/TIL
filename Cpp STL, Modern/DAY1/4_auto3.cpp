// modern c++ ����, 73 page

/*
int square(int a)
{
	return a * a;
}
*/
// C++11 �� ���ο� �Լ� ����� ��� - suffix return type �̶�� �մϴ�.
auto square(int a) -> int
{
	return a * a;
}

int main()
{
	int s = square(3);
}