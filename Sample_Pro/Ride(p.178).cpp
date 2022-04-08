#include <iostream>
using namespace std;

class Ride {
public:
	virtual void rideFunc() {
		//cout << "타다" << endl;
	}

	virtual void Number() {																																											

	}
};

class BusRide : public Ride {
public: 
	int age;
	void rideFunc() {
		cout << "버스를 타다" << endl;
	}

	void Number() {
		cout << "152" << endl;
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
	Ride* r1 = new BusRide(); //부모 클래스 rideFunc()함수에 virtual 이 없다면 부모 클래스껄 실행, 있다면 자식껄 실행
	r1->rideFunc();
	r1->Number(); //오류 //부모 클래스에 이 함수가 없기 때문에 오류 //형변환 방법도 있지만 그냥 부모 클래스에 함수 하나 만들고 virtual 주기 부모 클래스에 있는건 가짜함수
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