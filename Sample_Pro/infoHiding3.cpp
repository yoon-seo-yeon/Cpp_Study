#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
};
void Point::setX(int x) {this->x = x;}

void Point::setY(int y) {this->y = y;}

int Point::getX() {return x;}

int Point::getY() {return y;}
int main() {
	int x, y;
	cout << "좌표 입력 : ";
	cin >> x >> y;
	Point p;
	p.setX(x);		//information hiding
	p.setY(y);		//information hiding
	cout << "점(" << p.getX() << ", " << p.getY() << ") 그리기" << endl;
	return 0;
}