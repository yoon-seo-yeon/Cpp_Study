#include <iostream>
using namespace std;

class TestC {
	int iData;

public:
	TestC() {
		cout << "TestC::TestC()" << endl;
	}
	~TestC() {
		cout << "TestC::~TestC()" << endl;
	}
};

int main() {
	cout << "main begin" << endl;
	TestC* ptr = new TestC;
	cout << "Test Cplus" << endl;
	delete ptr;
	cout << "End" << endl;

	return 0;
}