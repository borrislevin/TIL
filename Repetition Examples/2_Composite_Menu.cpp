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
		cout << getTitle() << "메뉴가 선택됨"<< endl; 
		getchar();
		getchar();
	} // string 변수가 있으면 #include <string>을 해야 string 출력 가능
	
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
				cout << sz + 1 << ". 상위 메뉴로" << endl;

				cout << "메뉴를 선택하세요 >> ";
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
	PopupMenu* p1 = new PopupMenu("화면 설정");
	PopupMenu* p2 = new PopupMenu("소리 설정");

	menubar->addMenu(p1);
	menubar->addMenu(p2);

	p1->addMenu(new MenuItem("해상도 설정", 11));
	p1->addMenu(new MenuItem("색상 설정", 12));
	p1->addMenu(new MenuItem("기타 설정", 13));

	p2->addMenu(new MenuItem("볼륨 설정", 21));
	p2->addMenu(new MenuItem("음색 설정", 22));
	
	menubar->command();
}


