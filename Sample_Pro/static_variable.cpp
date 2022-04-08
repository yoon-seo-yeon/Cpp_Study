#include <iostream>
using namespace std;

void subFuncA()
{
	int nVal = 10;
	cout << "subFuncA::nVal : " << nVal << endl;
	nVal++;	//지역변수이므로 함수가 종료되면 이 변수가 제거된다
}
void subFuncB()
{
	static int nVal = 10;
	cout << "subFuncB::static nVal : " << nVal << endl;	//정적변수이므로 함수가 종료되더라도 이 변수는 제거되지 않고 남아 있게 된다
	nVal++;
}

int main()
{
	subFuncA();//subFuncA::nVal : 10
	subFuncA();//subFuncA::nVal : 10
	subFuncA();//subFuncA::nVal : 10
	subFuncB();//subFuncB::static nVal : 10
	subFuncB();//subFuncB::static nVal : 11
	subFuncB();//subFuncB::static nVal : 12

	return 0;
}