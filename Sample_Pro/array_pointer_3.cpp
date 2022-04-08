#include <iostream>
using namespace std;

int main()
{
	int nArray[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray = nullptr;		//nullptr ��ſ� NULL�̳� 0�� �ᵵ �� C++���� ǥ���ϱ� ���� nullptr�� ���°��̴�
	pArray = nArray;
	cout << nArray[0] << ", " << *pArray << endl;	//0,0

	*pArray = 10;
	cout << nArray[0] << ", " << *pArray << endl;	//10,10	

	pArray = &nArray[1];
	cout << nArray[0] << ", " << *pArray << endl;	//10,1
	
	pArray++ ;
	cout << nArray[0] << ", " << *pArray << endl;	//10,2

	pArray = nArray;
	//�����Ϳ� �迭�� ���� ȣȯ�ؼ� �� �� �ִ�
	cout << *pArray << ", " << nArray[0] << endl;	//10,10
	cout << pArray[0] << ", " << *nArray << endl;	//10,10

	//nArray = pArray;	//�ٸ� �̰� �ȵȴ�(����)
	//�����Ϳ� �迭�� �־��� �� ������ �迭���� �����͸� ���� �� ����

	//�Ʒ� ���� ��� �� int ���� �ٸ� �͵� �־ �غ� �� (���� ����)
	cout << sizeof(pArray) << endl;	//4
	cout << sizeof(nArray) << endl;	//40
	cout << sizeof(*pArray) << endl; //4
	/*
	int count = sizeof(nArray) / sizeof(int);

	for (int i = 0; i < count; i++) {
		cout << i << " : " << nArray[i] << endl;
	}
	cout << sizeof(nArray) << endl;
	*/
	return 0;
}