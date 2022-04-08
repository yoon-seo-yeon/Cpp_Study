#include <iostream>
using namespace std;

//friend 개념
//유용하지 않다
//정보 은닉에 위배되는 개녑
//연사자 오버로딩에 유용하게 사용

class AAA {
private:
	int data;
};

class BBB {
public:
	void SetData(AAA& aaa, int val) {
		aaa.data = val;	//class AAA의 private 영역접근
	}
};

int main() {
	AAA aaa;
	BBB bbb;

	bbb.SetData(aaa, 10);

	return 0;
}