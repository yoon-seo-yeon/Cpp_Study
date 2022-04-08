//세 자리수 중 각 자리의 세제곱의 합이 자신과 같은 수 구하기 - 암스트롱수
//4개 나옴 
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