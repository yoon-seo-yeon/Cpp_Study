#include <iostream>
using namespace std;

class Student {
public:
	int nNo;
	char szName[20];

	Student() {
		nNo = 0;
		szName[0] = 0;
		cout << "�Ű����� ���� ������" << endl;
	}

	Student(int no, const char* pname) {
		nNo = no;
		strcpy(szName, pname);
		cout << "�Ű����� �� ���� ������" << endl;
	}

	void printStudent() {
		cout << nNo << ", " << szName << endl;
	}

	~Student() {
		cout << "�Ҹ� : " << szName << endl;
	}
};

int main() {
	Student st1; //<=�Ű����� ���°�
	st1.nNo = 1;
	strcpy(st1.szName, "���ϳ�");

	Student st2(2, "ȫ�浿");

	st1.printStudent();
	st2.printStudent();

	Student* st3 = new Student(3, "�����");
	st3->printStudent();
	delete st3;
}