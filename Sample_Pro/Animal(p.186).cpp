#include <iostream>
using namespace std;

class Animal {
public:
	virtual ~Animal() {

	}

	/*virtual void SoundSpeak() = 0;
	virtual void EatDiets(const char* eat) const = 0;*/

	virtual void SoundSpeak() {
	}
	virtual void EatDiets(const char* eat) const {

	}
};

class Dog : public Animal {
	int a;
public :
	virtual void SoundSpeak() {
		cout << "개소리 멍멍" << " ";
	}

	virtual void EatDiets(const char* eat) const {
		//a = 5;
		cout << eat << endl;
	}
};

class Cat : public Animal {
public :
	/*virtual void SoundSpeak() {
		cout << "고양이 야옹" << " ";
	}*/

	virtual void EatDiets(const char* eat) const  {
		cout << eat << endl;
	}
};

int main() {
	Dog dog;
	dog.SoundSpeak();
	dog.EatDiets("개 사료");

	Cat cat;
	cat.SoundSpeak();
	cat.EatDiets("고양이 사료");

	Animal ani;	//에러 //Animal이 순수 가상 클래스이기 때문에 오류 //=0 없애고 중괄호로 하면 오류 안남 // 순수 가상 클래스가 하나만 있어도 오류 
	//순수 가상 함수를 사용하지 않으면 굳이 부모 클래스의 함수를 재정의 하지 않아도 문제가 생기지 않는 문제점이 있다. 이를 알아보기 위해 Cat클래스의 SoundSpeak() 주석처리
	

	return 0;
}