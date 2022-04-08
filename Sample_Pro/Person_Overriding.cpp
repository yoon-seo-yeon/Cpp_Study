#include <iostream>
using namespace std;

class Person {
public:
	void PrintMethod() {
		cout << "Person's Method" << endl;
	}
};

class Student : public Person {
public :
	void PrintMethod() {
		Person::PrintMethod();
		cout << "Child Method" << endl;
	}
};

int main() {
	Student student;
	student.PrintMethod();

	return 0;
}

/*
Person's Method
Child Method
*/