#include <iostream>
using namespace std;

int main()
{
	int* ptr;
	int arr[4] = { 1,2,3,4 };
	ptr = arr;

	for (int i = 0; i < 4; i++)
		cout << arr[i] << " ";		//1234
	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << *(ptr + i) << " ";	//1234
	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << *(arr + i) << " ";	//1234
	cout << endl;

	for (int i = 0; i < 4; i++) {
		cout << ptr[i] << " ";		//1234
	}
	cout << ptr << " " << endl;	 //�ּҰ�
	ptr++;
	cout << *(ptr) << endl; //2
	cout << ptr << " " << endl;	//�ּҰ�
	cout << arr << " " << endl;	 //�ּҰ���
	return 0;
}