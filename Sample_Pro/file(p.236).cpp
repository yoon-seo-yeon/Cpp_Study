#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "address.txt";

	ifstream fin(file);
	if (!fin) {
		cout << file << " ���� ����" << endl;
		return 0;
	}

	fin.seekg(0, ios::end);
	cout << file << "�� ũ��� " << fin.tellg() << endl;

	fin.close();

	return 0;
}