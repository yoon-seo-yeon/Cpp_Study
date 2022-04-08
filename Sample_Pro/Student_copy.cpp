#include <iostream>
using namespace std;

class Student {
public:
	int nNo;
	char *szName;

	Student() {
		nNo = 0;
		szName = 0;
		cout << "�Ű����� ���� ������" << endl;
	}

	Student(int no, const char* pname) {
		nNo = no;
		szName = new char(strlen(pname) + 1);
		strcpy(szName, pname);
		cout << "�Ű����� �� ���� ������" << endl;
	}

	void printStudent() {
		if (szName) { //�ʼ� //szName != NULL�̶�� ��
			cout << nNo << ", " << szName << endl;
		}
	}

	~Student() {
		if (szName) { //�ʼ� //szName != NULL�̶�� ��
			cout << "�Ҹ� : " << szName << endl;
			delete[]szName;
		}
		else {
			cout << "�Ҹ� : "  << endl;
		}
	}
};

int main() {
	Student st1; //<=�Ű����� ���°�  
	cout << sizeof(st1) << endl;
	st1.nNo = 1;
	cout << "@@@@@@@@@@@@" << endl;
	st1.szName = new char[19];
	strcpy(st1.szName, "���ϳ�");
	cout << "++++++++++++" << endl;


	Student st2(2, "ȫ�浿");

	st1.printStudent();
	st2.printStudent();

	Student* st3 = new Student(); //����
	st3->printStudent();
	delete st3;
}

/*
�Ű����� ���� ������
5
@@@@@@@@@@@@
++++++++++++
�Ű����� �� ���� ������
1, ���ϳ�
2, ȫ�浿
�Ҹ� : 
*/