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
	//배열로 new 연산을 수행할 수 있다
	TestC* ptr = new TestC[3];

	//배열로 생성된 것은 반드시 배열로 삭제해야 한다
	delete[] ptr;
	cout << "End" << endl;

	return 0;
}