#include <iostream>
using namespace std;

int main()
{
	unsigned int A, B;
	int cnt = 0;
	int sum = 0;

	cout << "수 2개 입력(작은수 큰수) : ";
	cin >> A;
	cin >> B;

	cout << "구할 배수 : " << A << endl;
	cout << "끝 값 : " << B << endl;

	cout << "0부터 " << B << "까지에 있는 " << A << "의 배수 : ";
	for (int i = 0; i <= B; i++) {
		if (i % A == 0) {
			cout << i << " ";
			cnt++;
			sum += i;
		}
	}
	cout << endl;
	cout << "0부터 " << B << "까지에 있는 " << A << "의 배수의 개수 : " << cnt << "개" << endl;
	cout << "0부터 " << B << "까지에 있는 " << A << "의 배수의 합 : " << sum << endl;

	return 0;
}