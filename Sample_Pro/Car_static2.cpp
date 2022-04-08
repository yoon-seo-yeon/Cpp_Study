//126������ ���������� �ٲ㼭 �ϴ� ���α׷�
#include <iostream>
using namespace std;

class Car {
	int ton, price;

public:
	static int count; //���� ���� ���� //���� ���������� �ƴ� static�� ���� ���� : ���� ������ ����� �ȴ� ��� private���ٴ� protected�� �� ���� ����
	Car() {
		ton = 0; price = 1000; count++;
	}

	Car(int ton, int price) {
		this->ton = ton; this->price = price; count++;
	}

	static int getCount() {
		return count;
	}
};

int Car::count = 0; 

int main() {
	Car car1;

	cout << "������ �ڵ����� �� : " << car1.getCount() << endl;

	Car car2(10, 3000);
	cout << "������ �ڵ����� �� : " << car2.getCount() << endl;

	return 0;
}

/*
//126������ ���������� �ٲ㼭 �ϴ� ���α׷�
#include <iostream>
using namespace std;

class Car {
	int ton, price;

public:
	//static int count; //���� ���� ���� //���� ���������� �ƴ� static�� ���� ���� : ���� ������ ����� �ȴ� ��� private���ٴ� protected�� �� ���� ����
	Car() {
		ton = 0; price = 1000; 
	}

	Car(int ton, int price) {
		this->ton = ton; this->price = price; 
	}
};

static int cnt = 0;

int main() {
	Car car1;

	cout << "������ �ڵ����� �� : " << ++cnt << endl;

	Car car2(10, 3000);
	cout << "������ �ڵ����� �� : " << ++cnt << endl;

	return 0;
}
*/