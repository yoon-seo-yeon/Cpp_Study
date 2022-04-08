//'z'를 입력하면 1~15까지 출력
#include <iostream>
using namespace std;

int main()
{
	char num;

	for (;;) {
		cout << "입력하세요 : ";
		cin >> num;
		if (num == 'z') {
			for (int i = 1; i <= 15; i++) {
				cout << i << endl;
			}
			break;
		}
	}
}