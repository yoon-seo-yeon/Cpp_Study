#include <iostream>
using namespace std;

int main()
{
	const char* pMessage = "welcome to korea";
	cout << &pMessage << endl;				//welcome to korea
	cout << *pMessage << endl;				//w
	cout << *(pMessage + 1) << endl;		//e
	cout << *(pMessage + 2) << endl;		//l
	cout << *(pMessage + 3) << endl;		//c
	cout << (&pMessage + 9) << endl;

	cout << "-------------" << endl;

	for (int i = 0;  *(pMessage + i) != NULL; i++) {
		cout << *(pMessage + i) << endl;
	}
}