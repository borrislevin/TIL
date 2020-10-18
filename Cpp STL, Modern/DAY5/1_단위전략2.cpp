#include <vector>
#include <list>
#include <set>
// resize 의 원리를 생각해 봅시다.
template<typename T, typename Alloc = std::allocator<T> > 
class vector
{
	T* buff;
	int size;
	int capacity;

	Alloc ax;	// 메모리 할당기
				// 앞으로 vector에서 메모리 할당이 필요할때 마다 ax 사용.
public:
	void resize(int sz)
	{
		// 메모리 할당이 필요한 경우 어떻게 할까요 ?
		// new ? malloc ? memory pool
		// buff = new T[sz];	//  이렇게 만들면 vector는 항상 메모리 할당을 new로 만 할수 있다.
		buff = ax.allocate(sz);

		// 해지가 필요시에도 ax 사용.
		ax.deallocate(buff, sz);
	}
};
int main()
{
	std::vector<int> v(5); // 표준 메모리 할당기 사용
	v.resize(10);

//	std::vector<int, MyAlloc<int>> v2(5);// 사용자가 만든 메모리 할당기 사용
										 // MyAlloc 에는 반드시 allocate()와 deallocate()가 있어야 한다.

	// 단위 전략 디자인 
	// 템플릿 인자로 "어떤 정책을 담은 클래스"를 전달해서 정책 교체가 가능하게 하는 디자인
	// STL의 모든 컨테이너는 메모리 할당을 "new"로 하지 않고
	// 단위 전략 디자인으로 교체 가능하게 설계 되어 있다.
	// 교체 하지 않으면 "std::allocator" 사용 ( new, delete 사용)

	std::list<int> s;
}


