// 복사생성자1

struct Point
{
	int x, y;
	
	Point() {}		// 1
	Point(int a, int b) : x(a), y(b) {}	// 2

	// 사용자가 만들지 않으면 "컴파일러가 복사 생성자"를 제공해 주는데..
	// 이것을 만들지 못하게 하는 방법
	Point(const Point&) = delete;  // 함수를 삭제해 달라
};

int main()
{
	// 게임에서 마지만 나오는 왕은 오직 한개이다. - "디자인 패턴에서 싱글톤 배울때 개념 등장"
//	KingOfEnemy k;
//	KingOfEnemy k2 = k;// 오직 한개만 필요한데.. 2개가 만들어 졌다. 좋지 않다.

	Point p1;		// ok. 1번 생성자
	Point p2(1, 2);	// ok. 2번 생성자
//	Point p3(p2);	// 인자 한개 짜리 생성자는 없다.. 왜 에러가 나지 않을까 ?
					// 컴파일러가 "Point(const Point&)" 모양의 생성자를 제공해 준다.
					// "복사 생성자"라고 한다.
//	Point p4 = p2;  // 컴파일러가 제공하는 복사 생성자 때문에 가능.
}