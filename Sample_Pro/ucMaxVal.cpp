#include <iostream>
using namespace std;

int main()
{
	//char���� ���� ���ϱ� - 1����Ʈ
	char cMaxVal = 0x7F;
	unsigned char ucMaxVal = 0xFF;
	cout << "char�� ����(1����Ʈ) : " << (int)(char)(cMaxVal + 1) << " ~ " << (int)cMaxVal << endl;
	cout << "unsigned char�� ����(1����Ʈ) : " << (int)(char)(ucMaxVal + 1) << " ~ " << (int)ucMaxVal << endl;
}