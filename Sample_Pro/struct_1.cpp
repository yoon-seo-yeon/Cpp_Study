#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
	void Print(); //프로토타입
};

struct Circle {
	void Print();  //프로토타입
};											

int main() {
	Point point = { 1, 2 };
	point.Print();

	Circle c;
	c.Print();
}

void Point::Print() {
	cout << "x 좌표는 " << x << endl;
	cout << "y 좌표는 " << y << endl;
}

void Circle::Print() {
	cout << "원입니다." << endl;
}