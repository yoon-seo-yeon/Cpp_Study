#include <iostream>
using namespace std;

int main()
{
	int i, j;
	int result[5];
	int num;

	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> num;

	for (i = 0; num > 0; i++) {
		result[i] = num % 2;
		num = num / 2;
	}

	for (j = i - 1; j >= 0; j--) {
		cout << result[j];
	}
}