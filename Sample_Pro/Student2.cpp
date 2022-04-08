#include <iostream>
using namespace std;

class Student {
public:
	int nNo;
	char *szName;

	Student() {		//�⺻������
		nNo = 0;
		szName=NULL;
		cout << "����" << endl;
	}

	Student(int no, const char* pName) : nNo(no){			//�Ű����� �� ���� ������
		//nNo = no;
		szName = new char[strlen(pName) + 1];
		strcpy(szName, pName);
		cout << szName << " ����" << endl;
	}

	Student(Student& s):nNo(s.nNo) // this->nNo = s.nNo�� ���� 		 //���������
	{
		//this->nNo = s.nNo;
		szName = new char[strlen(s.szName) + 1];
		strcpy(szName, s.szName);

		cout << "��ü ����" << endl;
		cout << szName << "����" << endl;
	}

	void printStudent() {
		if (szName != NULL) {
			cout << "��ȣ : " << nNo << " �̸� : " << szName << endl;
		}
	}

	Student &copy(Student &s) {
		//���� �ƴ� �޸𸮸� �������� ���ؼ� 
		//�츮�� ���� �ƴ϶� �޸� ��ü�� �����;� �Ѵ�.
		//�׷��� Student &�� ����� �Ѵ�
		if (&s != this) {
			this->nNo = s.nNo;
			if (this->szName != NULL) {
				cout << szName << " �Ҹ�" << endl;
				delete[] szName;
			}
			szName = new char[strlen(s.szName) + 1];
			strcpy(this->szName, s.szName);
			cout << szName <<  " ����" << endl;
		}

		return *this;
	}

	Student &operator=(Student& s) {
		//if (&s != this) {
		//	this->nNo = s.nNo;
		//	szName = new char[strlen(s.szName) + 1];
		//	strcpy(this->szName, s.szName);
		//}

		return copy(s);
	}

	~Student() {
		cout << szName << " �Ҹ�" << endl;
		delete[] szName;
		cout << nNo << "���� �����Ǿ����ϴ�" << endl;
	}
};

int main() {
	Student a(1,"ȫ�ϳ�");
	Student b;

	a.printStudent();
	b.printStudent();

	cout << endl;

	//b.copy(a);

	// �ؿ� �� �� ���� ����
	b = a;
	//b.operator = (a);
	//b.copy(a);

	a.printStudent();
	b.printStudent();

	cout << endl;

	strcpy(b.szName, "ȫ�浿");

	a.printStudent();
	b.printStudent(); 

	cout << endl;

	a = a;
	a.printStudent();

	cout << endl;

	Student c(2, "�����");
	c = a;

	a.printStudent();
	c.printStudent();

	cout << endl;

	Student d;
	Student e;

	d = e = a; //operator Ÿ���� Student�����ϴµ� void��
	//d.operator=(e.operator=(a)); <- �������� Ǯ� ��

	d.printStudent();
	e.printStudent();
	a.printStudent();

	cout << endl;

	cout << "%%%%%%%%%%%%%%" << endl;
	Student f = a;
	cout << "^^^^^^^^^^^^^^" << endl;
	f.printStudent();
	a.printStudent();


	//strcpy(a.szName, "ȫ�浿");

	//a.printStudent(); //ȫ�浿
	//b.printStudent(); //ȫ�ϳ�

	

	//cout << sizeof(a) << endl; //20+4=24
	//cout << sizeof(b) << endl; //20+4=24


	//Student a(1, "���ϳ�");
	//Student* p = new Student(2, "ȫ�ϳ�");
	//delete p; //�̰� ������ "2���� �����Ǿ����ϴ�"�� ���� �ʴ´�

	//Student stu[10]; //����
	//stu[0].nNo = 3;
	//strcpy(stu[0].szName, "��û");

	//stu[1].nNo = 4;
	//strcpy(stu[1].szName, "����ȭ");

	//Student* stu1 = new  Student[10];
	//stu1[0].nNo = 5;
	//strcpy(stu1[0].szName, "�����");

	//stu1[1].nNo = 6;
	//strcpy(stu1[1].szName, "ȫ�浿");

	//(stu1 + 2)->nNo = 7;
	//strcpy((stu1 + 2)->szName, "�ŵ�����");

	//(stu1 + 3)->nNo = 8;
	//strcpy((stu1 + 3)->szName, "�鼳����");

	//delete[] stu1;
	return 0;
}