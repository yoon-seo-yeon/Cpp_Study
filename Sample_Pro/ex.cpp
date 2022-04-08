#include <iostream>
using namespace std;

class Camera {
public:
	Camera() {
		cout << "Camera 생성자" << endl;
	}

	void Shutter() {
		cout << "사진을 찍다!" << endl;
	}

	void ShowInfo() {
		cout << "200만화소" << endl;
	}

	~Camera() {
		cout << "Camera 소멸자" << endl;
	}
};

class Phone {
	char Number[12];

public:
	Phone() {
		cout << "Phone 생성자" << endl;
	}

	Phone(const char* PhoneNumber) {
		strcpy(Number, PhoneNumber);
		cout << "Phone 생성자 : " << Number << endl;
	}

	void Call() {
		cout << "전화를 걸다!" << endl;
	}

	void ShowInfo() {
		cout << "전화번호 : " << Number << endl;
	}

	char SetNumber() {
		return *Number;
	}

	~Phone() {
		cout << "Phone 소멸자" << endl;
	}
};

class SmartPhone : public Camera, public Phone {
public:
	SmartPhone() {
		cout << "SmartPhone 생성자" << endl;
	}

	SmartPhone(const char* PhoneNumber) {
		cout << "SmartPhone 생성자 : " << PhoneNumber << endl;
	}

	~SmartPhone() {
		cout << "SmartPhone 소멸자" << endl;
	}
};

class MobilePhone : public Phone {
	Camera cam;

public:
	MobilePhone() {
		cout << "MobilePhone 생성자" << endl;
	}

	MobilePhone(const char* PhoneNumber) {
		cout << "MobilePhone 생성자 : " << PhoneNumber << endl;
	}

	void ClickShutter() {
		cam.Shutter();
	}

	~MobilePhone() {
		cout << "MobilePhone 소멸자" << endl;
	}
};

class MobileDevice {
	Camera cam;
	Phone ph;

public:
	MobileDevice() {
		cout << "MobilePhone 생성자" << endl;
	}

	MobileDevice(const char* PhoneNumber) {
		ph.SetNumber();
		cout << "MobilePhone 생성자 : " << PhoneNumber << endl;
	}

	void ClickShutter() {
		cam.Shutter();
	}

	void Call() {
		ph.Call();
	}

	void ShowInfo() {
		ph.ShowInfo();
	}

	~MobileDevice() {
		cout << "MobilePhone 소멸자" << endl;
	}
};

int main() {
	SmartPhone sp("01043960209");
	sp.Call();
	//sp.ShowInfo();
	sp.Shutter();

	cout << "***********" << endl;

	MobilePhone mp("01043960209");
	mp.Call();
	mp.ShowInfo();
	//mp.Shutter();	//Camera 상속 받지 않았기 때문에 오류

	cout << "***********" << endl;

	MobileDevice md("01043960209");
	md.Call();
	md.ShowInfo();
	md.ClickShutter();

	return 0;
}