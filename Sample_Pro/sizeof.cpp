#include <iostream>
using namespace std;

int main()
{
	cout << "char 자료형의 크기는 " << sizeof(char) << endl;			//1
	cout << "short 자료형의 크기는 " << sizeof(short) << endl;		//2
	cout << "int 자료형의 크기는 " << sizeof(int) << endl;				//4
	cout << "float 자료형의 크기는 " << sizeof(float) << endl;			//4
	cout << "double 자료형의 크기는 " << sizeof(double) << endl;	//8		
	
	return 0;
}