#include <iostream>
using namespace std;


class Student {
private:
	int nHakbun;
	const char* sName;

public:
	Student();
	Student(int nHakbun, const char* sName);
	void show();
};
//Student Ŭ���� ��� �Լ��� ����
Student::Student() {
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

Student::Student(int _nHakbun, const char* _sName) {
	nHakbun = _nHakbun;
	sName = _sName;
	cout << "�Ű������� �й��� ��ϵǾ����ϴ�" << endl;
}

void Student::show() {
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl;
}

int main() {
	//Student student1;	//Ŭ���� ���� ����(��ü ����)
	//student1.show();
	//Student student2(5678, "��̸�");
	//student2.show();
	Student stu[3] = {
		Student(), Student(1111, "������"), Student(2222, "������")
	};
	for (int i = 0; i < 3; i++) {
		stu[i].show();
	}
	return 0;
}


/*
class Student {
private:
	int nHakbun;
	const char* sName;

public:
	Student();
	Student(int nHakbun, const char* sName);
	void show();
};
//Student Ŭ���� ��� �Լ��� ����
Student::Student() {
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

Student::Student(int _nHakbun, const char* _sName) {
	nHakbun = _nHakbun;		//this->nHakbun = nHakbun;
	sName = _sName;			//this->sName = sName;
	cout << "�Ű������� �й��� ��ϵǾ����ϴ�" << endl;
}

void Student::show() {
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl;
}

int main() {
	Student student1;	//Ŭ���� ���� ����(��ü ����)
	student1.show();

	Student student2(5678, "��̸�");
	student2.show();

	return 0;
}
*/

//Student Ŭ���� ����
/*
class Student {
private:
	int nHakbun;
	const char* sName;

public:
	Student();
	//Student(int num2, const char* name2);
	//void getStudent(int num, const char* name);
	void show();
};
//Student Ŭ���� ��� �Լ��� ����
Student::Student() {
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

//Student::Student(int num2, const char* name2) {
//	nHakbun = num2;
//	sName = name2;
//}

//void Student::getStudent(int num, const char* name) {
//	nHakbun = num;
//	sName = name;
//}

void Student::show() {
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl;
}

int main() {
	Student student1;	//Ŭ���� ���� ����(��ü ����)
	//Student student1; <- �Ű������� ���� �����ڸ� �θ����� () �������
	student1.show();

	//Student stu1;
	//stu1.getStudent(1234, "�̻��");	  
	//stu1.show();

	//Student stu2(1234, "������");
	//stu2.show();
	return 0;
}
*/