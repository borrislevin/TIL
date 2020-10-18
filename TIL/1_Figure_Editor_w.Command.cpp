#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Undo / Redo

// Undo: ������ ������ ���� ��������.
// Command Pattern: '����� ��ü�� �߻�ȭ'�Ѵ�.
//         => ���ÿ� �����ϰų� �ҷ����� ���� ����� �����ϴ� ���� �����ϴ�.

class Shape {
public:
	virtual ~Shape() {}

	virtual void Draw() { cout << "Shape draw" << endl; }
};

class Rect : public Shape {
public:
	void Draw() override { cout << "Rect draw" << endl; }
};

class Circle : public Shape {
public:
	void Draw() override { cout << "Circle draw" << endl; }
};


// ��� ����� ��üȭ - ICommand ����
// �������̽�
//   ����: ��ü ������ ������ �������� �����ϴ�.
//   ����: ���ο� ����� �߰��� �����ϴ�.
//        �⺻ ������ �����ϸ�, ���� Ŭ������ ���ο� ����� �߰����� �ʾƵ� �����Ѵ�.
struct ICommand {
	virtual ~ICommand() {}

	virtual void Execute() = 0;

	virtual bool CanUndo() { return false; }
	virtual void Undo() {}
};

class AddRectCommand : public ICommand {
	vector<Shape*>& shapes;
public:
	AddRectCommand(vector<Shape*>& v) : shapes(v) {}

	void Execute() override {
		shapes.push_back(new Rect);
	}

	bool CanUndo() override { return true; }

	void Undo() override {
		Shape* p = shapes.back();
		shapes.pop_back();
		delete p;
	}
};

class AddCircleCommand : public ICommand {
	vector<Shape*>& shapes;
public:
	AddCircleCommand(vector<Shape*>& v) : shapes(v) {}

	void Execute() override {
		shapes.push_back(new Circle);
	}

	bool CanUndo() override { return true; }

	void Undo() override {
		Shape* p = shapes.back();
		shapes.pop_back();
		delete p;
	}
};

class DrawCommand : public ICommand {
	vector<Shape*>& shapes;
public:
	DrawCommand(vector<Shape*>& v) : shapes(v) {}

	void Execute() override {
		for (Shape* e : shapes) {
			e->Draw();
		}
	}
};


int main() {
	vector<Shape*> shapes;
	stack<ICommand*> undo_stack;
	stack<ICommand*> redo_stack;

	while (1) {
		ICommand* p = nullptr;
		int cmd;
		cin >> cmd;

		if (cmd == 1) {
			p = new AddRectCommand(shapes);
		}
		else if (cmd == 2) {
			p = new AddCircleCommand(shapes);
		}
		else if (cmd == 3) {
			p = redo_stack.top();
			redo_stack.pop();
		}
		else if (cmd == 9) {
			p = new DrawCommand(shapes);
		}
		else if (cmd == 0) {
			p = undo_stack.top();
			undo_stack.pop();
			p->Undo();

			redo_stack.push(p); // !!!

			continue;
		}

		if (p) {
			p->Execute();

			if (p->CanUndo())
				undo_stack.push(p);
		}
	}
}
