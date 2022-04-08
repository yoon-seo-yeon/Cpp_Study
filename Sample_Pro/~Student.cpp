#include <iostream>
using namespace std;

class Student {
private:
	char* name;
	int age;
	
public:
	Student(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}

	void ShowStudentInfo() {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	~Student() {
		cout << name << " called destructor!" << endl; //홍길동이 먼저 소멸됨 : 생성된 반대로 소멸
		delete[]name;		
	}
};

int main(void) {
	Student student1("lee mee rim", 33);
	cout << sizeof(Student) << endl;		  //멤버변수가 두 개 들어있는데 포인터 4byte, int 4byte 이기 때문에 8이 나온다
	cout << &(student1) << endl; 

	Student student2("hong gil dong", 34);
	cout << &(student2) << endl;

	student1.ShowStudentInfo();
	student2.ShowStudentInfo();

	return 0;
}