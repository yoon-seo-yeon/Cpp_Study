#include <iostream>
using namespace std;

//객체 생성의 두가지 형태
//Person p = Person("KIM", "013-113-1113", 22);
//Person p("KIM", "013-113-1113", 22);
//person p(); <= x 

//오류 발생 해결
class Person {
	//private이기 때문에 오류 발생
	const char* name;
	const char* phone;
	int age;

public:
	void ShowData();
	Person(const char* _name, const char* _phone, int _age);
	~Person();
		
	//void SetData(const char* _name, const char* _phone, int _age);
};

Person::Person(const char* name, const char* phone, int age) {
	this->name = name;
	this->phone = phone;
	this->age = age;
}

Person::~Person() {
	cout << "객체가 소멸합니다." << endl;
}

void Person::ShowData() {
	cout << "name: " << name << endl;
	cout << "phone: " << phone << endl;
	cout << "age: " << age << endl;
}

/*
void Person::SetData(const char* _name, const char* _phone, int _age) {
	name = _name;
	phone = _phone;
	age = _age;
}
*/

int main() {
	Person p("KIM", "013-113-1113", 22);
	//p.SetData("KIM", "013-113-1113", 22);
	p.ShowData();

	return 0;
}

/*
 private 이므로 실행 안됨
#include <iostream>
using namespace std;

class Person {
	//private이기 때문에 오류 발생
	const char* name;
	const char* phone;
	int age;

public:
	void ShowData(); //따로 빼지 않고 그냥 써도 되지만 그러면 인라인 함수가 된다 인라인 함수는 짧을 때 쓰는 것이므로 그냥 프로토타입만 주고 빼서 사용하는 것이 더 낫다
};

void Person::ShowData() {
	cout << "name: " << name << endl;
	cout << "phone: " << phone << endl;
	cout << "age: " << age << endl;
}

int main() {
	Person p = { "KIM", "013-113-1113", 22 };
	p.ShowData();

	return 0;
}*/