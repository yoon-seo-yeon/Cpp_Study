#include <iostream>
#include <map>
using namespace std;

int main() {
	auto campus = [](string x, string y) {
		cout << x + y << endl;
	};

	campus("미림", "마이스터고");
	campus("한국", "대학교");

	return 0;
}