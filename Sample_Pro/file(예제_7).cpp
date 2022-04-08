#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int nCount = 10;
	int nNumber;
	char szName[20];

	fstream output("output2.txt");

	for (int i = 0; i < nCount; i++) {
		nNumber = i + 1;
		sprintf(szName, "ÀÌ¸§_%d", nNumber);
		output << nNumber << szName << endl;
	}

	//output.close();

	//ifstream input("input2.txt");

	output.seekg(0, ios::beg);
	for (int i = 0; i < nCount; i++) {
		output >> nNumber >> szName;
		cout << nNumber << szName << endl;
	}

	output.close();
}