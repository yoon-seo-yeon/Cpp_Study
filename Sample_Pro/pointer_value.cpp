#include <iostream>
using namespace std;

int main()
{
	/*
	int value = 10;
	int* pValue = nullptr;
	pValue = &value;

	cout << "pValue = " << pValue << endl;			//�ּҰ�
	cout << "*pValue = " << *pValue << endl;		//10
	cout << "value = " << value << endl;				//10

	*pValue = 20;

	cout << "pValue = " << pValue << endl;			//���� ���� �ּҰ�
	cout << "*pValue = " << *pValue << endl;		//20
	cout << "value = " << value << endl;				//20
	*/

	//���̶� �����Ѱ� 
	//������ ������ �ʱ�ȭ ���
	int value = 10;
	void* pValue = nullptr;	//int*�� �����ϸ� �ʴ� ������ int�� ��� �����ִµ� 
	//void*�� �����ϰ� �Ǹ� �𸣱⶧���� ����ִ� ���� int������ ���� �𸣱� ������ �� ���߿� ����ȯ�� �ʿ��ϴ�
	//*(int*)pValue <-�̷������� ����ȯ �ʼ�
	pValue = &value;

	cout << "pValue = " << pValue << endl;					//�ּҰ�
	cout << "*pValue = " << *(int*)pValue << endl;		//10
	cout << "value = " << value << endl;						//10

	*(int*)pValue = 20;

	cout << "pValue = " << pValue << endl;					//�ּҰ�
	cout << "*pValue = " << *(int*)pValue << endl;		//20
	cout << "value = " << value << endl;						//20

	//return 0;
}