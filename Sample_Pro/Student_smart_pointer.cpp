#include <iostream>
#include <memory>
using namespace std;

class Student {
private:
	int grade;
	int ban;

public:
	Student() {
		grade = 3;
		ban = 8;
		cout << "�����Ǿ����ϴ�" << endl;
	}

	~Student() {
		cout << "�Ҹ�Ǿ����ϴ�" << endl;
	}

	void setGrade(int grade) {
		this->grade = grade;
	}
	
	int getGrade() {
		return grade;
	}
};

int main() {
	unique_ptr<Student> pStudent(new Student);

	cout << "�г� : " << pStudent->getGrade() << endl;

	pStudent->setGrade(2);
	cout << "�г� : " << pStudent->getGrade() << endl;

	return 0;
}

