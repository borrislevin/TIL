// 2_array3.cpp
#include <iostream>
#include <vector>

// C++11 ������ ���ÿ� ����Ÿ�� �����ϴ� �����̳� �߰�
/*
template<typename T, int N> struct array
{
	T buff[N];
	
	inline bool empty() const { return N == 0; }
	inline int  size() const  { return N; }

	// �ݺ��� : ++�� �̵��ϰ� *�� ��ҿ� ���� ������ ��
	//	        ������ó�� �����ϴ� ��� ��
	// �����͵� "�ݺ���" �Դϴ�.
	inline T* begin() const { return buff ; }
	inline T* end()   const { return buff+N ; }
};
*/
#include <array>

// array �� ���� ����
// 1. ũ�� ���� : �Ҽ� ����. resize() ��� �Լ� ����.
// 2. �ݺ��� ���� : �������� �ݺ���
// 3. [] ������ : ��밡��.
// ���� ��� : ��κ� vector�� ����ϴµ�. 
//			ũ�⺯���� �ʿ� ����, ���� ���� �ӵ��� �䱸�ɶ�
//			�Ӻ���� �����ڰ� ���� ���.
int main()
{
	// ��� ����Ÿ�� ���ÿ� �ִ�.
	// ��¥ �迭�� �������.. �� array �� ������°�?
	// => ������ ��� �Լ��� �߰��Ҽ� �ִ�.
//	array<int, 5> arr = { 1,2,3,4,5 };
	std::array<int, 5> arr = { 1,2,3,4,5 };  // C++11 �� array

	int n = arr.size();
	auto p1 = arr.begin();
	auto p2 = arr.end();


	// C �迭     : �����Ѵ�.(ũ�⺯��X)
	// STL vector : ���ϴ�.(ũ�⺯��O)
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };			// ���� �޸�
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };	// �� �޸�


}



