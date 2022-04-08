#include <iostream>
using namespace std;

class Horse {
public : 
	Horse() {
		cout << "Horse ������" << endl;
	}

	virtual ~Horse() {
		cout << "Horse �Ҹ���" << endl;
	}

	virtual void speak() {
		cout << "������~~" << endl;
	}
};

class Bird {
public:
	Bird() {
		cout << "Bird ������" << endl;
	}

	virtual ~Bird() {
		cout << "Bird �Ҹ���" << endl;
	}

	void speak() {
		cout << "±±~~" << endl;
	}

	void fly() {
		cout << "����" << endl;
	}
};

class Pegasus : public Bird, public Horse {		   //���߻��
public :
	Pegasus() {
		cout << "Pegasus ������" << endl;
	}

	~Pegasus() {
		cout << "Pegasus �Ҹ���" << endl;
	}

	void speak() {
		cout << "�䰡���� : ������~~" << endl;
	}
};

int main() {
	/*Pegasus peg;
	peg.speak();
	peg.fly();*/

	Horse* obj1 = new Horse();
	obj1->speak();
	((Pegasus*)obj1)->fly();
	//obj1->fly();	//Ȧ�� �ȿ��� �ö��� ���� ������ �ȵ�
	delete obj1;

	cout << "-----------" << endl;

	Pegasus* obj2 = new Pegasus();
	obj2->speak();		//�䰡���� : ������
	obj2->fly();	
	delete obj2;

	cout << "-----------" << endl;

	Horse* obj3 = new Pegasus();   //�䰡������ŭ ���� Ȧ���� ���ڴ�
	obj3->speak();		//������~~ //virtual �ؼ� �ڽĲ� ȣ��
	//((Pegasus *)obj3)->speak();	  //�̷��� ����ȯ�� �ϸ� �䰡���� : ���������� �� �� �ִ�
	//obj3->fly();  //����
	((Pegasus*)obj3)->fly();	  //Ÿ���� �ٲ����Ƿ� ��� ����
	//Pegasus* obj4 = new Horse();    //�̰� ������ �� ������ Ȧ����ŭ ���� �䰡������ŭ ���ڴ� ��� ���̴�. ���� ���� ���� ���°��� �� �� ����.
	delete obj3;
}