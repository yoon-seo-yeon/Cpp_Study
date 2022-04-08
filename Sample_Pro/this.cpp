#include <iostream>
using namespace std;

class Person {
	int age;
public:
	Person*GetThis() { //p1�� �����϶�� ���� ���� ������ GetThis()�� ���ϰ��� Person*�̾�� �Ѵ�
		return this; //p1�� �����϶�� ���� ����
	}
	int GetAge() { //age�� intŸ���̱� ������ ���ϰ��� int
		return this->age; //return age�� ����
	}
};

int main() {
	Person* p1 = new Person();
	cout << p1 << endl;						//p1�� �ּ� ���
	cout << p1->GetThis() << endl;	//���� ���� �Ȱ���
	cout << p1->GetAge() << endl;		//p1�� age, age�� private�̱� ������ GetAge()�� ���� �ؾ��Ѵ�

	Person* p2 = new Person();
	cout << p2 << endl;						//p2�� �ּ� ���
	cout << p2->GetThis() << endl;	//���� ���� �Ȱ���

	return 0;
}