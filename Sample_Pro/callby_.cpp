#include <iostream>
using namespace std;

void func(int num1, int& num2) {
	num1++;
	num2++;
}

int main() {
	int a = 3, b = 4;
	func(a, b);
	cout << a << ' ' << b << endl;
}