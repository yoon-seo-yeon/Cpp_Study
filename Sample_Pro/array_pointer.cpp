#include <iostream>
using namespace std;

int main()
{
	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray;
	pArray = nArray;
	//nArray = pArray;	//오류 배열명은 바꿀 수 없다(pArray로 바꿀 수 없다)
}