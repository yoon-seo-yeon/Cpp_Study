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
		cout << "���Ҹ� �۸�" << " ";
	}

	virtual void EatDiets(const char* eat) const {
		//a = 5;
		cout << eat << endl;
	}
};

class Cat : public Animal {
public :
	/*virtual void SoundSpeak() {
		cout << "����� �߿�" << " ";
	}*/

	virtual void EatDiets(const char* eat) const  {
		cout << eat << endl;
	}
};

int main() {
	Dog dog;
	dog.SoundSpeak();
	dog.EatDiets("�� ���");

	Cat cat;
	cat.SoundSpeak();
	cat.EatDiets("����� ���");

	Animal ani;	//���� //Animal�� ���� ���� Ŭ�����̱� ������ ���� //=0 ���ְ� �߰�ȣ�� �ϸ� ���� �ȳ� // ���� ���� Ŭ������ �ϳ��� �־ ���� 
	//���� ���� �Լ��� ������� ������ ���� �θ� Ŭ������ �Լ��� ������ ���� �ʾƵ� ������ ������ �ʴ� �������� �ִ�. �̸� �˾ƺ��� ���� CatŬ������ SoundSpeak() �ּ�ó��
	

	return 0;
}