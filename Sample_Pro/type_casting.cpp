#include <iostream>
using namespace std;

int main()
{
	int iCode = 1000;
	cout << iCode << "->" << (char)iCode << endl;

	iCode = (int)1.4321;
	cout << iCode << endl;

	//����ȯ�� ������ ������ �����Ϸ����� ��� �޽����� ��µȴ�.��)iCode = 1.5678;
	iCode = (int)1.5678;
	cout << iCode << endl;
	double dResult = 0.0;
	dResult = 100 + 3 / 2;
	cout << dResult << endl;
	dResult = 100 + double(3) / 2;	//����ȯ�� �� �ٸ� �����̴�.(double)3/2�� �����ϴ�.
	cout << dResult << endl;
	return 0;
}