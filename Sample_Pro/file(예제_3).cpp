#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream output("output.txt");
	output << "aaaaaaaaaa";

	output.seekp(3);
	output << "bbb";

	cout << "���� ��ġ�� " << output.tellp() << "�Դϴ�" << endl; //6

	output.seekp(-5, ios::end);
	output << "ccc";

	cout << "���� ��ġ�� " << output.tellp() << "�Դϴ�" << endl; //8

	output.close();

	return 0;
}
