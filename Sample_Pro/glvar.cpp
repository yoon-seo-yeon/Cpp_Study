#include <iostream>
using namespace std;

void jungjuk()
{
	static int a = 0;
	cout << "���� ������ a�� " << a << endl;
}

int main()
{
	jungjuk();
	jungjuk();
	jungjuk();
}