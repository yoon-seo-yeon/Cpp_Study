#include <iostream>
using namespace std;

class Car {
	int ton, price;

public:
	static int count;	//���� ���� ����
	Car() {
		ton = 0; price = 1000; count++;
	}

	Car(int ton, int price) {
		this->ton = ton; this->price = price; count++;
	}

	int getTon() {
		return ton;
	}

	int getPrice() {
		return price;
	}

	~Car() {
		count--;
		cout << "�Ҹ� : " << count << endl;
	}
};

int Car::count = 0; //�ۿ��� �ʱ�ȭ�� ���� static�� �ȵȴ� �� static int Car::count = 0�� �ȵȴ�

int main() {
	//cout << "������ �ڵ����� �� : " << car1.count << endl; //���⼭�� car1.count�� �� �� ���� Car::count�� �� �� �ִ�

	Car car1;
	cout << "������ �ڵ����� �� : " << car1.count << endl; //car1��ü�� ����Ǿ��� ������ Car::count�� �ǰ� car1.count�� �ȴ�
	cout << "������ �ڵ����� ton : " << car1.getTon() << " ������ �ڵ����� ���� : " << car1.getPrice() << endl;

	Car car2(10, 3000);
	cout << "������ �ڵ����� �� : " << car2.count << endl; //Car::count�� �ǰ� car1.count�� �ǰ� car2.count�� �ȴ�
	cout << "������ �ڵ����� ton : " << car2.getTon() << " ������ �ڵ����� ���� : " << car2.getPrice() << endl;
	
	return 0;
}