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

	cout << "ptr1�� int* ���̸� ���� " << ptr1 << endl;		//�ּҰ�
	cout << "ptr2�� int* ���̸� ���� " << ptr2 << endl;		//�ּҰ�
	cout << "ptr3�� int* ���̸� ���� " << ptr3 << endl;		//�ּҰ�
	cout << "ptr4�� int ���̸� ���� " << ptr4 << endl;		//1
	cout << "ptr5�� int* ���̸� ���� " << ptr5 << endl;		//�ּҰ�
	cout << "ptr6�� int* ���̸� ���� " << ptr6 << endl;		//�ּҰ�

	return 0;
}