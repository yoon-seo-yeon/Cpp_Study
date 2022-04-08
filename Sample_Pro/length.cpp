#include <iostream>
using namespace std;

int main()
{
	int i;
	char str[] = "I will go to Europe";
	for (i = 0; str[i] != NULL; i++) {
		cout << i + 1 << ":" << str[i] << endl;
	}
	cout << "i : " << i << endl;
}