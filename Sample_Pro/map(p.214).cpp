#include <iostream>
#include <map>
using namespace std;

int main() {
	auto campus = [](string x, string y) {
		cout << x + y << endl;
	};

	campus("�̸�", "���̽��Ͱ�");
	campus("�ѱ�", "���б�");

	return 0;
}