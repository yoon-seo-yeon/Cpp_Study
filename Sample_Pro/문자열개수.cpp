#include <iostream>
using namespace std;

int main() {
	const char* pMessage = "welcome to korea";
	for (int i = 0; ; i++) {
		if (*(pMessage + i) == 0) {
			cout << "count = " << i << endl;
			break;
		}
	}
}