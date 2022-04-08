#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int nCount = 10;
	int nNumber;
	char szName[20];

	ofstream output("output2.txt");

	for (int i = 0; i < nCount; i++) {
		nNumber = i + 1;
		sprintf(szName, "ÀÌ¸§_%d", nNumber);
		output << nNumber << szName << endl;
	}

	output.close();

	ifstream input("input2.txt");

	for (int i = 0; i < nCount; i++) {
		input >> nNumber >> szName;
	}

	input.close();
}