#include <iostream>
using namespace std;

#define MAX_COUNT 100
#define MAX(a, b) a > b ? a : b
#define print() cout<<"������ �ٺ�";

int main()
{
	cout << MAX_COUNT << endl;
	int nMax = MAX(100, 200);
	cout << nMax << endl;		
	print();
	return 0;
//const�� ��ó���ϴ°� �ƴϰ� ���� �߿� ���� 
}