#include <iostream>
using namespace std;

int Add(int x, int y) {
	return x + y;
}

int Subtract(int x, int y) {
	return x - y;
}

int Maltiply (int x, int y) {
	return x * y;
}

int main() {
	int x, y, op;

	cout << "X�� �Է��ϼ��� : ";
	cin >> x;

	cout << "Y�� �Է��ϼ��� : ";
	cin >> y;

	cout << endl;

	cout << "1 : Add, 2 : Subtract, 3 : Multiply" << endl;
	cout << "�����ڸ� �Է��ϼ��� : ";
	cin >> op;

	cout << endl;
	
	//���� ���ε�
	int (*func_ptr)(int, int) = nullptr;	 //func_ptr�� �Լ� ������, �Ű����� �� ���� ������ �Լ� ������, �ʱⰪ�� null

	switch (op) {
		case 1:
			//result = Add(x, y);
			func_ptr = Add;
			break;

		case 2:
			//result = Subtract(x, y);
			func_ptr = Subtract;
			break;

		case 3:
			//result = Maltiply(x, y);
			func_ptr = Maltiply;
			break;
	}

	cout << "���� : " << func_ptr(x, y);		  //�Լ� ȣ�� ����ġ�� ���� � �Լ��� ȣ��ɰ��� �����ȴ�


	/*
	//���� ���ε�
	int result;

	switch (op) {
		case 1 : 
			result = Add(x, y);
			break;

		case 2 :
			result = Subtract(x, y);
			break;

		case 3 :
			result = Maltiply(x, y);
			break;
	}

	cout << "���� : " << result;
	*/


	return 	 0;
}