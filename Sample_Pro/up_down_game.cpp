#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand((unsigned)time(0));

	cout << "**UP & DOWN GAME**" << endl;
	cout << "숫자 범위 : 1~10" << endl;
	cout << "총 3번의 기회" << endl;

	int num, com_num;
	int cnt = 1;
	com_num = rand() % 10 + 1;

	while (1) {
		cout << "1~10 사이의 수를 입력해 주세요 : ";
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
				printf("\n정답입니다! %d번째에 맞추셨습니다!", cnt);
				break;
			}
			if (cnt == 4) {
				cout << "\n3번의 기회를 모두 쓰셨습니다!\n" << endl;
				cout << "답은 : " << com_num << "입니다!";
				break;
			}
		}
	}
	return 0;
}