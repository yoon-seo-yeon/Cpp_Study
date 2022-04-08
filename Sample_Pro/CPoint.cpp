#include <iostream>
#include <stdlib.h>
using namespace std;

class CPoint {
private:
	int x;
	int y;

public:
	CPoint(int x, int y) {				   
		this->x = x;
		this->y = y;
	}

	CPoint(const CPoint& p) {
		x = p.x;
		y = p.y;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}
};

class Rect {
	CPoint p1;
	CPoint p2;

public:
	Rect(CPoint &p1, CPoint& p2) :p1(p1), p2(p2){
	}

	int area() {
		return (abs(p1.getX() - p2.getX()) * abs(p1.getY() - p2.getY()));
	}
};

int main() {
	CPoint point1(10, 20);
	CPoint point2(20, 15);

	cout << point1.getX() <<"," << point1.getY() << endl;
	cout << point2.getX() << "," << point2.getY() << endl;

	Rect r(point1, point2);

	cout << r.area() << endl;

	return 0;
}