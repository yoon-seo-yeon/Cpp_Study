#include <iostream>
using namespace std;

#define SIZE 15

class Person {
	char name[SIZE];
	char phone[SIZE];
	int age;

public:
	Person(const char *name, const char *phone, int age) {
		strcpy(this->name, name);
		strcpy(this->phone, phone);
		this->age = age;

	}

	void ShowData();
};

void Person::ShowData() {
	cout << "name : " << name << endl;
	cout << "phone : " << phone << endl;
	cout << "age : " << age << endl;
}
//열혈강의 c++프로그래밍 연습문제
int main() {
	Person p = { "KIM", "013-113-1113", 22 };
	p.ShowData();

	return 0;
}