#include <iostream>
using namespace std;

class Shape {
	int x, y;
	static int count;

public:
	Shape(int x, int y) :x(x), y(y) {
		cout << ++count << "번째 도형 생성" << endl;
	}

	/*int getX() {
		return x;
	}

	int getY() {
		return y;
	}*/

	//virtual void drawCal() = 0;	//순수 가상 함수
	virtual void drawCal() {
		cout << "좌표(" << x << ", " << y << ")이고, ";
	}
};

class Rectangle : public Shape {		//사각형
	int width, height;
public:
	Rectangle(int x, int y, int width, int height) : Shape(x, y), width(width), height(height) {}

	void drawCal() {
		//cout << "좌표(" << getX() << ", " << getY() << ")이고, ";
		Shape::drawCal();
		cout << "가로 : " << width << ", 세로 : " << height << "인 ";
		cout << "사각형의 면적 : " << width * height << endl << endl;
	}
};

class Triangle : public Shape {		//삼각형
	int height, base;
public:
	Triangle(int x,int y,int base, int height) : Shape(x, y), base(base), height(height) {}

	void drawCal() {
		//cout << "좌표(" << getX() << ", " << getY() << ")이고, ";
		Shape::drawCal();
		cout << "밑변 : " << base << ", 높이 : " << height << "인 ";
		cout << "삼각형의 면적 : " << (base * height) / 2 << endl << endl;
	}
};

class Circle : public Shape {			 //원
	int r;
	static const double PI;
public:
	Circle(int x, int y, int r) : Shape(x, y), r(r) {}

	void drawCal() {
		//cout << "좌표(" << getX() << ", " << getY() << ")이고, ";
		Shape::drawCal();
		cout << "반지름 : " << r << "인 ";
		cout << "원의 면적 : " << r * r * PI << endl << endl;
	}
};

const double Circle::PI = 3.14;
int Shape::count = 0;

int main() {
	Shape* ps1 = new Rectangle(1, 2, 34, 56);	//1904 //형변환
	ps1->drawCal();

	Shape* ps2 = new Triangle(3, 4, 34, 56);	//952 //형변환
	ps2->drawCal();

	Shape* ps3 = new Circle(5, 6, 8);		    //200.96 //형변환
	ps3->drawCal();	

	return 0;
}

/*
1번째 도형 생성
좌표(1, 2)이고, 가로 : 34 세로 : 56인 사각형의 면적 : 1904
2번째 도형 생성
좌표(3, 4)이고, 밑변 : 34 높이 : 56인 삼각형의 면적 : 952
3번째 도형 생성
좌표(5, 6)이고, 반지름 : 8인 원의 면적 : 200.96
*/