#include <iostream>
using namespace std;

int sum(int opr1, int opr2) {
	return 	opr1 + opr2;
}

void display();

int main() {
	int print = sum(2, 3);
	cout << "sum �Լ��� ȣ���ϰ� ���� ��� ���� " << print << endl;
	display();
	
	return 0;
}

void display() {
	cout << "display �Լ��� ��ȯ���� ���� �Լ� " << endl;
	return;
}