#include <iostream>
using namespace std;

int main()
{
	int a = 1, b = 1;
	int* const ptr = &a;
	*ptr = 2;
	a = 3;
	cout << *ptr << endl;
	//ptr = &b;
}