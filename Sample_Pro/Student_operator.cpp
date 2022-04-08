#include <iostream>
using namespace std;

class Student {
private:
	char* name;
	int age;

public:
	Student() {
		name = NULL;
		age = 0;
	}

	Student(const char* name, int age) : age(age) {
		this->name = new char[20];
		strcpy_s(this->name, 20, name);
		cout << "이름생성" << endl;
	}

	void ShowInfo() {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	Student& operator = (Student& ref) {
		delete[] name;
		name = new char[20];
		strcpy_s(name, 20, ref.name);
		age = ref.age;
		cout << "이름생성" << endl;

		return *this; //대입을 연달아서 주기 때문에
	}

	/*
	void operator = (Student& ref) { //위에꺼가 아닌 이걸로 하면 st3 = st2 = st1; 이거 할때 오류남
		delete[] name;
		name = new char[20];
		strcpy_s(name, 20, ref.name);
		age = ref.age;

		//return *this; //대입을 연달아서 주기 때문에
	}
	*/

	~Student() {
		if (name != NULL) {
			delete[] name;
			cout << "~Student 소멸자 호출!" << endl;
			cout << "이름소멸" << endl;
		}
	}
};

int main() {
	Student st1("미림인", 27);
	Student st2("마이스터인", 10);

	st2 = st1;	//대입 중복 연산자 함수 호출
	
	st1.ShowInfo();
	st2.ShowInfo();

	Student st3;
	st3 = st2 = st1;

	st3.ShowInfo();

	Student st4;
	st4 = st1;

	st4.ShowInfo();

	return 0;
}