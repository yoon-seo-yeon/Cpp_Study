#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream input("input.txt");
	if (input.fail()) {
		cout << "������ ���� �� �����߽��ϴ�" << endl;
		return 1;
	}

	input.seekg(0, ios::end);
	cout << "������ ���̴� " << input.tellg() << "�Դϴ�" << endl;

	input.close();

	return 0;
}