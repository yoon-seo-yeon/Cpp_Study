#include <iostream>
using namespace std;

int main()
{
	cout << "char의 크기 : " << sizeof(char) << "바이트\n";											//1
	cout << "unsigned char의 크기 : " << sizeof(unsigned char) << "바이트\n";				//1
	cout << "short int의 크기 : " << sizeof(short int) << "바이트\n";									//2
	cout << "unsigned short int의 크기 : " << sizeof(unsigned short int) << "바이트\n";		//2
	cout << "int의 크기 : " << sizeof(int) << "바이트\n";													//4
	cout << "unsigned int의 크기 : " << sizeof(unsigned int) << "바이트\n";						//4
	cout << "long의 크기 : " << sizeof(long) << "바이트\n";												//4
	cout << "unsigned long의 크기 : " << sizeof(unsigned long) << "바이트\n";					//4
	cout << "long long의 크기 : " << sizeof(long long) << "바이트\n";								//8
	cout << "float의 크기 : " << sizeof(float) << "바이트\n";											//4
	cout << "double의 크기 : " << sizeof(double) << "바이트\n";										//8
	cout << "포인터 형의 크기 : " << sizeof(void*) << "바이트\n"; //사이즈 모른다는 뜻		//4
	cout << "int 포인터 형의 크기 : " << sizeof(int*) << "바이트\n";									//4
}