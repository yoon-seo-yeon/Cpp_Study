#include <iostream>
using namespace std;

class Person {
	string name;

protected:
	string addr;
};

class Student : public Person {
public :
	void setNamer(string name) {
		this->name = name;
	}

	void setAddr(string addr) {
		this->addr = addr;
	}

	string getAddr() {
		return addr;
	}
};

int main() {
	Student student1;
	student1.setAddr("서울시 관악구 호암로 546번지");
	cout << student1.getAddr() << endl;
	return 0;
}