#include <iostream>
using namespace std;

class SuperClass {
private :
	char* str;

public :
	SuperClass(const char* str) {
		this->str = new char[strlen(str) + 1];
		strcpy(this->str, str);
	}

	virtual ~SuperClass() {
		cout << "~SuperClass()" << endl;
		cout << "str : " << str << endl;
		delete[] str;
	}
};

class SubClass : public SuperClass {
private:
	char* str;

public :
	SubClass(const char* str1, const char* str2) : SuperClass(str1) {
		this->str = new char[strlen(str2) + 1];
		strcpy(this->str, str2);
	}

	~SubClass() {
		cout << "~SubClass()" << endl;
		cout << "str : " << str << endl;
		delete str;
	}
};

int main() {
	SuperClass* ptr = new SubClass("SuperClass", "SubClass");
	delete ptr;

	return 0;
}