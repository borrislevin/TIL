#include <stdio.h>


// ��  level ���� �α� ���� ��� �����ϰ�
// INFO
// WARN
// DEBUG
// CRITICAL
// ERROR

// Ŭ���� ������� �������Ѵ�.
// ����� ���� ����, ��å���� �����ؼ� ��å ������ �����ϵ���
// ��ġ���?
// Ŭ������ ������ ������ϰ� �ҽ����� ���� (���̺귯�� ȭ?)
// spdlog�� �����ϴ�
// ppt�� 10�� ���� // Ŭ���� ����, ������ ���� Ȱ��
// ������, ������

void foo() {
	printf("%s - $d foo \n", __func__, __LINE__); // log
}

int main() {
	foo();

	//	INFO() <<"Hello"
}