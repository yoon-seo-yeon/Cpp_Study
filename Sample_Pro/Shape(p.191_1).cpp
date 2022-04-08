#include <iostream>
using namespace std;

class Shape {
	int x, y;
	static int count;

public:
	Shape(int x, int y) :x(x), y(y) {
		cout << ++count << "��° ���� ����" << endl;
	}

	/*int getX() {
		return x;
	}

	int getY() {
		return y;
	}*/

	//virtual void drawCal() = 0;	//���� ���� �Լ�
	virtual void drawCal() {
		cout << "��ǥ(" << x << ", " << y << ")�̰�, ";
	}
};

class Rectangle : public Shape {		//�簢��
	int width, height;
public:
	Rectangle(int x, int y, int width, int height) : Shape(x, y), width(width), height(height) {}

	void drawCal() {
		//cout << "��ǥ(" << getX() << ", " << getY() << ")�̰�, ";
		Shape::drawCal();
		cout << "���� : " << width << ", ���� : " << height << "�� ";
		cout << "�簢���� ���� : " << width * height << endl << endl;
	}
};

class Triangle : public Shape {		//�ﰢ��
	int height, base;
public:
	Triangle(int x,int y,int base, int height) : Shape(x, y), base(base), height(height) {}

	void drawCal() {
		//cout << "��ǥ(" << getX() << ", " << getY() << ")�̰�, ";
		Shape::drawCal();
		cout << "�غ� : " << base << ", ���� : " << height << "�� ";
		cout << "�ﰢ���� ���� : " << (base * height) / 2 << endl << endl;
	}
};

class Circle : public Shape {			 //��
	int r;
	static const double PI;
public:
	Circle(int x, int y, int r) : Shape(x, y), r(r) {}

	void drawCal() {
		//cout << "��ǥ(" << getX() << ", " << getY() << ")�̰�, ";
		Shape::drawCal();
		cout << "������ : " << r << "�� ";
		cout << "���� ���� : " << r * r * PI << endl << endl;
	}
};

const double Circle::PI = 3.14;
int Shape::count = 0;

int main() {
	Shape* ps1 = new Rectangle(1, 2, 34, 56);	//1904 //����ȯ
	ps1->drawCal();

	Shape* ps2 = new Triangle(3, 4, 34, 56);	//952 //����ȯ
	ps2->drawCal();

	Shape* ps3 = new Circle(5, 6, 8);		    //200.96 //����ȯ
	ps3->drawCal();	

	return 0;
}

/*
1��° ���� ����
��ǥ(1, 2)�̰�, ���� : 34 ���� : 56�� �簢���� ���� : 1904
2��° ���� ����
��ǥ(3, 4)�̰�, �غ� : 34 ���� : 56�� �ﰢ���� ���� : 952
3��° ���� ����
��ǥ(5, 6)�̰�, ������ : 8�� ���� ���� : 200.96
*/