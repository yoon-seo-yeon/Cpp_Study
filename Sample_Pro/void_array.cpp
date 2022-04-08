#include <iostream>
using namespace std;

int main()
{
	void* pValue = 0;		//pValue 가 가리키는 데이터의 크기를 아직 정해지지 않았다는 의미

	int val = 100;
	pValue = &val;		//int형 변수의 주소를 pVlaue에 저장
	//*pValue = 200;	//자신이 따라간 곳이 int형이 아닌 void형으로 알고있음
	*(int*)pValue = 200;		//강제 형변환

	cout << (int*)pValue;	//출력할 때도 형변환
}