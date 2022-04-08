#include <iostream>
using namespace std;

class Point {
public:
	int x;
	int y;

	Point() {
		cout << "기본 생성자" << endl;
	}

	~Point() {
		cout << "(" << x << ", " << y << ")" << "기본소멸자" << endl;
	}
};

int main() {
	Point *arr[5];

	for (int i = 0; i < 5; i++) {
		arr[i] = new Point();//동적할당
	}

	for (int i = 0; i < 5; i++) {
		cin >> arr[i]->x;
		cin >> (*arr[i]).y;
	}

	for (int i = 0; i < 5; i++) {
		delete arr[i];
	}
	return 0;
}