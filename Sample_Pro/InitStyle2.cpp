#include <iostream>
using namespace std;

class AAA {
	int val;

public:
	AAA(int n) {
		val = n;
		cout << "»ý¼ºÀÚ" << endl;
	}
	void ShowData() {
		cout << val << endl;
	}
};

int main(void) {
	AAA a1(10);
	a1.ShowData();
	AAA a2 = 20;
	a2.ShowData();

	return 0; 
}