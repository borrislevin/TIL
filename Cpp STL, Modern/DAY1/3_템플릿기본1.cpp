// 2_템플릿기본1

// 함수 오버로딩.
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}

int main()
{
	square(3);
	square(3.4); // 컴파일 에러는 없지만 결과는 9
				 // C언어 : 실수(double) => 정수(int)로 암시적 변환됨.
				 // java, C# 등 다른 언어 : 실수가 정수로 변환 안됨.
				 // C++해결책 : double 버전도 만들어라.
}
