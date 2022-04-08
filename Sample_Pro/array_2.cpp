#include <iostream>
using namespace std;

int main()
{
	/*
	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray = nullptr;
	pArray = nArray;
	cout << pArray << endl;		//주소값
	pArray++;
	cout << pArray << endl;		//주소값+4byte
	*/

	
	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray = nullptr;
	pArray = nArray;
	//nArray = pArray;	//오류 : 포인터는 변경이 가능하지만 배열명은 처음 준 주소값을 그대로 가져야 한다 변경하지 못한다
	cout << *pArray << " , " << nArray[0] << endl;	//0, 0
	*pArray = 10;
	cout << *pArray << " , " << nArray[0] << endl;	//10, 10
	pArray = &nArray[1];
	cout << *pArray << " , " << nArray[1] << endl;	//1, 1
	cout << sizeof(pArray) << endl;		//4	<-x86이기 때문
	cout << sizeof(*pArray) << endl;	//4	<-얘는 x64이든 x86이든 영향 X 
	cout << sizeof(nArray) << endl;		//40
	//주소의 사이즈 에서만 x64, x86이 영향을 미침 <- 시험문제 각

	
	int count = sizeof(nArray) / sizeof(int);
	for (int i = 0; i < 10; i++) {
		cout << i << " : " << nArray[i] << endl;
	}
	cout << sizeof(nArray) << endl;
	

	return 0;
}