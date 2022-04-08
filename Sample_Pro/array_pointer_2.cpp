#include <iostream>
using namespace std;

int main()
{
	char pMessage[] = "welcome to korea";
	char* pM = pMessage;
	//cout << pMessage << endl;				//welcome to korea
	//cout << *pMessage << endl;				//w
	//cout << *(pMessage + 1) << endl;	//e
	//cout << *(pMessage + 2) << endl;	//l
	//cout << *(pMessage + 3) << endl;	//c
	//*를 빼면 pMessage + n 부터 null까지 출력된다

	cout << pM << endl;
	cout << *pM << endl;
	cout << *(pM + 1) << endl;

	//<-글자수 세는 프로그램
	int i;
	cout << "----------" <<endl;
	for (i = 0; *(pMessage + i)!=NULL; i++) {
		cout  << *(pMessage+i) << endl;
	}
	cout << i << endl; 
}