#include <iostream>
using namespace std;

class JumsuOne {
public:
	void FuncOneShow() {
		cout << "JumsuOne" << endl;
	}
};

class RankTwo {
public :
	void FuncTowShow() {
		cout << "RankTwo" << endl;
	}
};

class SungjukDerived : protected JumsuOne, protected RankTwo {
public :
	void SungjukFuncShow() {
		FuncOneShow();
		FuncTowShow();
	}
};

int main(void) {
	SungjukDerived sdr;
	sdr.SungjukFuncShow();

	//sdr.FuncOneShow();	//protected이기 때문에 main은 상속받지 못해서 오류난다 public으로 고치면 가능

	return 0;
}