#include <iostream>
using namespace std;

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	cout << "3-1*2는 " << 3 - 1 * 2 << "입니다." << endl;//0
	cout << "(2+1<<2)는 " << (2 + 1 << 2) <<"입니다." << endl;//1(?)
	cout << "(0&1|1)은 " << (0 & 1 | 1) << "입니다." << endl;//
	cout << "(3%2*4)은 " << (3 % 2 * 4) << "입니다." << endl;//

}