#include <iostream>
using namespace std;

int main()
{
	char ch;
	int cnt = 0;
	
	for (;;) {
		cout << "�Է��ϼ��� : ";
		cin >> ch;
		if ((int)ch == 97) {
			cnt++;
			cout << "a : " << cnt << endl;
		}
		else {
			break;
		}
	}
}