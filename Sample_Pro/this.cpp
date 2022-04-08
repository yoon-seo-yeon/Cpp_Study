#include <iostream>
using namespace std;

class Person {
	int age;
public:
	Person*GetThis() { //p1을 리턴하라는 말과 같기 때문에 GetThis()의 리턴값을 Person*이어야 한다
		return this; //p1을 리턴하라는 말과 같다
	}
	int GetAge() { //age는 int타입이기 때문에 리턴값도 int
		return this->age; //return age와 같다
	}
};

int main() {
	Person* p1 = new Person();
	cout << p1 << endl;						//p1의 주소 출력
	cout << p1->GetThis() << endl;	//위의 값과 똑같다
	cout << p1->GetAge() << endl;		//p1의 age, age는 private이기 때문에 GetAge()를 만들어서 해야한다

	Person* p2 = new Person();
	cout << p2 << endl;						//p2의 주소 출력
	cout << p2->GetThis() << endl;	//위의 값과 똑같다

	return 0;
}