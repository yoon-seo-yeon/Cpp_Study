#include <iostream>
using namespace std;

class BoxNum {
private:
	int num1, num2;

public:
	BoxNum(int num1, int num2) : num1(num1), num2(num2) {}	 //매개 변수 두 개인 생성자
	
	void ShowNum() {
		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
	}

	BoxNum operator+(BoxNum& ref) {							//연산자 중복정의
		return BoxNum(num1 + ref. num1, num2 + ref.num2);
	}
};

int main() {
	BoxNum nb1(10, 20);
	BoxNum nb2(3, 4);

	BoxNum result = nb1 + nb2;
	//BoxNum result = nb1.operator+(nb2);

	nb1.ShowNum();
	nb2.ShowNum();

	result.ShowNum();

	return 0;
}
/*

*/