#include <iostream>
using namespace std;

class AAA {
public:
	AAA() {
		cout << "AAA() 호출" << endl;
	}

	AAA(int i) {
		cout << "AAA(int i) 호출" << endl;
	}

	AAA(const AAA& a) {	//<- 시험 출제 각..?
		cout << "AAA(const AAA& a) 호출" << endl;
	}

	void function(AAA a) {
		a.ShowData();
	}

	void ShowData() {
		cout << "아무거나 출력" << endl;
	}
};

int main(void) {
	AAA obj1;
	obj1.function(obj1);
	AAA obj2(10);
	AAA obj3(obj2);

	return 0;
}