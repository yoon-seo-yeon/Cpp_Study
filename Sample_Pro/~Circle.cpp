#include <iostream>
using namespace std;

class Circle {
public:
	int radius;

	Circle();
	Circle(int r);
	~Circle();
};

Circle::Circle() {
	radius = 10;
	cout << "������ : " << radius << " �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ : " << radius << " �� ����" << endl;
}

Circle::~Circle() {
	cout << "������ : " << radius << " �� �Ҹ�" << endl;
}

void main() {
	Circle c1;
	Circle c2(50);
	cout << sizeof(Circle) << endl;		//������� radius�ϳ��� ������ 4
}