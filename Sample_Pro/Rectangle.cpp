#include <iostream>
using namespace std;
//생성자와 소멸자는 상속안됨 각자가 가지고 있는 것이다

class Shape {	//사각형, 타원, 삼각형의 부모 클래스
protected :
	int x, y, width, height;

public:
	Shape() : x(0), y(0), width(0), height(0){
		cout << "도형 생성자" << endl;
	}

	Shape(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {
		cout << "매개변수 도형 생성자" << endl;
	}

	virtual void Draw() {
		cout << "도형을 그립니다." << endl;
		cout << "x 좌표 : " << x << endl << "y 좌표 : " << y << endl << "width  : " << width << endl << "height : " << height << endl;
	}

	virtual ~Shape() {
		cout << "도형 소멸자" << endl << endl;
	}
};

class Rectangle : public Shape {	//사각형
	int k;
public :
	Rectangle() : Shape() {	  //:Shape() 안써도 그만
		k = 0;
		cout << "사각형 생성자" << endl;
	}

	Rectangle(int x, int y, int width, int height) : Shape(x, y, width, height) {
		cout << "매개변수 사각형 생성자" << endl;
	}

	void Draw() {
		cout << "사각형을 그립니다." << endl;
		cout << "x 좌표 : " << x << endl << "y 좌표 : " << y << endl << "width  : " << width << endl << "height : " << height << endl << "k     : " << k << endl << endl;
	}

	~Rectangle() {
		cout << "사각형 소멸자" << endl;
	}
};

class Ellipse : public Shape {	//타원
public:
	Ellipse() : Shape() {
		cout << "타원 생성자" << endl;
	}

	Ellipse(int x, int y, int width, int height) : Shape(x, y, width, height) {
		cout << "매개변수 타원 생성자" << endl;
	}

	void Draw() {
		cout << "타원을 그립니다." << endl;
		cout << "x 좌표 : " << x << endl << "y 좌표 : " << y << endl << "width  : " << width << endl << "height : " << height << endl << endl;
	}

	~Ellipse() {
		cout << "타원 소멸자" << endl;
	}
};

class Triangle : public Shape {	//삼각형
public:

	Triangle() : Shape() {
		cout << "삼각형 생성자" << endl;
	}

	Triangle(int x, int y, int width, int height) : Shape(x, y, width, height) {
		cout << "매개변수 삼각형 생성자" << endl;
	}

	void Draw() {
		cout << "삼각형을 그립니다." << endl;
		cout << "x 좌표 : " << x << endl << "y 좌표 : " << y << endl << "width  : " << width << endl << "height : " << height << endl << endl;
	}

	~Triangle() {
		cout << "삼각형 소멸자" << endl;
	}
};

int main() {
	Shape* rs2[6];
	rs2[0] = new Rectangle;
	rs2[1] = new Rectangle(1, 2, 3, 4);
	rs2[2] = new Ellipse;
	rs2[3] = new Ellipse(5, 6, 7, 8);
	rs2[4] = new Triangle;
	rs2[5] = new Triangle(9, 10, 11, 12);

	for (int i = 0; i < 6; i++) {
		rs2[i]->Draw();
	}

	for (int i = 0; i < 6; i++) {
		delete rs2[i];
	}
}

/*
int main() {
	Rectangle* rect = new Rectangle();		//예상 경로 : Shape -> Rectangle
	rect->Draw();	//예상 답 : 0, 0, 0, 0
	//((Shape*)rect)->Draw();	//rect를 Shape로 형변환 하겠다는 것  //사각형을 그립니다에서 도형을 그립니다로 바뀐다  //예상 답 : 0, 0, 0, 0
	delete rect;						//예상 경로 : Rectangle -> Shape		

	Shape* shape = new Shape();		//Shape
	shape->Draw();
	//((Rectangle*)shape)->Draw(); //도형을 그립니다에서 사각혀을 그립니다로 바뀜   //0, 0, 0, 0
	delete shape;					  //Shape

	
	//아래꺼는 안됨
	Ellipse* rs1 = new Shape();		
	rs1->Draw();
	delete rs1;
	
	
	Shape* rs2 = new Rectangle();
	rs2->Draw();
	delete rs2;
}
*/


/*
//정적할당
int main() {
	//사각형 두 개 만들기
	Rectangle r1;
	r1.Draw();

	Rectangle r2(1, 2, 3, 4);
	r2.Draw();

	//타원 두 개 만들기
	Ellipse e1;
	e1.Draw();

	Ellipse e2(5, 6, 7, 8);
	e2.Draw();

	//삼각형 두 개 만들기
	Triangle t1;
	t1.Draw();

	Triangle t2(9, 10, 11, 12);
	t2.Draw();

	return 0;
}
*/



/*
//동적할당
int main() {
	//사각형 두 개 만들기
	Rectangle* r1 = new Rectangle;
	r1->Draw();
	delete r1;
	Rectangle* r2 = new Rectangle(1, 2, 3, 4);
	r2->Draw();
	delete r2;

	//타원 두 개 만들기
	Ellipse* e1 = new Ellipse;
	e1->Draw();
	delete e1;
	Ellipse* e2 = new Ellipse(5, 6, 7, 8);
	e2->Draw();
	delete e2;

	//삼각형 두 개 만들기
	Triangle* t1 = new Triangle;
	t1->Draw();
	delete t1;
	Triangle* t2 = new Triangle(9, 10, 11, 12);
	t2->Draw();
	delete t2;

	return 0;
}
*/