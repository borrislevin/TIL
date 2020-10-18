// cafe.naver.com/cppmaster ���� 
// 7���� �����ҽ� �����ø� �˴ϴ�.

// Legacy C++ : C++98
// Modern C++ : C++11/14/17
//				�ٽ� ) "move", "�Ϻ�������", "����ǥ����", "auto" ...
// ???        : C++20
//				Big4 ) "concept", "range", "coroutine", "module"
//				��Ʃ�� ���� cppcon �˻�

// ��õ���� : effective C++ �ø��� 3��
//			  effective C++,  3/e
//			  more effective C++, 
//			  effective modern C++, 
//            


int main()
{
	int n = 10;

	// const : 2���� �ǹ��� ���
	const int c1 = 10; // ������ �ð� ���. �����Ϸ��� ������ �ð��� ���� �˰� �ִ�
	const int c2 = n;  // ����ð� ���. �����Ϸ��� ���� �������� �𸣰�, 
					   // ����, c2�� �����ϴ� �ڵ尡 ������ ����.
					   // �迭�� ũ��� ���ȵ�.

	int x1[10]; // ok
	int x2[n];  // error. �迭�� ũ��� ������ �ð��� �˾ƾ� �Ѵ�.

	int x3[c1]; // 10
	int x4[c2]; // error. 

	foo(n); // n��  ������ �ִ�.
}

void foo(const int c)
{
	int x[c]; // �ɱ�� ? error.
}



