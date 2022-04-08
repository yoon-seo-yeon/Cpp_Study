#include <iostream>
using namespace std;
const int MAX_COUNT = 100; //constant_1과 ;(세미콜론), =(이퀄)차이 시험문제 각
#define MAX(a, b) a > b ? a : b

int main()
{
	cout << MAX_COUNT << endl;
	int nMax = MAX(100, 200);
	cout << nMax << endl;
	return 0;
}