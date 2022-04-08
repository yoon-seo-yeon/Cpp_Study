//ÀßµÈ ¿¹(ÁÁÀº Ä¸½¶È­ÀÇ ¿¹)
#include <iostream>
using namespace std;

class CONTAC600 {
public:
	void SnotTake(int id) {
		cout << id << "Äà¹° ³´±â" << endl;
	}
	void SneezeTake(int id) {
		cout << id << "ÀçÃ¤±â ¸Ü±â" << endl;
	}
	void SnuffleTake(int id) {
		cout << id << "ÄÚ ¶Õ±â" << endl;
	}
	void take(int id) {
		SnotTake(id);
		SneezeTake(id);
		SnuffleTake(id);
	}
};

class Patient {
public:
	int id;
public:
	void takeCONTAC600(CONTAC600 cap) {
		cap.take(id);
	}
};

int main() {
	Patient suf = { 1001 };

	suf.takeCONTAC600(CONTAC600());

	return 0;
}

/*
* 1.ÀÌ°Ç Àß¸øµÈ ¿¹
#include <iostream>
using namespace std;

class SnotCap {
public:
	void take(int id) {
		cout << id << "Äà¹° ³´±â" << endl;
	}
};

class SneezeCap {
public:
	void take(int id) {
		cout << id << "ÀçÃ¤±â ¸Ü±â" << endl;

	}
};

class SnuffleCap {
public:
	void take(int id) {
		cout << id << "ÄÚ ¶Õ±â" << endl;
	}
};

class Patient {
public:
	int id;
public:
	void takeSinivelcap(SnotCap cap) {
		cap.take(id);
	}

	void takeSneezeCap(SneezeCap cap) {
		cap.take(id);
	}

	void takeSnuffleCap(SnuffleCap cap) {
		cap.take(id);
	}
};

int main() {

	//Patient suf = { 1001 };

	//suf.takeSinivelcap(SnotCap());
	//suf.takeSneezeCap(SneezeCap());
	//suf.takeSnuffleCap(SnuffleCap());

	Patient suf = { 1001 };
	SnotCap a;
	SneezeCap b;
	SnuffleCap c;

	suf.takeSinivelcap(a);
	suf.takeSneezeCap(b);
	suf.takeSnuffleCap(c);

	return 0;
}*/