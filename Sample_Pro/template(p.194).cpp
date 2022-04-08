#include <iostream>
using namespace std;

template <class T1, class T2>
void printShow(T1 a, T2 b) {
	cout << "T1 : " << a;
	cout << ", T2 : " << b << endl;
}

int main(void) {
	string s1 = "Computer", s2 = "Science";
	int num1 = 100, num2 = 200;
	double d1 = 12.34, d2 = 56.78;

	printShow(s1, s2);
	printShow(s1, num1);
	printShow(num1, num2);
	printShow(num1, d1);
	printShow(d1, d2);
	printShow(d1, s1);

	return 0;
}