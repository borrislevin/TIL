// STL ����  16 page ���� �Դϴ�. - 

#include <iostream>

// Step 2. �˻� ������ �Ϲ�ȭ
// ��ü ���ڿ� �˻��� �ƴ� "[first, last)" �������� �����˻�
char* strchr(char* first, char* last , int c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	char s[] = "abcdefgh";

	char* p = strchr(s, s + 4,  'e');

	if (p == nullptr )
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}




