#include <iostream>
using namespace std;

class CPerson {
private:
	string name;
	int age;

public:
	CPerson() {

	}

	CPerson(string name, int age) {
		this->name = name; 
		this->age = age;
		cout << name << " ����" << endl;
	}

	string Name() {
		return name;
	}

	int Age() {
		return age;
	}

	void CPerson_cp() {
		cout << name << "�� " << age << "�� �Դϴ�" << endl;
	}

	~CPerson() {
		cout << name << " �Ҹ�" << endl;
	}
};

int main() {
	CPerson cp("ȫ�浿", 33); 
	cp.CPerson_cp();

	cout << cp.Name() << "�� ���̴� " << cp.Age() << endl;

	return 0;
}