

// 1. cafe.naver.com/cppmaster ���� 2���� ���� �ҽ� ��������

// 2. ���� Ǯ�� VC++ ���� ���� ������

// 3. "x86", "debug" �� ���߼���.

// 4. �����ؼ� ������ ������ Ȯ���� ������

// 5. ���� ���� �߻��� "������Ʈ �޴� - �Ӽ� �޴�" ���� 

//    "Windows SDK ����"�� "�÷��� ��������" ������ �ּ���










// 1_�����Ͱ�ü
#include <iostream>
#include <string>  // class string{};
// primitive type : built in type,  �����Ϸ� ��ü�� �ν��ϴ� ����Ÿ Ÿ��
//									int, short, char, float, double, long, bool

// UDT(User Define Type ) : ����ü�� Ŭ������ ����ڰ� ���� Ÿ�� �����̺귯���� �����ϴ� Ÿ��
//						�Ʒ� �ִ� Point, STL ���� string, vector

struct Point
{
	int x, y;
};
int main()
{
	// primitive Ÿ���� ���� : "����" ��� �θ��� �˴ϴ�.
	//							���� ������ �ְ�, ��� �Լ����� �����ϴ�.
	int n = 0; // n�� "����"
	
	Point pt;
	
	// UDT Ÿ���� ���� : "����" ��� ��� ���ٴ� "��ü" ��� �մϴ�
	//					���� �ְ�, ���� �����ϴ� "����Լ�"�� ���� �ִ�.
	std::string s = "hello";

	// s �� "hello" ��� "��"�� �ְ�, �پ��� ��� �Լ��� �ִ�.
	
}





