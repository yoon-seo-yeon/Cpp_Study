#include <iostream>
using namespace std;

int main() {
	int sum = 0;

	for (int i = 1; i <= 50; i++) {
		sum += i;
		if (i % 5 == 0) {
			cout << "1~" << i << " --> " << sum << endl;
		}
	}
}