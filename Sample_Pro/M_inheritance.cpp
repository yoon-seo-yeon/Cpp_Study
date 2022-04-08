#include <iostream>
using namespace std;

class Horse {
public : 
	Horse() {
		cout << "Horse 생성자" << endl;
	}

	virtual ~Horse() {
		cout << "Horse 소멸자" << endl;
	}

	virtual void speak() {
		cout << "히히힝~~" << endl;
	}
};

class Bird {
public:
	Bird() {
		cout << "Bird 생성자" << endl;
	}

	virtual ~Bird() {
		cout << "Bird 소멸자" << endl;
	}

	void speak() {
		cout << "짹짹~~" << endl;
	}

	void fly() {
		cout << "날다" << endl;
	}
};

class Pegasus : public Bird, public Horse {		   //다중상속
public :
	Pegasus() {
		cout << "Pegasus 생성자" << endl;
	}

	~Pegasus() {
		cout << "Pegasus 소멸자" << endl;
	}

	void speak() {
		cout << "페가수스 : 히히힝~~" << endl;
	}
};

int main() {
	/*Pegasus peg;
	peg.speak();
	peg.fly();*/

	Horse* obj1 = new Horse();
	obj1->speak();
	((Pegasus*)obj1)->fly();
	//obj1->fly();	//홀스 안에는 플라이 없기 때문에 안됨
	delete obj1;

	cout << "-----------" << endl;

	Pegasus* obj2 = new Pegasus();
	obj2->speak();		//페가수스 : 히히힝
	obj2->fly();	
	delete obj2;

	cout << "-----------" << endl;

	Horse* obj3 = new Pegasus();   //페가수스만큼 만들어서 홀스로 쓰겠다
	obj3->speak();		//히히힝~~ //virtual 해서 자식꺼 호출
	//((Pegasus *)obj3)->speak();	  //이렇게 형변환을 하면 페가수스 : 히히힝으로 쓸 수 있다
	//obj3->fly();  //오류
	((Pegasus*)obj3)->fly();	  //타입을 바꿨으므로 사용 가능
	//Pegasus* obj4 = new Horse();    //이건 오류남 그 이유는 홀스만큼 만들어서 페가수스만큼 쓰겠다 라는 뜻이다. 조금 만들어서 많이 쓰는것은 할 수 없다.
	delete obj3;
}