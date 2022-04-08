#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream input("input.txt");
	if (input.fail()) {
		cout << "������ ���µ� �����߽��ϴ�" << endl;
		return 1;
	}

	input.seekg(-1, ios::end);
	cout << (char)input.peek(); //z

	input.seekg(0, ios::beg);
	cout << (char)input.peek(); //a

	input.seekg(7, ios::cur);
	cout << (char)input.peek(); //h

	input.seekg(5);
	cout << (char)input.peek() << endl; //f

	cout << endl;

	input.seekg(-1, ios::end);
	cout << (char)input.get(); //z

	input.seekg(0, ios::beg);
	cout << (char)input.get(); //a

	input.seekg(7, ios::cur);
	cout << (char)input.get(); //i

	input.seekg(5); //�ڿ� �ϰ͵� ������ �տ������� 5
	cout << (char)input.get() << endl; //f

	input.close();
	return 0;
}