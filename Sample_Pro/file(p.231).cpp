#include <iostream>
using namespace std;

void main() {
	int num1 = 2018;
	double num2 = -100.0;
	double num3 = 123.456;

	cout << "�Ҽ��� �������� ���� " << endl;
	cout.setf(ios::showpoint);
	cout << "�Ҽ��� �������� �ʴ� num1 = " << num1 << endl;
	cout << "�Ҽ��� �������� �ʴ� num2 = " << num2 << endl;
	cout << "�Ҽ��� �������� �ʴ� num2 = " << num3 << endl;

	cout << endl;

	cout << "��ȣ ǥ��" << endl;
	cout.setf(ios::showpos);
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num1 << endl;
	cout << "num3 = " << num1 << endl;

	cout << endl;
	cout.unsetf(ios::showpos); //��ȣ ǥ�� ���ֱ�

	cout << "���ξ� ǥ��" << endl;
	cout.setf(ios::showbase);
	cout << "���ξ� ǥ�� 10���� num = " << num1 << endl;
	cout << "���ξ� ǥ�� 16���� num = " << hex << num1 << endl;
	cout << "���ξ� ǥ�� 8���� num = " << oct << num1 << endl;
	
	cout << endl;

	cout << "16���� �빮�� ǥ�� " << endl;
	cout.setf(ios::uppercase);
	cout << "���ξ� ǥ�� 10���� num = " << dec << num1 << endl;
	cout << "���ξ� ǥ�� 16���� num = " << hex << num1 << endl;
	cout << "���ξ� ǥ�� 8���� num = " << oct << num1 << endl;
}