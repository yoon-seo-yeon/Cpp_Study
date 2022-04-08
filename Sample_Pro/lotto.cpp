#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int main() {
	vector<int> lotto;
	srand((unsigned)time(0));

	/*for (int i = 0; i < 6; i++) {
		lotto.push_back(rand() % 46 + 1);
	}*/

	//중복 제거
	for (int k = 0; k < 100; k++) {
		for (int i = 0; i < 6; i++) {
			lotto.push_back(rand() % 46 + 1);
			for (int j = 0; j < i; j++) {
				if (lotto[i] == lotto[j]) {
					//lotto.pop_back();
					i--;
					break;
				}
			}
		}
	}
	
	int p = 0;
	for (int i = 0; i < 100; i++) {
		p++;
		cout << lotto[i] << " ";
		if (p % 6 == 0) {
			cout << endl;
		}
	}
}