#include <iostream>
using namespace std;

class Car {
	int ton, price;

public:
	static int count;	//정적 변수 선언
	Car() {
		ton = 0; price = 1000; count++;
	}

	Car(int ton, int price) {
		this->ton = ton; this->price = price; count++;
	}

	int getTon() {
		return ton;
	}

	int getPrice() {
		return price;
	}

	~Car() {
		count--;
		cout << "소멸 : " << count << endl;
	}
};

int Car::count = 0; //밖에서 초기화할 때는 static이 안된다 즉 static int Car::count = 0가 안된다

int main() {
	//cout << "생성된 자동차의 수 : " << car1.count << endl; //여기서는 car1.count를 쓸 수 없고 Car::count만 쓸 수 있다

	Car car1;
	cout << "생성된 자동차의 수 : " << car1.count << endl; //car1객체가 선언되었기 때문에 Car::count도 되고 car1.count도 된다
	cout << "생성된 자동차의 ton : " << car1.getTon() << " 생성된 자동차의 가격 : " << car1.getPrice() << endl;

	Car car2(10, 3000);
	cout << "생성된 자동차의 수 : " << car2.count << endl; //Car::count도 되고 car1.count도 되고 car2.count도 된다
	cout << "생성된 자동차의 ton : " << car2.getTon() << " 생성된 자동차의 가격 : " << car2.getPrice() << endl;
	
	return 0;
}