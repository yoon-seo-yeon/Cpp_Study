#include <iostream>
using namespace std;

int main()
{
	cout << "char�� ũ�� : " << sizeof(char) << "����Ʈ\n";											//1
	cout << "unsigned char�� ũ�� : " << sizeof(unsigned char) << "����Ʈ\n";				//1
	cout << "short int�� ũ�� : " << sizeof(short int) << "����Ʈ\n";									//2
	cout << "unsigned short int�� ũ�� : " << sizeof(unsigned short int) << "����Ʈ\n";		//2
	cout << "int�� ũ�� : " << sizeof(int) << "����Ʈ\n";													//4
	cout << "unsigned int�� ũ�� : " << sizeof(unsigned int) << "����Ʈ\n";						//4
	cout << "long�� ũ�� : " << sizeof(long) << "����Ʈ\n";												//4
	cout << "unsigned long�� ũ�� : " << sizeof(unsigned long) << "����Ʈ\n";					//4
	cout << "long long�� ũ�� : " << sizeof(long long) << "����Ʈ\n";								//8
	cout << "float�� ũ�� : " << sizeof(float) << "����Ʈ\n";											//4
	cout << "double�� ũ�� : " << sizeof(double) << "����Ʈ\n";										//8
	cout << "������ ���� ũ�� : " << sizeof(void*) << "����Ʈ\n"; //������ �𸥴ٴ� ��		//4
	cout << "int ������ ���� ũ�� : " << sizeof(int*) << "����Ʈ\n";									//4
}