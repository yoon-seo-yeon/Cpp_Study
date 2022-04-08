#include <iostream>
using namespace std;

class Ride {
public:
	virtual void rideFunc() {
		//cout << "Ÿ��" << endl;
	}

	virtual void Number() {																																											

	}
};

class BusRide : public Ride {
public: 
	int age;
	void rideFunc() {
		cout << "������ Ÿ��" << endl;
	}

	void Number() {
		cout << "152" << endl;
	}
};

class AirRide : public Ride {
public:
	int ton;
	void rideFunc() {
		cout << "����⸦ Ÿ��" << endl;
	}
};

int main() {
	Ride* r1 = new BusRide(); //�θ� Ŭ���� rideFunc()�Լ��� virtual �� ���ٸ� �θ� Ŭ������ ����, �ִٸ� �ڽĲ� ����
	r1->rideFunc();
	r1->Number(); //���� //�θ� Ŭ������ �� �Լ��� ���� ������ ���� //����ȯ ����� ������ �׳� �θ� Ŭ������ �Լ� �ϳ� ����� virtual �ֱ� �θ� Ŭ������ �ִ°� ��¥�Լ�
	//r1->age = 100;
	delete r1; 

	cout << "***************" << endl;

	Ride* r2 = new AirRide();
	r2->rideFunc();
	delete r2;

	cout << "***************" << endl;

	Ride* r3 = new Ride();
	r3->rideFunc();
	delete r3;

	cout << "***************" << endl;

	return 0;
}