//126예제를 전역변수로 바꿔서 하는 프로그램
#include <iostream>
using namespace std;

class Car {
	int ton, price;

public:
	static int count; //정적 변수 선언 //굳이 전역변수가 아닌 static를 쓰는 이유 : 정보 은닉이 제대로 된다 사실 private보다는 protected를 더 많이 쓴다
	Car() {
		ton = 0; price = 1000; count++;
	}

	Car(int ton, int price) {
		this->ton = ton; this->price = price; count++;
	}

	static int getCount() {
		return count;
	}
};

int Car::count = 0; 

int main() {
	Car car1;

	cout << "생성된 자동차의 수 : " << car1.getCount() << endl;

	Car car2(10, 3000);
	cout << "생성된 자동차의 수 : " << car2.getCount() << endl;

	return 0;
}

/*
//126예제를 전역변수로 바꿔서 하는 프로그램
#include <iostream>
using namespace std;

class Car {
	int ton, price;

public:
	//static int count; //정적 변수 선언 //굳이 전역변수가 아닌 static를 쓰는 이유 : 정보 은닉이 제대로 된다 사실 private보다는 protected를 더 많이 쓴다
	Car() {
		ton = 0; price = 1000; 
	}

	Car(int ton, int price) {
		this->ton = ton; this->price = price; 
	}
};

static int cnt = 0;

int main() {
	Car car1;

	cout << "생성된 자동차의 수 : " << ++cnt << endl;

	Car car2(10, 3000);
	cout << "생성된 자동차의 수 : " << ++cnt << endl;

	return 0;
}
*/