#include <iostream>
using namespace std;

void main() {
	char addr[80];
	cout << "���ڿ� �Է� : ";
	while (cin.getline(addr, 80)) {
		if (strcmp(addr, "exit") == 0) break;
		cout << "���ڿ� ��� : " << addr << endl << endl;
		cout << "���ڿ� �Է� : ";
	} 
}