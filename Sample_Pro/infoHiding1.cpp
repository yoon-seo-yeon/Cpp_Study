#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	/*void setX(int xx) {	//1.�̸��� �ٸ��� �ϰų�	
		x = xx;
	}*/
	void setX(int x) {		//2.this�� Ȱ���ϰų�
		(*this).x = x;
		//this->x = x; //���� ����
	}

	void setY(int yy) {
		y = yy;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}
};
int main() {
	int x, y;
	cout << "��ǥ �Է� : ";
	cin >> x >> y;
	Point p;
	p.setX(x);		//information hiding
	p.setY(y);		//information hiding
	cout << "��(" << p.getX() << ", " << p.getY() << ") �׸���" << endl;
	return 0;
}