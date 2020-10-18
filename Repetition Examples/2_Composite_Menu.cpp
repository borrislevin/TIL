#include <iostream>
#include <vector>
#include <string>
using namespace std;

class BaseMenu {
	string title;
public:
	BaseMenu(string s) : title(s) {}
	virtual ~BaseMenu() {}
	virtual string getTitle() const { return title; }
	virtual void command() = 0;
};



class MenuItem : public BaseMenu {
	int id;

public: 
	MenuItem(string s, int n) :BaseMenu(s), id(n) {}
	void command() { 
		cout << getTitle() << "�޴��� ���õ�"<< endl; 
		getchar();
		getchar();
	} // string ������ ������ #include <string>�� �ؾ� string ��� ����
	
};

class PopupMenu : public BaseMenu{
	vector<BaseMenu*> v;

public:
	PopupMenu(string s) : BaseMenu(s) {}
	void addMenu(BaseMenu* p) { v.push_back(p); }
	void command() {
		while (1) {
			system("cls");

			int sz = v.size();
			for (int i = 0; i < sz; i++) {
				cout << i + 1 << ". " << v[i]->getTitle() << endl;
			}
				cout << sz + 1 << ". ���� �޴���" << endl;

				cout << "�޴��� �����ϼ��� >> ";
				int cmd;
				cin >> cmd;

				if (cmd == sz + 1)break;
				if (cmd<1 || cmd>sz + 1) continue;

				v[cmd - 1]->command();
			}
		}
};

int main() {
	PopupMenu* menubar = new PopupMenu("MENUBAR");
	PopupMenu* p1 = new PopupMenu("ȭ�� ����");
	PopupMenu* p2 = new PopupMenu("�Ҹ� ����");

	menubar->addMenu(p1);
	menubar->addMenu(p2);

	p1->addMenu(new MenuItem("�ػ� ����", 11));
	p1->addMenu(new MenuItem("���� ����", 12));
	p1->addMenu(new MenuItem("��Ÿ ����", 13));

	p2->addMenu(new MenuItem("���� ����", 21));
	p2->addMenu(new MenuItem("���� ����", 22));
	
	menubar->command();
}


