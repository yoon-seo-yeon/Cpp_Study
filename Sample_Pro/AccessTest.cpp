#include <iostream>
using namespace std;

class AccessTest {
public:
	int ShowJumsu();
	//void setJumsu(const int data);
	//int getJumsu();
	AccessTest(int);

private:
	int jumsu;
};

AccessTest::AccessTest(int jumsu) {
	this->jumsu = jumsu;
}

int AccessTest :: ShowJumsu() {
	return jumsu;
}

//void AccessTest :: ShowJumsu() {
//	cout << "���� : " << jumsu << endl;
//}

//void AccessTest::setJumsu(const int data) {
//	jumsu = data;
//}
//
//int AccessTest::getJumsu() {
//	return jumsu;
//}

int main() {
	AccessTest access(99);
	cout << "���� : " << access.ShowJumsu() << endl;

	//access.setJumsu(99);
	//access.ShowJumsu();
	//cout << "���� : " << access.getJumsu() << endl;

	return 0;
}