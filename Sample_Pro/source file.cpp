#include <iostream>
using namespace std;
//�� �ι����� �׻� �־�� �ϴ� ��

namespace definition
{
	int jungui = 10;
}

using namespace definition;

namespace justice
{
	int jungui = 20;
}

int main()
{
	int a;
	cout << "�Է� : ";
	cin >> a;
	cout << a;
	cout << jungui << endl << endl;//endl : \n�� ���� �ǹ�
	cout << justice::jungui << endl << endl;
}