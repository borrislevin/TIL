#include <vector>
#include "show.h"

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
int main()
{
	// 다음중 에러는 ?
//	Point p1;			// error
	Point p2(0, 0);		// ok

	// 컨테이너에 사용자 정의 타입을 "값 형식" 으로 넣기.
	// 핵심 1. 디폴트 생성자가 없다면
	std::vector<Point> v1;     // ok
//	std::vector<Point> v2(10); // error. 디폴트 생성자가 없으므로 new Point[10] 할수 없다!!

	// => "디폴트 생성자가 없으면 반드시 2번째 인자로 복사해서 사용할 객체"를 보내야 한다.
	Point p(0, 0);
	std::vector<Point> v3(10, p); // 10개를 만드는 데, p2를 복사 해서(복사 생성자) 만들어 달라.


	// 핵심 2. resize 사용시에도 2번째 인자로 객체 전달.
//	v.resize(20);  // 10개를 사용하다가 20개로 늘리기.
					// error.

	v.resize(20, p); // ok. 새로생기는 10개는 p를 복사해서 초기화해 달라.
}
// 결론
// 1. 사용자 정의 타입을 STL의 컨테이너에 넣으려면
//    => "디폴트 생성자가 있는것이 편리하다"
// 2. 없을때, 한개씩 넣는것은 문제 없다.  v.push_back(p)   =======> 대부분 이렇게 하게 됩니다.
// 3. 여러개를 한번에 만들때는 위처럼 복사할 객체를 전달해야 한다.

