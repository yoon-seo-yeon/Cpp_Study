#include <iostream>
using namespace std;

//template <typename TT>	//T �ڸ��� T�� �ƴϿ��� ���� �ȳ���


template <class TT>
void swapTest(TT& x, TT& y);

template <class T>
void swapTest(T* x, T* y, int n);	//�迭�� int�� double�̵� string�̵� ������� �� int �̱� ������ �׳� ������� int�� �ش�

template <class S>
void printData(S *x);
/*
void swapTest(int &x, int &y) {
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

void swapTest(double& x1, double& y1) {
	int tmp;
	tmp = x1;
	x1 = y1;
	y1 = tmp;
}
*/

int main() {
	int x = 10, y = 20;
	double x1 = 10.23, y1 = 20.56;

	cout << "x = " << x << ", y = " << y << endl;
	swapTest<int>(x, y); //swapTest(x, y); -> <int>�� ���� �ʾƵ� ����� ����
	cout << "x = " << x << ", y = " << y << endl;

	cout << endl;

	cout << "x1 = " << x1 << ", y1 = " << y1 << endl;
	swapTest<double>(x1, y1); ////swapTest(x, y); -> <double>�� ���� �ʾƵ� ����� ����
	cout << "x1 = " << x1 << ", y1 = " << y1 << endl;

	cout << endl;

	double Array[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double Array2[5] = {6.6, 7.7, 8.8, 9.9, 10.1};

	cout << "swapTest() �ϱ� ��" << endl;
	for (int i = 0; i < 5; i++) {
		cout << Array[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 5; i++) {
		cout << Array2[i] << " ";
	}

	swapTest<double>(Array, Array2, 5);
	//swapTest(Array, Array2, 5); //�������� ����

	cout << endl << endl << "swapTest() �� ��" << endl;
	for (int i = 0; i < 5; i++) {
		cout << Array[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 5; i++) {
		cout << Array2[i] << " ";
	}

	cout << endl << endl;

	cout << "Array �Լ� ���" << endl;
	printData(Array);

	cout << endl << endl;

	cout << "Array2 �Լ� ���" << endl;
	printData(Array2);
}

template <class TT>
void swapTest(TT& x, TT& y) {
	TT tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <class T>
void swapTest(T* x, T* y, int n) {
	T tmp;

	for (int i = 0; i < n; i++) {
		tmp = x[i];
		x[i] = y[i];
		y[i] = tmp;
	}
}

template <class S>
void printData(S& x) {
	for (int i = 0; i < sizeof(&x) / sizeof(x[0]); i++) {
		cout << x[i] << "  ";
	}
}