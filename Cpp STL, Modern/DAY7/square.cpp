// square.cpp

int square(int a)
{
	return a * a;
}

// ������ ��� ������Ʈ �����ϼ���.
// cl square.cpp  /c     => ��ũ���� ���� �����ϸ� �ض�(main ��� ����)
// cl square.cpp /c /FAs  => ����� �ڵ� ����� �޶�.

// cl /Tc square.cpp /c /FAs  => C   �������� ������ �ؼ� ����ҽ� ����� �޶�
//							  => notepad square.asm

// cl /Tp square.cpp /c /FAs  => C++ �������� ������ �ؼ� ����ҽ� ����� �޶�

// C  �������� �����Ͻ� �Լ� �̸� : "_square",   gcc �� �ϸ� "square" �Դϴ�.
// C++�������� �����Ͻ� �Լ� �̸� : "?square@@YAHH@Z" 

// C++ �����Ϸ��� �����Ͻ� �Լ� �̸��� ������ �̻��ϰ� �����ϴ� ���� => "name mangling"

// �� �ٲܱ�� ? ���� ���� ������ ? => "�Լ� �����ε�"
// square(int)    => �����Ͻô� �Ʒ��Լ��� �ٸ��̸��� �Ǿ�� �մϴ�.
// square(double) =>