//n값을 입력 받은 후 'c'를 한 번 누르면 1~n까지 출력하는 프로그램
#include <iostream>
using namespace std;

int main()
{
	int n;
	char num;
	cout << "n값을 입력하세요 : ";
	cin >> n;

	for (;;) {
		cout << "값을 입력하세요 : ";
		cin >> num;
		if (num == 'c') {
			for (int i = 1; i <= n; i++) {
				cout << i << endl;
			}	
			break;
		}
	}
}