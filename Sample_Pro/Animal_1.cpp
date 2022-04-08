#include <iostream>
#include <string>
using namespace std;

class Animal {
	string name;
	int weight;

public:
	Animal() {
		cout << "Animal 생성자() " << endl;
	}

	Animal(string name, int weight) {
		cout << "매개변수 Animal 생성자()" << endl;
		this->name = name;
		this->weight = weight;
	}

	/*
	string getName() {
		return name;
	}

	int getWeight() {
		return weight;
	}
	*/
	
	void print() {
		cout << name << " " << weight << " ";
	}

	~Animal() {
		cout << "Animal 소멸자() " << endl;
	}
};

class Dog : public Animal {
	int height;

public:
	Dog()  {
		cout << "Dog 생성자()" << endl;
	}

	Dog(string name, int weight, int height)  : Animal(name, weight) {
		cout << "매개변수 Dog 생성자()" << endl;
		this->height = height;
	}

	void print() {
		//cout << name << " " << weight << " " << height << endl;	//오류 private이기 때문에 여기서 언급할 수 없음 굳이 찍고 싶다면 return을 시켜서 해야함 밑에 문장이 return 활용한 것 
		//cout << getName() << " " << getWeight() << " " << height << endl;		   //return문이 없다면 아래 문장 이용
		Animal::print();
		cout << height << endl;
	}

	~Dog() {
		cout << "Dog 소멸자() " << endl;
	}
};

int main() {
	//Dog dog;
	Animal a("동물", 1000);
	a.print();

	Dog d1("강아지", 3, 50);
	d1.print();

	return 0;
}

/*

*/