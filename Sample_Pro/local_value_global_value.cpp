#include <iostream>
using namespace std;

int nValue = 100;

void subFund()
{
	int nVal = 20;
	cout << "subFunc::전역변수 : " << nValue << endl;
	cout << "subFunc::지역변수 : " << nVal << endl;

	nValue = 200;
	nVal = 10;

	cout << "subFunc::전역변수 : " << nValue << endl;
	cout << "subFunc::지역변수 : " << nVal << endl;
}
int main()
{
		int nValue = 10;	//지역변수명과 전역변수명이 동일하다
		//전역변수를 접근하려면 영역 연산자(::)를 사용한다

		cout << "main::전역변수 : " << ::nValue << endl;
		//지역변수값을 출력한다

		cout << "main::지역변수 : " << nValue << endl;

		subFund();	//서브 함수를 출력한다
		cout << "main::전역변수 : " << ::nValue << endl;
		cout << "main::지역변수 : " << nValue << endl;

		return 0;
}