#include <iostream>
using namespace std;

class Point {
public :
	int x;
	int y;
	void Print(); //프로토타입
};

int main() {
	Point point = { 1, 2 };
	point.Print();
}

void Point::Print() {
	cout << "x 좌표는 " << x << endl;
	cout << "y 좌표는 " << y << endl;
}