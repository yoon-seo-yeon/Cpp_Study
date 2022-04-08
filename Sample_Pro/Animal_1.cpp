#include <iostream>
#include <string>
using namespace std;

class Animal {
	string name;
	int weight;

public:
	Animal() {
		cout << "Animal ������() " << endl;
	}

	Animal(string name, int weight) {
		cout << "�Ű����� Animal ������()" << endl;
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
		cout << "Animal �Ҹ���() " << endl;
	}
};

class Dog : public Animal {
	int height;

public:
	Dog()  {
		cout << "Dog ������()" << endl;
	}

	Dog(string name, int weight, int height)  : Animal(name, weight) {
		cout << "�Ű����� Dog ������()" << endl;
		this->height = height;
	}

	void print() {
		//cout << name << " " << weight << " " << height << endl;	//���� private�̱� ������ ���⼭ ����� �� ���� ���� ��� �ʹٸ� return�� ���Ѽ� �ؾ��� �ؿ� ������ return Ȱ���� �� 
		//cout << getName() << " " << getWeight() << " " << height << endl;		   //return���� ���ٸ� �Ʒ� ���� �̿�
		Animal::print();
		cout << height << endl;
	}

	~Dog() {
		cout << "Dog �Ҹ���() " << endl;
	}
};

int main() {
	//Dog dog;
	Animal a("����", 1000);
	a.print();

	Dog d1("������", 3, 50);
	d1.print();

	return 0;
}

/*

*/