#include <iostream>
using namespace std;

int main()
{
	int nArray[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray = nullptr;		//nullptr 대신에 NULL이나 0을 써도 됨 C++임을 표시하기 위해 nullptr을 쓰는것이다
	pArray = nArray;
	cout << nArray[0] << ", " << *pArray << endl;	//0,0

	*pArray = 10;
	cout << nArray[0] << ", " << *pArray << endl;	//10,10	

	pArray = &nArray[1];
	cout << nArray[0] << ", " << *pArray << endl;	//10,1
	
	pArray++ ;
	cout << nArray[0] << ", " << *pArray << endl;	//10,2

	pArray = nArray;
	//포인터와 배열을 서로 호환해서 쓸 수 있다
	cout << *pArray << ", " << nArray[0] << endl;	//10,10
	cout << pArray[0] << ", " << *nArray << endl;	//10,10

	//nArray = pArray;	//다만 이건 안된다(에러)
	//포인터에 배열을 넣어줄 수 있지만 배열에는 포인터를 넣을 수 없다

	//아래 예제 모두 다 int 말고 다른 것도 넣어서 해볼 것 (시험 출제)
	cout << sizeof(pArray) << endl;	//4
	cout << sizeof(nArray) << endl;	//40
	cout << sizeof(*pArray) << endl; //4
	/*
	int count = sizeof(nArray) / sizeof(int);

	for (int i = 0; i < count; i++) {
		cout << i << " : " << nArray[i] << endl;
	}
	cout << sizeof(nArray) << endl;
	*/
	return 0;
}