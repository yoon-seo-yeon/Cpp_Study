#include <iostream>
using namespace std;

class Ride {
public:
	virtual void rideFunc() {	//�����Լ�
		/*cout << "Ÿ��" << endl;*/
	}
};																									

class BusRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "������ Ÿ��" << endl;
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
	BusRide br1;
	Ride& r1 = br1;
	r1.rideFunc();	//������ �̱� ������ ��Ʈ ���, virtual �� ������ "Ÿ��"�� ����
	//r1.age = 10;	//Ride���� age�� ���� ������ ����

	AirRide ar2;
	Ride& r2 = ar2;
	r2.rideFunc();

	return 0;
}
//�����ڳ� �����ͳ� �ٸ� �� ���� �ٸ� ���� �����ʹ� ȭ��ǥ(->), �����ڴ� ��Ʈ(.) ���