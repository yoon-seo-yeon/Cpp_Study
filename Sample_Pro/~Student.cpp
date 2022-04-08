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
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}

	~Student() {
		cout << name << " called destructor!" << endl; //ȫ�浿�� ���� �Ҹ�� : ������ �ݴ�� �Ҹ�
		delete[]name;		
	}
};

int main(void) {
	Student student1("lee mee rim", 33);
	cout << sizeof(Student) << endl;		  //��������� �� �� ����ִµ� ������ 4byte, int 4byte �̱� ������ 8�� ���´�
	cout << &(student1) << endl; 

	Student student2("hong gil dong", 34);
	cout << &(student2) << endl;

	student1.ShowStudentInfo();
	student2.ShowStudentInfo();

	return 0;
}