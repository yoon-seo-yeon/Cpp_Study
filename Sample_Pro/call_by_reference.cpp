#include <iostream>
using namespace std;

void swapV(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
void swapP(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void swapR(int &a, int &b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	/*int &ra1 = a;
	int& ra2 = b;*/
	
	/*
	swapV(a, b);
	cout << a << " " << b << endl;	//10 20

	swapP(&a, &b);
	cout << a << " " << b << endl;	//20 10	
	 */
	swapR(a, b);
	cout << a << " " << b << endl;	//20 10
}