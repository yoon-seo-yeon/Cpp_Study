#include <iostream>
using namespace std;

class Ride {
public:
	virtual void rideFunc() {	//가상함수
		/*cout << "타다" << endl;*/
	}
};																									

class BusRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "버스를 타다" << endl;
	}
};

class AirRide : public Ride {
public:
	int ton;
	void rideFunc() {
		cout << "비행기를 타다" << endl;
	}
};

int main() {
	BusRide br1;
	Ride& r1 = br1;
	r1.rideFunc();	//참조자 이기 때문에 도트 사용, virtual 이 없으면 "타다"가 나옴
	//r1.age = 10;	//Ride에는 age가 없기 때문에 오류

	AirRide ar2;
	Ride& r2 = ar2;
	r2.rideFunc();

	return 0;
}
//참조자나 포인터나 다를 게 없다 다른 것은 포인터는 화살표(->), 참조자는 도트(.) 사용