#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	ofstream fout("sample.txt", ios::app);

	if (!fout) {
		cerr << "���� ���� ����" << endl;
		exit(1);
	}

	fout << "append line 1" << endl;

	return 0;
}