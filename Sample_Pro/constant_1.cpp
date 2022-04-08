#include <iostream>
using namespace std;

#define MAX_COUNT 100
#define MAX(a, b) a > b ? a : b
#define print() cout<<"김찬희 바보";

int main()
{
	cout << MAX_COUNT << endl;
	int nMax = MAX(100, 200);
	cout << nMax << endl;		
	print();
	return 0;
//const는 전처리하는게 아니고 실행 중에 만들어서 
}