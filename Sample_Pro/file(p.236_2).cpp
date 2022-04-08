#include <iostream>
#include <fstream>
using namespace std;

void reverseReadFile(ifstream& fin) {
	fin.seekg(0, ios::end);
	int length = fin.tellg();
	cout << "length : " << length << endl;

	while (length > 0) {
		fin.seekg(--length, ios::beg);
		cout << (char)fin.get(); //���Ͽ��� �ѱ��ھ� ��������
	}
}

int main() {
	const char* file = "address.txt";
	ifstream fin(file);

	reverseReadFile(fin);
}