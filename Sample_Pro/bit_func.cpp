#include <iostream>
using namespace std;

int func1(int a, int b) {
	return a | b & a;
}

int main() {
	int a = 5, b = 4;
	cout << func1(a, b) << endl;
}