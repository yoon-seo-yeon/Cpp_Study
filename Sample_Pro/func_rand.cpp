#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand((unsigned)time(0));	//�� �־���� �� �ƴϸ� �ǳ� ����� �Ȱ���

	for (int i = 0; i < 100; i++) {
		cout << i + 1 << " : " << rand() % 6+5<< endl;
	}
	//����� �Ȱ���
	//�� ������ rand()�� ���� �ð��� ������ ����Ѵ�
	return 0;
}
//rand() % 10 + 1  1~10
//rand() % 6+5		5~10
//12~50�� rand()%39+12
//����Ҷ�
//12~50�� 0~38 -> 38+1�� ������ �������� ���ϰ� ù��° ���� 12�� ���Ѵ�
//15~27�� 0~12 -> rand()%13+15