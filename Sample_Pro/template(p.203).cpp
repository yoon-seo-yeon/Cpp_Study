#include <iostream>
using namespace std;

template <typename T>
class MyData {
	T ndata;

public :
	MyData(T t) : ndata(t) {}
	void print() {
		cout << ndata << ", ";
	}
};

template<>
class MyData<char*> {
	char* ndata;
public:
	MyData(char* t) : ndata(t) {}

	void print() {
		cout << "string value: " << ndata << endl;
	}
};


void main() {
	int i = 3456;
	MyData<int>mydata1(i);
	char str[20] = "IT Meister";
	char* str1 = str;
	MyData<char*> mydata2(str1);
	mydata1.print();
	mydata2.print();
}