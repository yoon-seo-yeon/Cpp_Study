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
	//�迭�� new ������ ������ �� �ִ�
	TestC* ptr = new TestC[3];

	//�迭�� ������ ���� �ݵ�� �迭�� �����ؾ� �Ѵ�
	delete[] ptr;
	cout << "End" << endl;

	return 0;
}