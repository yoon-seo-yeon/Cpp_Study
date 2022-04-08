#include <iostream>
using namespace std;

int main()
{
	int num = 1;
	int* ptr1 = &num;
	int *ptr2 = &num;
	int* ptr3, ptr4;
	int *ptr5, *ptr6;
	ptr3 = &num, ptr4 = 1;
	ptr5 = &num, ptr6 = &num;

	cout << "ptr1은 int* 형이며 값은 " << ptr1 << endl;		//주소값
	cout << "ptr2은 int* 형이며 값은 " << ptr2 << endl;		//주소값
	cout << "ptr3은 int* 형이며 값은 " << ptr3 << endl;		//주소값
	cout << "ptr4은 int 형이며 값은 " << ptr4 << endl;		//1
	cout << "ptr5은 int* 형이며 값은 " << ptr5 << endl;		//주소값
	cout << "ptr6은 int* 형이며 값은 " << ptr6 << endl;		//주소값

	return 0;
}