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

	//sdr.FuncOneShow();	//protected�̱� ������ main�� ��ӹ��� ���ؼ� �������� public���� ��ġ�� ����

	return 0;
}