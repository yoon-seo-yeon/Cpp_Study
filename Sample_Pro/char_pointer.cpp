#include <iostream>
using namespace std;

int main()
{
	//char* pMessage = "welcome to korea";	//����
	char pMessage[] = "welcome to korea";
	char* pP = pMessage;	//&pMessage ���� �ּҿ� �ּҸ� ���ִ� ���̹Ƿ� &�ʿ����
	for (int i = 0; i < sizeof(pMessage); i++) {
		cout << *pP << endl;
		pP++;
	}
	cout << sizeof(pMessage) << endl;
}