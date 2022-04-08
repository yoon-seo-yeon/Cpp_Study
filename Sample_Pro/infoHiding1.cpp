#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	/*void setX(int xx) {	//1.이름을 다르게 하거나	
		x = xx;
	}*/
	void setX(int x) {		//2.this를 활용하거나
		(*this).x = x;
		//this->x = x; //위와 같음
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
	cout << "좌표 입력 : ";
	cin >> x >> y;
	Point p;
	p.setX(x);		//information hiding
	p.setY(y);		//information hiding
	cout << "점(" << p.getX() << ", " << p.getY() << ") 그리기" << endl;
	return 0;
}