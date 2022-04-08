#include <iostream>
using namespace std;

void jungjuk()
{
	int a = 0;
	cout << "정적 변수는 a는 " << a << endl;
	a++;
}

int main()
{
	jungjuk();//0
	jungjuk();//0
	jungjuk();//0
}