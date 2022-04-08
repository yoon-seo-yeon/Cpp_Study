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
		cout << "이름 : " << name << endl;
		cout << "번호 : " << hakbun << endl;
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
		cout << name << " Person 소멸" << endl;
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
		cout << "대학교 : " << university << endl;
	}

	void Stest() {
		cout << "Stest" << endl;
	}

	void Print() {
		cout << "Print()" << endl;
	}

	~Student() {
		cout << name << " Student 소멸" << endl;
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
		cout << "회사 : " << company << endl;
		cout << "연봉 : " << gross << endl;
	}

	~Employee() {
		cout << "Employee 소멸" << endl;
	}
};

int main() {
	Student st1("홍길동", 2018, "한국대학교");
	st1.PrintShow(); //프로그램이 끝나면서 소멸자가 호출되기 때문에 홍길순보다 더 늦게 소멸된다

	cout << "********************" << endl;

	Student* st2 = new Student("홍길순", 2021, "미림");
	st2->PrintShow();
	delete st2;

	cout << "********************" << endl;

	Person st3("배장아", 2019);
	st3.PrintShow();

	cout << "********************" << endl;

	//Person* st4 = new Student("흥부", 2020, "마이스터"); //부모 포인터를 통해서 자식껄 사용하기 위해 virtual 사용 //virtual 없을때 어떻게 실행되는지 확인
	Person* st4 = new Student("흥부", 2020, "마이스터");
	st4->PrintShow();
	st4->Ptest();
	st4->Stest(); //부모 클래스 안에 없는 거는 못쓰기 때문에 Stest는 못쓴다. 타입이 부모 타입이기 때문
	//st4->Print();
	st4->Pprint();
	delete st4; //타입이 Person 이기 때문에 부모클래스만 소멸됨 //부모 소멸자에 virtual 붙이면 부모, 자식 소멸자 다 실행됨

	cout << "********************" << endl;

	Person* st5 = new Employee("놀부", 2000, "카카오", 100000000); //다형성 //Person 클래스 PrintShow() 함수에서 virtual 빼면 회사와 연봉이 안나오고 이름과 번호 즉 부모껄 실행한다 즉 virtual을 써야만 다형성이 가능하다
	st5->PrintShow();
	delete st5;

	cout << "********************" << endl;

	return 0;
}

/*
이름 : 홍길동
번호 : 2018
대학교 : 한국대학교
*********************
이름 : 홍길순
번호 : 2021
대학교 : 미림
홍길순 Student 소멸
홍길순 Person 소멸
*********************
이름 : 배장아
번호 : 2019
*********************
이름 : 흥부
번호 : 2020
대학교 : 마이스터
PTest
흥부 Student 소멸
흥부 Person 소멸
*********************
이름 : 놀부
번호 : 2000
회사 : 카카오
연봉 : 100000000
Employee 소멸
놀부 Person 소멸
배장아 Person 소멸
홍길동 Student 소멸
홍길동 Person 소멸
*/