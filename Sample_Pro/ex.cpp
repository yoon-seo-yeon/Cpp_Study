#include <iostream>
using namespace std;

class Camera {
public:
	Camera() {
		cout << "Camera ������" << endl;
	}

	void Shutter() {
		cout << "������ ���!" << endl;
	}

	void ShowInfo() {
		cout << "200��ȭ��" << endl;
	}

	~Camera() {
		cout << "Camera �Ҹ���" << endl;
	}
};

class Phone {
	char Number[12];

public:
	Phone() {
		cout << "Phone ������" << endl;
	}

	Phone(const char* PhoneNumber) {
		strcpy(Number, PhoneNumber);
		cout << "Phone ������ : " << Number << endl;
	}

	void Call() {
		cout << "��ȭ�� �ɴ�!" << endl;
	}

	void ShowInfo() {
		cout << "��ȭ��ȣ : " << Number << endl;
	}

	char SetNumber() {
		return *Number;
	}

	~Phone() {
		cout << "Phone �Ҹ���" << endl;
	}
};

class SmartPhone : public Camera, public Phone {
public:
	SmartPhone() {
		cout << "SmartPhone ������" << endl;
	}

	SmartPhone(const char* PhoneNumber) {
		cout << "SmartPhone ������ : " << PhoneNumber << endl;
	}

	~SmartPhone() {
		cout << "SmartPhone �Ҹ���" << endl;
	}
};

class MobilePhone : public Phone {
	Camera cam;

public:
	MobilePhone() {
		cout << "MobilePhone ������" << endl;
	}

	MobilePhone(const char* PhoneNumber) {
		cout << "MobilePhone ������ : " << PhoneNumber << endl;
	}

	void ClickShutter() {
		cam.Shutter();
	}

	~MobilePhone() {
		cout << "MobilePhone �Ҹ���" << endl;
	}
};

class MobileDevice {
	Camera cam;
	Phone ph;

public:
	MobileDevice() {
		cout << "MobilePhone ������" << endl;
	}

	MobileDevice(const char* PhoneNumber) {
		ph.SetNumber();
		cout << "MobilePhone ������ : " << PhoneNumber << endl;
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
		cout << "MobilePhone �Ҹ���" << endl;
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
	//mp.Shutter();	//Camera ��� ���� �ʾұ� ������ ����

	cout << "***********" << endl;

	MobileDevice md("01043960209");
	md.Call();
	md.ShowInfo();
	md.ClickShutter();

	return 0;
}