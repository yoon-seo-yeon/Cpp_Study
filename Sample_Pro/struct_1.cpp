#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
	void Print(); //������Ÿ��
};

struct Circle {
	void Print();  //������Ÿ��
};											

int main() {
	Point point = { 1, 2 };
	point.Print();

	Circle c;
	c.Print();
}

void Point::Print() {
	cout << "x ��ǥ�� " << x << endl;
	cout << "y ��ǥ�� " << y << endl;
}

void Circle::Print() {
	cout << "���Դϴ�." << endl;
}