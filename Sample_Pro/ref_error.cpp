#include <iostream>
using namespace std;

int& function(void) {
	int val = 10;
	return val;
}

int main(void) {
	int& ref = function();
	cout << ref << endl;

	return 0;
}