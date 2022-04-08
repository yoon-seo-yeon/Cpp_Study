//1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...처럼 1부터 20까지의 수를 계속하여 더하면서 그때마다 합의 결과를 출력하는 프로그램 작성
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