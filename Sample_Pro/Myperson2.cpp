#include <iostream>
using namespace std;

class MyPerson {
public:
	MyPerson(int nParam) : nAge(nParam) {
		cout << "MyPerson()" << endl;
	}

	//복사 생성자 선언 및 정의
	MyPerson(const MyPerson& rhs) : nAge(rhs.nAge)
	{
		cout << "MyPerson(const MyPerson &)" << endl;
	}

	int getData(void) const {
		return nAge;
	}

	void setData(int nData) {
		nAge = nData;
	}

private:
	int nAge = 0;
};

//매개변수가 MyPerson 클래서 형식이므로 복사 생성자가 호출된다
void TestFunc(MyPerson param) { //MyPerson &param으로 바꿔주면 50으로 바뀐다
	cout << "TestFunc()" << endl;
	//피 호출자 함수에서 매개 변수 인스턴스의 값을 변경한다.
	param.setData(50);
}

int main() {
	cout << "*****Bigin*****" << endl;

	MyPerson p1(30);
	TestFunc(p1);

	//함수 호출 후 p1 값을 출력한다
	cout << "p1 : " << p1.getData() << endl;
	cout << "*****End*****" << endl;

	return 0;
}