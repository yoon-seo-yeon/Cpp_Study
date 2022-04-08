#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char* name;
	int age;

public:
	Person(const char* myname, int myage) {		  //매개변수 두 개인 생성자
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}

	void ShowPerson() const {
		cout << "이름 : " << name << " ";
		cout << "나이 : " << age << endl;
	}

	Person(Person& s) :age(s.age) //this->age = s.age과 똑같음	  //복사생성자
	{ //복사 생성자 (깊은 복사)
		name = new char[strlen(s.name) + 1];
		//this->age = s.age;
		strcpy(name, s.name);
	}

	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void) {
	Person man1("Lee Mee Rim", 27);
	//밑 세 개 문 장 모두 같음
	Person man2(man1);	//man2 = man1 또는 man2{man1}
	//Person man2 = man1;
	//Person man2{ man1 };

	man1.ShowPerson();
	man2.ShowPerson();

	return 0;
}

/*
이름 : Lee Mee Rim 나이 : 27
이름 : Lee Mee Rim 나이 : 27
called destructor!
called destructor!
*/