#include <iostream>
#include <fstream>
using namespace std;

void main() {
	int nArray[6] = { 0 };
	ifstream fi_bin("data.bin", ifstream::binary);
	if (!fi_bin) {
		cout << "data.bin ���� ���� ����" << endl;
		exit(1);
	}

	cout << " data.bin ���� ���� ��� " << endl << endl;
	fi_bin.read((char*)&nArray, sizeof(nArray));
	for (auto& e : nArray)
		cout << e << " ";
}