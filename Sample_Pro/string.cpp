#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	const char* a = "Mirim School";
	const char* b = "Mirim Program";

	cout << strlen(a) << endl;
	cout << strlen(b) << endl;

	char c[10];
	//char c[10] = "My Home";//c���� String type�� ���� ������ char�迭�� ����Ͽ� string�� �����.
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