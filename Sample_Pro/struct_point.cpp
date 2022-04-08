#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
} p1, p2; //<-여러개 선언 방법
struct Point p3;
Point p4;

int main()
{
	Point point = { 1, 2 };
	p1 = { 3, 4 };
	cout << "점 point의 좌표는 (" << point.x << ", " << point.y << ")입니다," << endl;
	cout << "점 point의 좌표는 (" << p1.x << ", " << p1.y << ")입니다," << endl;
	cout << "점 point의 좌표는 (" << p3.x << ", " << p3.y << ")입니다," << endl;   //0, 0 초기값을 주지 않으면 0
	cout << "점 point의 좌표는 (" << p4.x << ", " << p4.y << ")입니다," << endl;   //0, 0 초기값을 주지 않으면 0
}