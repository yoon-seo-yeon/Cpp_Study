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
		cout << name << " 생성" << endl;
	}

	string Name() {
		return name;
	}

	int Age() {
		return age;
	}

	void CPerson_cp() {
		cout << name << "은 " << age << "세 입니다" << endl;
	}

	~CPerson() {
		cout << name << " 소멸" << endl;
	}
};

int main() {
	CPerson cp("홍길동", 33); 
	cp.CPerson_cp();

	cout << cp.Name() << "의 나이는 " << cp.Age() << endl;

	return 0;
}