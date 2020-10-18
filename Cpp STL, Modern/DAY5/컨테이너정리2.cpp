// �����̳�����2.cpp
// isocpp.org

// 1979�� : C++ź��. - "stroustrup"
// 1998�� : C++ 1�� ǥ�� ź��. ����ǥ��ȭ, STL ����

STL ����Ұ� : Container, Iterator, Algorithm

std::list<int> s(10, 3);
std::list<int>::iterator p1 = s.begin();
std::list<int>::iterator ret = std::find(s.begin(), s.end(), 3);

���������̳�   : list, vector, deque
�����̳ʾ���� : stack, queue, priority_queue
���������̳�   : set, multiset, map, multimap

��ƿ��Ƽ : string, pair, bitset

�˰��� �Լ��� : find, sort, reverse, remove, replace ��..

�ᱹ "�ڷᱸ��(�����̳�)" �� "�˰���" ������ ���̺귯��.
---------------------------------------------------
// 2011�� : C++11 �̶�� �Ҹ��� 2��° ǥ�� ��ǥ. ���� ���� �߰�.(auto, ����ǥ����, range-for, "move", "�Ϻ�������")
// STL �� �߰�
// 1. �ڷᱸ�� �߰� : array<>, forward_list(�̱۸���Ʈ)
//                    unordered_set(multiset, map, multimap)

// 2. �ڷᱸ���� �˰��� ���� ��ƿ��Ƽ �߰� 
//    "����Ʈ������", "funtion", "�ð��� ��¥", "��Ƽ������", "����ǥ����", "������ ���� �߻���"

// 2014 / 2017 : ���� �ڷᱸ�� ���ٴ� "��ƿ��Ƽ �߰�" => "���� �ý���(C++17)"

// 2020(C++20) : ��Ʈ��ũ�� ������� ������ Ż��,  ��� "RANGE" ��� ��û�� ������ ����

// ����,  GUI, DB, Network, XML �� ��� �о��� �������� ���!!


