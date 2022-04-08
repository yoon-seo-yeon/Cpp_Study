#include <iostream>
using namespace std;

int main()
{
	double arr[6] = { 1,2,3,4 };
	cout << arr << endl;

	for (int i = 0; i < 6; i++) 
		cout << &arr[i] << " ";
	cout << endl;

	for (int i = 0; i < 6; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}