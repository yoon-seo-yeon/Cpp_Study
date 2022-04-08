#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
	string name;
	int age;

public :
	Person() {
		cout << "아빠" << endl;
	}

	Person(const string& name, int age) {	//기초 클래스 생성자의 정의
		this->name = name;
		this->age = age;
	}

	void ShowPerson() {
		cout << name << "의 나이는 " << age << "입니다." << endl;
	}
};

class Student : public Person {
private:
	int id;

public:
	Student(int id, const string& name, int age) : Person(name, age) { //Person(name, age)을 안써주면 기본생선자인 아빠를 cout하는 곳으로 간다
		this->id = id;
	}

	void ShowPerson() {
		cout << name << "의 나이는 " << age << "이고, 아이디는 " << id << "입니다." << endl; //부모 클래스의 타입이 private이기 때문에 안됨, 타입을 private 대신 protected로 바꾸면 가능
		//ShowPerson이 두개지만 부모클래스걸 사용하지 않고 자식 클래스에 있는 ShowPerson 을 사용한다
		//자식 클래스에 ShowPerson이 없으면 부모 클래스걸 사용한다
	}
};

int main() {
	Student student(1234, "홍길동", 33);
	student.ShowPerson();
}