#include <iostream>
using namespace std;

int main()
{
	int a = 3;
	cout << "첫 번째 출력 " << a << endl;
	{
		int a = 4;
		cout << "두 번째 출력 " << a << endl;
	}
	cout << "세 번째 출력 " << a << endl;
}