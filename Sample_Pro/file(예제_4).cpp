#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream input("input.txt");
	if (input.fail()) {
		cout << "������ ���� �� �����߽��ϴ�" << endl;
		return 1;
	}

	input.seekg(0, ios::end);
	cout << (char)input.get() << endl; //�ƹ��͵� �ȳ���

	input.clear();
	input.seekg(-5, ios::cur); //<- �� ������ ���� ���ϰ� ���� c++ �� ��Ʈ���� eofbit��� �÷��׸� ������ �ִµ�, ����� �Լ��� ���� ������ ���� �����ϰ� �� ��� �� "������ ���� �����ߴ�"�� ���� �÷��װ� ������ �Ǹ� �� ���� ����� �Լ��� ������ �ʰ� �ȴ�
	cout << (char)input.get() << endl; //v�� ���;� �ϴµ� ������ ���� clear()�� �߰��ϸ� v�� ���´�

	input.close();

	return 0;
}