#include <vector>
#include <list>
#include <set>
// resize �� ������ ������ ���ô�.
template<typename T, typename Alloc = std::allocator<T> > 
class vector
{
	T* buff;
	int size;
	int capacity;

	Alloc ax;	// �޸� �Ҵ��
				// ������ vector���� �޸� �Ҵ��� �ʿ��Ҷ� ���� ax ���.
public:
	void resize(int sz)
	{
		// �޸� �Ҵ��� �ʿ��� ��� ��� �ұ�� ?
		// new ? malloc ? memory pool
		// buff = new T[sz];	//  �̷��� ����� vector�� �׻� �޸� �Ҵ��� new�� �� �Ҽ� �ִ�.
		buff = ax.allocate(sz);

		// ������ �ʿ�ÿ��� ax ���.
		ax.deallocate(buff, sz);
	}
};
int main()
{
	std::vector<int> v(5); // ǥ�� �޸� �Ҵ�� ���
	v.resize(10);

//	std::vector<int, MyAlloc<int>> v2(5);// ����ڰ� ���� �޸� �Ҵ�� ���
										 // MyAlloc ���� �ݵ�� allocate()�� deallocate()�� �־�� �Ѵ�.

	// ���� ���� ������ 
	// ���ø� ���ڷ� "� ��å�� ���� Ŭ����"�� �����ؼ� ��å ��ü�� �����ϰ� �ϴ� ������
	// STL�� ��� �����̳ʴ� �޸� �Ҵ��� "new"�� ���� �ʰ�
	// ���� ���� ���������� ��ü �����ϰ� ���� �Ǿ� �ִ�.
	// ��ü ���� ������ "std::allocator" ��� ( new, delete ���)

	std::list<int> s;
}


