//'z'�� �Է��ϸ� 1~15���� ���
#include <iostream>
using namespace std;

int main()
{
	char num;

	for (;;) {
		cout << "�Է��ϼ��� : ";
		cin >> num;
		if (num == 'z') {
			for (int i = 1; i <= 15; i++) {
				cout << i << endl;
			}
			break;
		}
	}
}