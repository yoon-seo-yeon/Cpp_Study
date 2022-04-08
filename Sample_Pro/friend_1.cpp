#include <iostream>
using namespace std;

class Counter {
private:
	int val;

public:
	Counter() {
		val = 0;
		cout << "»ý¼ºÀÚ" << endl;
	}

	void Print() {
		cout << val << endl;
	}

	friend void SetX(Counter& c, int val) {
		c.val = val;
	}
};

//void SetX(Counter& c, int val) {
//	c.val = val;
//}

int main() {
	Counter cnt;
	cnt.Print();

	SetX(cnt, 2002);
	cnt.Print();

	return 0;
}