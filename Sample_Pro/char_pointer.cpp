#include <iostream>
using namespace std;

int main()
{
	//char* pMessage = "welcome to korea";	//오류
	char pMessage[] = "welcome to korea";
	char* pP = pMessage;	//&pMessage 오류 주소에 주소를 써주는 것이므로 &필요없음
	for (int i = 0; i < sizeof(pMessage); i++) {
		cout << *pP << endl;
		pP++;
	}
	cout << sizeof(pMessage) << endl;
}