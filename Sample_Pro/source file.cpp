#include <iostream>
using namespace std;
//이 두문장은 항상 있어야 하는 것

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
	cout << "입력 : ";
	cin >> a;
	cout << a;
	cout << jungui << endl << endl;//endl : \n과 같은 의미
	cout << justice::jungui << endl << endl;
}