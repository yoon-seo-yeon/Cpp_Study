#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	const char* a = "Mirim School";
	const char* b = "Mirim Program";

	cout << strlen(a) << endl;
	cout << strlen(b) << endl;

	char c[10];
	//char c[10] = "My Home";//c에는 String type이 없기 때문에 char배열을 사용하여 string을 만든다.
	//char* pc = c;
	/*for (int i = 0; c[i] != NULL; i++) {
		cout << &c+i << endl;
	}*/

	strcpy(c, "My Home");
	cout << c << endl;

	//char* d = c;
	//for (int i = 0; d[i]!=NULL; i++) {
	//	cout << *(d + i);
	//}
	cout << endl;
	cout << strcmp(a, b) << endl;
}