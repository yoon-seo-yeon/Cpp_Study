#include <iostream>
using namespace std;

int main()
{
	/*
	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray = nullptr;
	pArray = nArray;
	cout << pArray << endl;		//�ּҰ�
	pArray++;
	cout << pArray << endl;		//�ּҰ�+4byte
	*/

	
	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray = nullptr;
	pArray = nArray;
	//nArray = pArray;	//���� : �����ʹ� ������ ���������� �迭���� ó�� �� �ּҰ��� �״�� ������ �Ѵ� �������� ���Ѵ�
	cout << *pArray << " , " << nArray[0] << endl;	//0, 0
	*pArray = 10;
	cout << *pArray << " , " << nArray[0] << endl;	//10, 10
	pArray = &nArray[1];
	cout << *pArray << " , " << nArray[1] << endl;	//1, 1
	cout << sizeof(pArray) << endl;		//4	<-x86�̱� ����
	cout << sizeof(*pArray) << endl;	//4	<-��� x64�̵� x86�̵� ���� X 
	cout << sizeof(nArray) << endl;		//40
	//�ּ��� ������ ������ x64, x86�� ������ ��ħ <- ���蹮�� ��

	
	int count = sizeof(nArray) / sizeof(int);
	for (int i = 0; i < 10; i++) {
		cout << i << " : " << nArray[i] << endl;
	}
	cout << sizeof(nArray) << endl;
	

	return 0;
}