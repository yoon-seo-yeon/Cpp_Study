#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
	return a + b;
}

int main() {
	cout << add(3, 5) << endl;
	cout << add(2.7, 4.2) << endl;

	//�ؿ��� ����� ���ø� �ʿ�
	//cout << add('a', 'b') << endl;
	//cout << add("School", "Mirim") << endl;
}