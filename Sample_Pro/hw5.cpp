#include <iostream>
using namespace std;

int main() {
	int ten_num;
	int result[8];
	int cnt = 0;

	cout << "10진수 입력 : ";
	cin >> ten_num;

	for (int i = 0; ten_num > 0; i++) {
		result[i] = ten_num % 2;
		ten_num = ten_num / 2;
		cnt++;
	}

	for (int j = cnt-1 ; j >= 0; j--) {
		cout << result[j];
	}
}