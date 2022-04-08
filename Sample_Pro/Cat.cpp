#include <iostream>
using namespace std;

class Cat {
private:
	int age;
	const char* name;

public:
	Cat() {
		age = 18;
		name = "�߿���";
	}

	~Cat() {
	}

	int getAge() {
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}

	char* getName() {
		return (char*)name;
	}

	void setName(const char* name) {
		this->name = name;
	}
};

int main() {
	Cat* pCat = new Cat;
	cout << "������� ���� : " << pCat->getAge() << ", ������� �̸� : " << pCat->getName() << endl;

	pCat->setAge(20);
	pCat->setName("�����");
	cout << "������� ���� : " << pCat->getAge() << ", ������� �̸� : " << pCat->getName() << endl;

	return 0;
}