#include <iostream>
using namespace std;

//상속
class Student {
public:
	int id;
	string name;
};

class StudentGrd : public Student {
public:
	int kor, eng, mat;
};

//위임
class Grade {
public:
	int kor, eng, mat;
};

class StudentGrd1 {
public:
	int id;
	string name;
	Grade g;
};

int main() {
	StudentGrd stu1;
	StudentGrd1 stu2;

	stu1.id = 1111;
	stu1.name = "홍길동";
	stu1.kor = 30;
	stu1.eng = 50;
	stu1.mat = 100;

	stu2.id = 2222;
	stu2.name = "전우치";
	stu2.g.kor = 10;
	stu2.g.eng = 20;
	stu2.g.mat = 30;

	return 0;
}