#include <iostream>
using namespace std;


class Student {
private:
	int nHakbun;
	const char* sName;

public:
	Student();
	Student(int nHakbun, const char* sName);
	void show();
};
//Student 클래스 멤버 함수의 정의
Student::Student() {
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}

Student::Student(int _nHakbun, const char* _sName) {
	nHakbun = _nHakbun;
	sName = _sName;
	cout << "매개변수로 학번이 등록되었습니다" << endl;
}

void Student::show() {
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl;
}

int main() {
	//Student student1;	//클래스 변수 선언(객체 선언)
	//student1.show();
	//Student student2(5678, "김미림");
	//student2.show();
	Student stu[3] = {
		Student(), Student(1111, "강아지"), Student(2222, "망아지")
	};
	for (int i = 0; i < 3; i++) {
		stu[i].show();
	}
	return 0;
}


/*
class Student {
private:
	int nHakbun;
	const char* sName;

public:
	Student();
	Student(int nHakbun, const char* sName);
	void show();
};
//Student 클래스 멤버 함수의 정의
Student::Student() {
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}

Student::Student(int _nHakbun, const char* _sName) {
	nHakbun = _nHakbun;		//this->nHakbun = nHakbun;
	sName = _sName;			//this->sName = sName;
	cout << "매개변수로 학번이 등록되었습니다" << endl;
}

void Student::show() {
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl;
}

int main() {
	Student student1;	//클래스 변수 선언(객체 선언)
	student1.show();

	Student student2(5678, "김미림");
	student2.show();

	return 0;
}
*/

//Student 클래스 정의
/*
class Student {
private:
	int nHakbun;
	const char* sName;

public:
	Student();
	//Student(int num2, const char* name2);
	//void getStudent(int num, const char* name);
	void show();
};
//Student 클래스 멤버 함수의 정의
Student::Student() {
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}

//Student::Student(int num2, const char* name2) {
//	nHakbun = num2;
//	sName = name2;
//}

//void Student::getStudent(int num, const char* name) {
//	nHakbun = num;
//	sName = name;
//}

void Student::show() {
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl;
}

int main() {
	Student student1;	//클래스 변수 선언(객체 선언)
	//Student student1; <- 매개변수가 없는 생성자를 부를때는 () 없어야함
	student1.show();

	//Student stu1;
	//stu1.getStudent(1234, "이사랑");	  
	//stu1.show();

	//Student stu2(1234, "윤서연");
	//stu2.show();
	return 0;
}
*/