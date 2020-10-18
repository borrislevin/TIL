// 초기화1
class Vector
{
public:
	// explicit 생성자 : 직접 초기화는 가능하고, 복사 초기화는 사용할수 없다.
	explicit Vector(int n) {}
};

// 핵심 : 함수의 인자 전달은 결국 "복사 초기화" 모양으로 전달 받게 됩니다.
void foo(Vector v) {} // Vector v = 함수인자, 즉, "Vector v = 10"

int main()
{
	// C++98 시절 부터 사용하던 초기화 모양
	Vector v1(10);		// 직접초기화(direct initialization) : = 이 없는 초기화
//	Vector v2 = 10;		// 복사초기화(copy initialization)   : = 을 사용한 초기화
//	Vector v3 = (10);

	// C++11 부터 {} 초기화 도입.
	Vector v4{ 10 };	// 직접 초기화
//	Vector v5 = { 10 };	// 복사 초기화

	foo(v1); // 당연한 코드
	foo(10); // 
}