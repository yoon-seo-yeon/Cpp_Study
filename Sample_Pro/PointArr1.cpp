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
	//new가 없으니 delete 도 필요가 없다
	Point arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i].x;
		cin >> arr[i].y;
	}

	return 0;
}