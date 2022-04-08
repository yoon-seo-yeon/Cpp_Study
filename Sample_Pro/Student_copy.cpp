#include <iostream>
using namespace std;

class Student {
public:
	int nNo;
	char *szName;

	Student() {
		nNo = 0;
		szName = 0;
		cout << "매개변수 없는 생성자" << endl;
	}

	Student(int no, const char* pname) {
		nNo = no;
		szName = new char(strlen(pname) + 1);
		strcpy(szName, pname);
		cout << "매개변수 두 개인 생성자" << endl;
	}

	void printStudent() {
		if (szName) { //필수 //szName != NULL이라는 뜻
			cout << nNo << ", " << szName << endl;
		}
	}

	~Student() {
		if (szName) { //필수 //szName != NULL이라는 뜻
			cout << "소멸 : " << szName << endl;
			delete[]szName;
		}
		else {
			cout << "소멸 : "  << endl;
		}
	}
};

int main() {
	Student st1; //<=매개변수 없는것  
	cout << sizeof(st1) << endl;
	st1.nNo = 1;
	cout << "@@@@@@@@@@@@" << endl;
	st1.szName = new char[19];
	strcpy(st1.szName, "송하나");
	cout << "++++++++++++" << endl;


	Student st2(2, "홍길동");

	st1.printStudent();
	st2.printStudent();

	Student* st3 = new Student(); //동적
	st3->printStudent();
	delete st3;
}

/*
매개변수 없는 생성자
5
@@@@@@@@@@@@
++++++++++++
매개변수 두 개인 생성자
1, 송하나
2, 홍길동
소멸 : 
*/