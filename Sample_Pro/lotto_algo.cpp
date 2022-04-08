#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
using namespace std;

vector<int> Lotto(int range, int sel) {
	srand((unsigned)time(0));
	vector<int> lotto2;

	for (int i = 1; i < range; i++) {
		/*lotto2.push_back(rand() % range + 1);
		for (int j = 0; j < i; j++) {
			if (lotto2[j] == lotto2[i]) {
				i--;
				break;
			}
		}*/
		lotto2.push_back(i);
	}
	random_shuffle(lotto2.begin(), lotto2.end());
	lotto2.resize(sel);

	return lotto2;
}

int main() {
	srand((unsigned)time(0));
	vector<int> lotto;

	lotto = Lotto(46, 6);

	for (int i = 0; i < 6; i++) {
		cout << lotto[i] << " ";
	}
}