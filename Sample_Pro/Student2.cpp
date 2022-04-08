#include <iostream>
using namespace std;

class Student {
public:
	int nNo;
	char *szName;

	Student() {		//기본생성자
		nNo = 0;
		szName=NULL;
		cout << "생성" << endl;
	}

	Student(int no, const char* pName) : nNo(no){			//매개변수 두 개인 생성자
		//nNo = no;
		szName = new char[strlen(pName) + 1];
		strcpy(szName, pName);
		cout << szName << " 생성" << endl;
	}

	Student(Student& s):nNo(s.nNo) // this->nNo = s.nNo과 같다 		 //복사생성자
	{
		//this->nNo = s.nNo;
		szName = new char[strlen(s.szName) + 1];
		strcpy(szName, s.szName);

		cout << "객체 생성" << endl;
		cout << szName << "생성" << endl;
	}

	void printStudent() {
		if (szName != NULL) {
			cout << "번호 : " << nNo << " 이름 : " << szName << endl;
		}
	}

	Student &copy(Student &s) {
		//값이 아닌 메모리를 가져오기 위해서 
		//우리는 값이 아니라 메모리 전체를 가져와야 한다.
		//그래서 Student &를 해줘야 한다
		if (&s != this) {
			this->nNo = s.nNo;
			if (this->szName != NULL) {
				cout << szName << " 소멸" << endl;
				delete[] szName;
			}
			szName = new char[strlen(s.szName) + 1];
			strcpy(this->szName, s.szName);
			cout << szName <<  " 생성" << endl;
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
		cout << szName << " 소멸" << endl;
		delete[] szName;
		cout << nNo << "번이 해제되었습니다" << endl;
	}
};

int main() {
	Student a(1,"홍하나");
	Student b;

	a.printStudent();
	b.printStudent();

	cout << endl;

	//b.copy(a);

	// 밑에 세 개 실행 같음
	b = a;
	//b.operator = (a);
	//b.copy(a);

	a.printStudent();
	b.printStudent();

	cout << endl;

	strcpy(b.szName, "홍길동");

	a.printStudent();
	b.printStudent(); 

	cout << endl;

	a = a;
	a.printStudent();

	cout << endl;

	Student c(2, "장발장");
	c = a;

	a.printStudent();
	c.printStudent();

	cout << endl;

	Student d;
	Student e;

	d = e = a; //operator 타입은 Student여야하는데 void라서
	//d.operator=(e.operator=(a)); <- 위에것을 풀어쓴 것

	d.printStudent();
	e.printStudent();
	a.printStudent();

	cout << endl;

	cout << "%%%%%%%%%%%%%%" << endl;
	Student f = a;
	cout << "^^^^^^^^^^^^^^" << endl;
	f.printStudent();
	a.printStudent();


	//strcpy(a.szName, "홍길동");

	//a.printStudent(); //홍길동
	//b.printStudent(); //홍하나

	

	//cout << sizeof(a) << endl; //20+4=24
	//cout << sizeof(b) << endl; //20+4=24


	//Student a(1, "강하나");
	//Student* p = new Student(2, "홍하나");
	//delete p; //이게 없으면 "2번이 해제되었습니다"가 뜨지 않는다

	//Student stu[10]; //정적
	//stu[0].nNo = 3;
	//strcpy(stu[0].szName, "심청");

	//stu[1].nNo = 4;
	//strcpy(stu[1].szName, "배장화");

	//Student* stu1 = new  Student[10];
	//stu1[0].nNo = 5;
	//strcpy(stu1[0].szName, "연흥부");

	//stu1[1].nNo = 6;
	//strcpy(stu1[1].szName, "홍길동");

	//(stu1 + 2)->nNo = 7;
	//strcpy((stu1 + 2)->szName, "신데렐라");

	//(stu1 + 3)->nNo = 8;
	//strcpy((stu1 + 3)->szName, "백설공주");

	//delete[] stu1;
	return 0;
}