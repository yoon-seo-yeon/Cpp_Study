#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
	string name;
	int age;

public :
	Person() {
		cout << "�ƺ�" << endl;
	}

	Person(const string& name, int age) {	//���� Ŭ���� �������� ����
		this->name = name;
		this->age = age;
	}

	void ShowPerson() {
		cout << name << "�� ���̴� " << age << "�Դϴ�." << endl;
	}
};

class Student : public Person {
private:
	int id;

public:
	Student(int id, const string& name, int age) : Person(name, age) { //Person(name, age)�� �Ƚ��ָ� �⺻�������� �ƺ��� cout�ϴ� ������ ����
		this->id = id;
	}

	void ShowPerson() {
		cout << name << "�� ���̴� " << age << "�̰�, ���̵�� " << id << "�Դϴ�." << endl; //�θ� Ŭ������ Ÿ���� private�̱� ������ �ȵ�, Ÿ���� private ��� protected�� �ٲٸ� ����
		//ShowPerson�� �ΰ����� �θ�Ŭ������ ������� �ʰ� �ڽ� Ŭ������ �ִ� ShowPerson �� ����Ѵ�
		//�ڽ� Ŭ������ ShowPerson�� ������ �θ� Ŭ������ ����Ѵ�
	}
};

int main() {
	Student student(1234, "ȫ�浿", 33);
	student.ShowPerson();
}