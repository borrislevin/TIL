#include <iostream>

// C++ 표준의 vector가 결국 아래와 유사한 원리 입니다.
template<typename T> class vector
{
	T* buff;
	int size;
	int capacity;
public:
	vector(int sz) : size(sz), capacity(sz)
	{
		buff = new T[size];
	}

	void resize(int newSize)
	{
		if (newSize > capacity)
		{
			T* temp = new T[newSize];

			memcpy(temp, buff, sizeof(T)*size);

			delete[] buff; // 기존 버퍼 제거

			buff = temp;

			size = newSize;
			capacity = newSize;
		}
		else	// 크기가 작아질때
		{
			// 새로운 메모리 할당은 필요 없고,,
			// 그냥 size 만 변경
			size = newSize;
		}
	}
	~vector() { delete[] buff; }

	// [] 연산자 재정의 : 객체를 배열처럼 사용하게
	T& operator[](int idx)
	{
		return buff[idx];
	}
};

int main()
{
	vector<int> v(10); // 이 순간 메모리 그림을 그릴수 있어야 합니다.
	v.resize(7);
//	v.resize(20);

	v[0] = 100; // ok.. 배열처럼 사용가능
				// "v.operator[](0) = 100" 으로 해석됩니다.
}