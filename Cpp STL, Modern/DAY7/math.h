#pragma once

// math.h

// �ٸ� ���Ͽ��� square�� ȣ���Ϸ��� �� ����� include �ϸ� �˴ϴ�

// int square(int);

// extern "C"  : Ư�� �Լ��� C���� ������ٰ�
//			C++ �����Ϸ����� �˷� �ִ� ��

// extern "C" int square(int);

// �ٽ� 
// C/C++ ���� ��� ��밡���� �Լ��� �������
// 1. �ҽ� ��ü�� .c �� �ؼ� name mangling�� ����

// 2. ����� �Ʒ�ó�� ���Ǻ� �������� ���ؼ�
//    C/C++�� ��� �����ؾ� �մϴ�.

// ��� C++ �����Ϸ��� "__cplusplus" ��� ��ũ�ΰ�
//					���� �Ǿ� �ִ�.
#ifdef __cplusplus
extern "C" {
#endif

	int square(int)

#ifdef __cplusplus
}
#endif




