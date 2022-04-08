#include <iostream>
using namespace std;

class Student {
public:
	int nNo;
	char szName[20];

	Student() {
		nNo = 0;
		szName[0] = 0;
		cout << "매개변수 없는 생성자" << endl;
	}

	Student(int no, const char* pname) {
		nNo = no;
		strcpy(szName, pname);
		cout << "매개변수 두 개인 생성자" << endl;
	}

	void printStudent() {
		cout << nNo << ", " << szName << endl;
	}

	~Student() {
		cout << "소멸 : " << szName << endl;
	}
};

int main() {
	Student st1; //<=매개변수 없는것
	st1.nNo = 1;
	strcpy(st1.szName, "송하나");

	Student st2(2, "홍길동");

	st1.printStudent();
	st2.printStudent();

	Student* st3 = new Student(3, "연흥부");
	st3->printStudent();
	delete st3;
}