#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Person {
public:
	string name;
	int hakbun;

	Person(string na, int hak) {
		name = na;
		hakbun = hak;
	}

	virtual void PrintShow() {
		cout << "�̸� : " << name << endl;
		cout << "��ȣ : " << hakbun << endl;
	}

	void Ptest() {
		cout << "Ptest" << endl;
	}

	void Stest() {
		cout << "Stest" << endl;
	}

	void Pprint() {
		cout << "Pprint()" << endl;
	}

	virtual ~Person() {
		cout << name << " Person �Ҹ�" << endl;
	}
};

class Student : public Person {
public:
	string university;

	Student(string n, int h, string uni) : Person(n, h) {
		university = uni;
	}

	void PrintShow() {
		Person::PrintShow();
		cout << "���б� : " << university << endl;
	}

	void Stest() {
		cout << "Stest" << endl;
	}

	void Print() {
		cout << "Print()" << endl;
	}

	~Student() {
		cout << name << " Student �Ҹ�" << endl;
	}
};

class Employee : public Person {
private:
	string company;
	int gross;

public:
	Employee(string n, int h, string company, int gross) : Person(n, h) {
		this->company = company;
		this->gross = gross;
	}

	void PrintShow() {
		Person::PrintShow();
		cout << "ȸ�� : " << company << endl;
		cout << "���� : " << gross << endl;
	}

	~Employee() {
		cout << "Employee �Ҹ�" << endl;
	}
};

int main() {
	Student st1("ȫ�浿", 2018, "�ѱ����б�");
	st1.PrintShow(); //���α׷��� �����鼭 �Ҹ��ڰ� ȣ��Ǳ� ������ ȫ������� �� �ʰ� �Ҹ�ȴ�

	cout << "********************" << endl;

	Student* st2 = new Student("ȫ���", 2021, "�̸�");
	st2->PrintShow();
	delete st2;

	cout << "********************" << endl;

	Person st3("�����", 2019);
	st3.PrintShow();

	cout << "********************" << endl;

	//Person* st4 = new Student("���", 2020, "���̽���"); //�θ� �����͸� ���ؼ� �ڽĲ� ����ϱ� ���� virtual ��� //virtual ������ ��� ����Ǵ��� Ȯ��
	Person* st4 = new Student("���", 2020, "���̽���");
	st4->PrintShow();
	st4->Ptest();
	st4->Stest(); //�θ� Ŭ���� �ȿ� ���� �Ŵ� ������ ������ Stest�� ������. Ÿ���� �θ� Ÿ���̱� ����
	//st4->Print();
	st4->Pprint();
	delete st4; //Ÿ���� Person �̱� ������ �θ�Ŭ������ �Ҹ�� //�θ� �Ҹ��ڿ� virtual ���̸� �θ�, �ڽ� �Ҹ��� �� �����

	cout << "********************" << endl;

	Person* st5 = new Employee("���", 2000, "īī��", 100000000); //������ //Person Ŭ���� PrintShow() �Լ����� virtual ���� ȸ��� ������ �ȳ����� �̸��� ��ȣ �� �θ� �����Ѵ� �� virtual�� ��߸� �������� �����ϴ�
	st5->PrintShow();
	delete st5;

	cout << "********************" << endl;

	return 0;
}

/*
�̸� : ȫ�浿
��ȣ : 2018
���б� : �ѱ����б�
*********************
�̸� : ȫ���
��ȣ : 2021
���б� : �̸�
ȫ��� Student �Ҹ�
ȫ��� Person �Ҹ�
*********************
�̸� : �����
��ȣ : 2019
*********************
�̸� : ���
��ȣ : 2020
���б� : ���̽���
PTest
��� Student �Ҹ�
��� Person �Ҹ�
*********************
�̸� : ���
��ȣ : 2000
ȸ�� : īī��
���� : 100000000
Employee �Ҹ�
��� Person �Ҹ�
����� Person �Ҹ�
ȫ�浿 Student �Ҹ�
ȫ�浿 Person �Ҹ�
*/