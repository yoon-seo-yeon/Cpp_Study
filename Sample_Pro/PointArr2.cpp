#include <iostream>
using namespace std;

class Point {
public:
	int x;
	int y;

	Point() {
		cout << "�⺻ ������" << endl;
	}

	~Point() {
		cout << "(" << x << ", " << y << ")" << "�⺻�Ҹ���" << endl;
	}
};

int main() {
	Point *arr[5];

	for (int i = 0; i < 5; i++) {
		arr[i] = new Point();//�����Ҵ�
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