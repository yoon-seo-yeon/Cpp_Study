#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
} p1, p2; //<-������ ���� ���
struct Point p3;
Point p4;

int main()
{
	Point point = { 1, 2 };
	p1 = { 3, 4 };
	cout << "�� point�� ��ǥ�� (" << point.x << ", " << point.y << ")�Դϴ�," << endl;
	cout << "�� point�� ��ǥ�� (" << p1.x << ", " << p1.y << ")�Դϴ�," << endl;
	cout << "�� point�� ��ǥ�� (" << p3.x << ", " << p3.y << ")�Դϴ�," << endl;   //0, 0 �ʱⰪ�� ���� ������ 0
	cout << "�� point�� ��ǥ�� (" << p4.x << ", " << p4.y << ")�Դϴ�," << endl;   //0, 0 �ʱⰪ�� ���� ������ 0
}