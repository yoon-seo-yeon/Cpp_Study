#include <iostream>
using namespace std;

//��ü ������ �ΰ��� ����
//Person p = Person("KIM", "013-113-1113", 22);
//Person p("KIM", "013-113-1113", 22);
//person p(); <= x 

//���� �߻� �ذ�
class Person {
	//private�̱� ������ ���� �߻�
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
	cout << "��ü�� �Ҹ��մϴ�." << endl;
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
 private �̹Ƿ� ���� �ȵ�
#include <iostream>
using namespace std;

class Person {
	//private�̱� ������ ���� �߻�
	const char* name;
	const char* phone;
	int age;

public:
	void ShowData(); //���� ���� �ʰ� �׳� �ᵵ ������ �׷��� �ζ��� �Լ��� �ȴ� �ζ��� �Լ��� ª�� �� ���� ���̹Ƿ� �׳� ������Ÿ�Ը� �ְ� ���� ����ϴ� ���� �� ����
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