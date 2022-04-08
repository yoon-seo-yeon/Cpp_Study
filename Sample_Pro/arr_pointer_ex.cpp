#include <iostream>
using namespace std;

int main() {
	int arr[] = { 0,2,4,6,8 };
	int* ptr = arr + 2;
	arr[0] = *ptr + ptr[2];
	cout << arr[0] << endl;
}