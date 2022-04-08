#include <iostream>
using namespace std;

int main()
{
	int val1 = 3;
	double val2 = 3.14;
	cout << val1 + val2 << endl;//6.14
	cout << val1 + (int)val2 << endl;//6
	return 0;
}