#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char* name;
	int age;

public:
	Person(const char* myname, int myage) {		  //�Ű����� �� ���� ������
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}

	void ShowPerson() const {
		cout << "�̸� : " << name << " ";
		cout << "���� : " << age << endl;
	}

	Person(Person& s) :age(s.age) //this->age = s.age�� �Ȱ���	  //���������
	{ //���� ������ (���� ����)
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
	//�� �� �� �� �� ��� ����
	Person man2(man1);	//man2 = man1 �Ǵ� man2{man1}
	//Person man2 = man1;
	//Person man2{ man1 };

	man1.ShowPerson();
	man2.ShowPerson();

	return 0;
}

/*
�̸� : Lee Mee Rim ���� : 27
�̸� : Lee Mee Rim ���� : 27
called destructor!
called destructor!
*/