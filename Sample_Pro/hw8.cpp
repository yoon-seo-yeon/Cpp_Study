#include <iostream>
using namespace std;

int main()
{
	unsigned int A, B;
	int cnt = 0;
	int sum = 0;

	cout << "�� 2�� �Է�(������ ū��) : ";
	cin >> A;
	cin >> B;

	cout << "���� ��� : " << A << endl;
	cout << "�� �� : " << B << endl;

	cout << "0���� " << B << "������ �ִ� " << A << "�� ��� : ";
	for (int i = 0; i <= B; i++) {
		if (i % A == 0) {
			cout << i << " ";
			cnt++;
			sum += i;
		}
	}
	cout << endl;
	cout << "0���� " << B << "������ �ִ� " << A << "�� ����� ���� : " << cnt << "��" << endl;
	cout << "0���� " << B << "������ �ִ� " << A << "�� ����� �� : " << sum << endl;

	return 0;
}