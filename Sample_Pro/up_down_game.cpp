#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand((unsigned)time(0));

	cout << "**UP & DOWN GAME**" << endl;
	cout << "���� ���� : 1~10" << endl;
	cout << "�� 3���� ��ȸ" << endl;

	int num, com_num;
	int cnt = 1;
	com_num = rand() % 10 + 1;

	while (1) {
		cout << "1~10 ������ ���� �Է��� �ּ��� : ";
		scanf("%d", &num);
		
		if (num>=1 && num<=10) {
			if (num > com_num) {
				printf("down!\n");
				cnt++;
			 }
			else if (num < com_num) {
				printf("up!\n");
				cnt++;
			}
			else if (num == com_num) {
				printf("\n�����Դϴ�! %d��°�� ���߼̽��ϴ�!", cnt);
				break;
			}
			if (cnt == 4) {
				cout << "\n3���� ��ȸ�� ��� ���̽��ϴ�!\n" << endl;
				cout << "���� : " << com_num << "�Դϴ�!";
				break;
			}
		}
	}
	return 0;
}