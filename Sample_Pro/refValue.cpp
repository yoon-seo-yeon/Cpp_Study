#include <iostream>
using namespace std;

int main() {
	int nValue = 4;
	int& refValue = nValue;
	cout << "Before change : " << nValue << ", " << refValue << endl;

	nValue++;	
	cout << "Change nValue : " << nValue << ", " << refValue << endl;

	refValue++;
	cout << "Change refValue : " << nValue << ", " << refValue << endl;
}