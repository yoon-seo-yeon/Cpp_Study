#include <iostream>
using namespace std;

class Parent {
public :
	Parent() {
		cout << "Parent" << endl;
	}

	virtual ~Parent() {
		cout << "~Parent" << endl;
	}
};

class Child : public Parent {
public:
	Child() {
		cout << "Child" << endl;
	}

	~Child() {
		cout << "~Child" << endl;
	}
};

void main() {
	Child* ptr = new Child;
	//Parent* ptr = new Child; //Child만큼 만들어서 타입은 Parent로 사용 타입이 부모 타입이라 소멸은 부모타입밖에 안됨 해결방법은 부모 소멸자에 virtual 해주는 것
	//Child* ptr = new Parent //이건 오류
	delete ptr;
}