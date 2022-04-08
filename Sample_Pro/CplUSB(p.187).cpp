#include <iostream>
using namespace std;

class CplUSB {
public:
	CplUSB() {

	}

	virtual ~CplUSB() {

	}

	virtual int GetSerial() = 0;
																																							
protected :
	int Serial_ID;
};

void GetPrint(CplUSB* ptr) {
	cout << "장치 id : " << ptr->GetSerial() << endl;
}

class CplMouse : public CplUSB {
public :
	CplMouse(int id) {
		Serial_ID = id;
	}

	virtual int GetSerial() {
		cout << "Mouse 클래스 ";
		return Serial_ID;
	}
};

class CellPhone : public CplUSB {
public:
	CellPhone(int id) {
		Serial_ID = id;
	}

	virtual int GetSerial() {
		cout << "스마트폰 클래스";
		return Serial_ID;
	}
};

int main() {
	CplMouse cm(1234);
	CellPhone cp(5678);

	//::<-영역함수가 둘 다 있든 둘 다 없든 하나만 있든 결과는 다르지 않다.
	::GetPrint(&cm);
	GetPrint(&cp);

	return 0;
}