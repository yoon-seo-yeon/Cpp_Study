//n���� �Է� ���� �� 'c'�� �� �� ������ 1~n���� ����ϴ� ���α׷�
#include <iostream>
using namespace std;

int main()
{
	int n;
	char num;
	cout << "n���� �Է��ϼ��� : ";
	cin >> n;

	for (;;) {
		cout << "���� �Է��ϼ��� : ";
		cin >> num;
		if (num == 'c') {
			for (int i = 1; i <= n; i++) {
				cout << i << endl;
			}	
			break;
		}
	}
}