//1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...ó�� 1���� 20������ ���� ����Ͽ� ���ϸ鼭 �׶����� ���� ����� ����ϴ� ���α׷� �ۼ�
#include <iostream>
using namespace std;

int main()
{
	int sum;
	int j = 1;

	for (int i = 2; i <= 20; i++) {
		sum = j + i;
		cout << j << " + " << i << " = " << sum << endl;
		j = sum;
	}
}