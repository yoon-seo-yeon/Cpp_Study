#include <iostream>
using namespace std;

int main()
{
	void* pValue = 0;		//pValue �� ����Ű�� �������� ũ�⸦ ���� �������� �ʾҴٴ� �ǹ�

	int val = 100;
	pValue = &val;		//int�� ������ �ּҸ� pVlaue�� ����
	//*pValue = 200;	//�ڽ��� ���� ���� int���� �ƴ� void������ �˰�����
	*(int*)pValue = 200;		//���� ����ȯ

	cout << (int*)pValue;	//����� ���� ����ȯ
}