#include <iostream>
using namespace std;

class MyPerson {
public:
	MyPerson(int nParam) : nAge(nParam) {
		cout << "MyPerson()" << endl;
	}

	//���� ������ ���� �� ����
	MyPerson(const MyPerson& rhs) : nAge(rhs.nAge)
	{
		cout << "MyPerson(const MyPerson &)" << endl;
	}

	int getData(void) const {
		return nAge;
	}

	void setData(int nData) {
		nAge = nData;
	}

private:
	int nAge = 0;
};

//�Ű������� MyPerson Ŭ���� �����̹Ƿ� ���� �����ڰ� ȣ��ȴ�
void TestFunc(MyPerson param) { //MyPerson &param���� �ٲ��ָ� 50���� �ٲ��
	cout << "TestFunc()" << endl;
	//�� ȣ���� �Լ����� �Ű� ���� �ν��Ͻ��� ���� �����Ѵ�.
	param.setData(50);
}

int main() {
	cout << "*****Bigin*****" << endl;

	MyPerson p1(30);
	TestFunc(p1);

	//�Լ� ȣ�� �� p1 ���� ����Ѵ�
	cout << "p1 : " << p1.getData() << endl;
	cout << "*****End*****" << endl;

	return 0;
}