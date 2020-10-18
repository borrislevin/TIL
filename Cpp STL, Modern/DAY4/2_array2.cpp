#include <iostream>

// C++ ǥ���� vector�� �ᱹ �Ʒ��� ������ ���� �Դϴ�.
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

			delete[] buff; // ���� ���� ����

			buff = temp;

			size = newSize;
			capacity = newSize;
		}
		else	// ũ�Ⱑ �۾�����
		{
			// ���ο� �޸� �Ҵ��� �ʿ� ����,,
			// �׳� size �� ����
			size = newSize;
		}
	}
	~vector() { delete[] buff; }

	// [] ������ ������ : ��ü�� �迭ó�� ����ϰ�
	T& operator[](int idx)
	{
		return buff[idx];
	}
};

int main()
{
	vector<int> v(10); // �� ���� �޸� �׸��� �׸��� �־�� �մϴ�.
	v.resize(7);
//	v.resize(20);

	v[0] = 100; // ok.. �迭ó�� ��밡��
				// "v.operator[](0) = 100" ���� �ؼ��˴ϴ�.
}