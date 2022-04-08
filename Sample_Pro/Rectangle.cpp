#include <iostream>
using namespace std;
//�����ڿ� �Ҹ��ڴ� ��Ӿȵ� ���ڰ� ������ �ִ� ���̴�

class Shape {	//�簢��, Ÿ��, �ﰢ���� �θ� Ŭ����
protected :
	int x, y, width, height;

public:
	Shape() : x(0), y(0), width(0), height(0){
		cout << "���� ������" << endl;
	}

	Shape(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {
		cout << "�Ű����� ���� ������" << endl;
	}

	virtual void Draw() {
		cout << "������ �׸��ϴ�." << endl;
		cout << "x ��ǥ : " << x << endl << "y ��ǥ : " << y << endl << "width  : " << width << endl << "height : " << height << endl;
	}

	virtual ~Shape() {
		cout << "���� �Ҹ���" << endl << endl;
	}
};

class Rectangle : public Shape {	//�簢��
	int k;
public :
	Rectangle() : Shape() {	  //:Shape() �Ƚᵵ �׸�
		k = 0;
		cout << "�簢�� ������" << endl;
	}

	Rectangle(int x, int y, int width, int height) : Shape(x, y, width, height) {
		cout << "�Ű����� �簢�� ������" << endl;
	}

	void Draw() {
		cout << "�簢���� �׸��ϴ�." << endl;
		cout << "x ��ǥ : " << x << endl << "y ��ǥ : " << y << endl << "width  : " << width << endl << "height : " << height << endl << "k     : " << k << endl << endl;
	}

	~Rectangle() {
		cout << "�簢�� �Ҹ���" << endl;
	}
};

class Ellipse : public Shape {	//Ÿ��
public:
	Ellipse() : Shape() {
		cout << "Ÿ�� ������" << endl;
	}

	Ellipse(int x, int y, int width, int height) : Shape(x, y, width, height) {
		cout << "�Ű����� Ÿ�� ������" << endl;
	}

	void Draw() {
		cout << "Ÿ���� �׸��ϴ�." << endl;
		cout << "x ��ǥ : " << x << endl << "y ��ǥ : " << y << endl << "width  : " << width << endl << "height : " << height << endl << endl;
	}

	~Ellipse() {
		cout << "Ÿ�� �Ҹ���" << endl;
	}
};

class Triangle : public Shape {	//�ﰢ��
public:

	Triangle() : Shape() {
		cout << "�ﰢ�� ������" << endl;
	}

	Triangle(int x, int y, int width, int height) : Shape(x, y, width, height) {
		cout << "�Ű����� �ﰢ�� ������" << endl;
	}

	void Draw() {
		cout << "�ﰢ���� �׸��ϴ�." << endl;
		cout << "x ��ǥ : " << x << endl << "y ��ǥ : " << y << endl << "width  : " << width << endl << "height : " << height << endl << endl;
	}

	~Triangle() {
		cout << "�ﰢ�� �Ҹ���" << endl;
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
	Rectangle* rect = new Rectangle();		//���� ��� : Shape -> Rectangle
	rect->Draw();	//���� �� : 0, 0, 0, 0
	//((Shape*)rect)->Draw();	//rect�� Shape�� ����ȯ �ϰڴٴ� ��  //�簢���� �׸��ϴٿ��� ������ �׸��ϴٷ� �ٲ��  //���� �� : 0, 0, 0, 0
	delete rect;						//���� ��� : Rectangle -> Shape		

	Shape* shape = new Shape();		//Shape
	shape->Draw();
	//((Rectangle*)shape)->Draw(); //������ �׸��ϴٿ��� �簢���� �׸��ϴٷ� �ٲ�   //0, 0, 0, 0
	delete shape;					  //Shape

	
	//�Ʒ����� �ȵ�
	Ellipse* rs1 = new Shape();		
	rs1->Draw();
	delete rs1;
	
	
	Shape* rs2 = new Rectangle();
	rs2->Draw();
	delete rs2;
}
*/


/*
//�����Ҵ�
int main() {
	//�簢�� �� �� �����
	Rectangle r1;
	r1.Draw();

	Rectangle r2(1, 2, 3, 4);
	r2.Draw();

	//Ÿ�� �� �� �����
	Ellipse e1;
	e1.Draw();

	Ellipse e2(5, 6, 7, 8);
	e2.Draw();

	//�ﰢ�� �� �� �����
	Triangle t1;
	t1.Draw();

	Triangle t2(9, 10, 11, 12);
	t2.Draw();

	return 0;
}
*/



/*
//�����Ҵ�
int main() {
	//�簢�� �� �� �����
	Rectangle* r1 = new Rectangle;
	r1->Draw();
	delete r1;
	Rectangle* r2 = new Rectangle(1, 2, 3, 4);
	r2->Draw();
	delete r2;

	//Ÿ�� �� �� �����
	Ellipse* e1 = new Ellipse;
	e1->Draw();
	delete e1;
	Ellipse* e2 = new Ellipse(5, 6, 7, 8);
	e2->Draw();
	delete e2;

	//�ﰢ�� �� �� �����
	Triangle* t1 = new Triangle;
	t1->Draw();
	delete t1;
	Triangle* t2 = new Triangle(9, 10, 11, 12);
	t2->Draw();
	delete t2;

	return 0;
}
*/