#include <iostream>
using namespace std;

class AccessControl {
private:
	int a;
	void a1();
	AccessControl();

public:
	int b;
	AccessControl(int x);
	void b1();
};

AccessControl::AccessControl() {
	a = 1;
	b = 1;
}

AccessControl::AccessControl(int x) {
	a = x;
	b = x;
}

void AccessControl::a1() {
	a = 5;
	b = 4;
}

void AccessControl::b1() {
	a = 6;
	b = 6;
}

void main() {
	AccessControl objA;
	AccessControl objB(100);
	objB.a = 10; objB.b = 20;
	objB.a1(); objB.b1();                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
}