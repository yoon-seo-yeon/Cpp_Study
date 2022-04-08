#include <iostream>
#include <fstream>
using namespace std;

void reverseReadFile(ifstream& fin) {
	fin.seekg(0, ios::end);
	int length = fin.tellg();
	cout << "length : " << length << endl;

	while (length > 0) {
		fin.seekg(--length, ios::beg);
		cout << (char)fin.get(); //파일에서 한글자씩 가져오기
	}
}

int main() {
	const char* file = "address.txt";
	ifstream fin(file);

	reverseReadFile(fin);
}