#include <iostream>
using namespace std;

#define multiple_define(A) ((A)*(A))
int multiple_inline(int A);

int main()
{
	int a = 3;
	cout << "inline �Լ� ���� " << multiple_inline(++a) << endl;
	 
	a = 3;
	cout << "define ��ũ���� ���� " << multiple_define(++a) << endl;
	//cout << "define ��ũ���� ���� " << ((++a)*(++a)) << endl;

	return 0;
}

inline int multiple_inline(int A)
{
	return A * A;
}