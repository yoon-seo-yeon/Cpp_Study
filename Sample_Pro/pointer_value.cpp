#include <iostream>
using namespace std;

int main()
{
	/*
	int value = 10;
	int* pValue = nullptr;
	pValue = &value;

	cout << "pValue = " << pValue << endl;			//주소값
	cout << "*pValue = " << *pValue << endl;		//10
	cout << "value = " << value << endl;				//10

	*pValue = 20;

	cout << "pValue = " << pValue << endl;			//위와 같은 주소값
	cout << "*pValue = " << *pValue << endl;		//20
	cout << "value = " << value << endl;				//20
	*/

	//쌤이랑 수정한거 
	//포인터 변수의 초기화 방법
	int value = 10;
	void* pValue = nullptr;	//int*로 연결하면 너는 앞으로 int야 라고 말해주는데 
	//void*로 연결하게 되면 모르기때문데 들어있는 값이 int값인지 뭔지 모르기 때문에 꼭 나중에 형변환이 필요하다
	//*(int*)pValue <-이런식으로 형변환 필수
	pValue = &value;

	cout << "pValue = " << pValue << endl;					//주소값
	cout << "*pValue = " << *(int*)pValue << endl;		//10
	cout << "value = " << value << endl;						//10

	*(int*)pValue = 20;

	cout << "pValue = " << pValue << endl;					//주소값
	cout << "*pValue = " << *(int*)pValue << endl;		//20
	cout << "value = " << value << endl;						//20

	//return 0;
}