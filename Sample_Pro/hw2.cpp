//�� �ڸ��� �� �� �ڸ��� �������� ���� �ڽŰ� ���� �� ���ϱ� - �Ͻ�Ʈ�ռ�
//4�� ���� 
#include <iostream>
using namespace std;

int main()
{
	for (int i = 100; i <= 999; i++) {
		int digit100 = pow((i / 100), 3);
		int digit10 = pow(((i % 100) / 10), 3);
		int digit1 = pow(((i % 10) / 1), 3);

		int num = digit100 + digit10 + digit1;

		if (num == i) {
			printf("%d\n", i);
		}
	}
}