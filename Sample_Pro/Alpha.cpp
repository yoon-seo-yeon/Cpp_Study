//��ҹ��� ������� a�� 1, b�� 2, c�� 3
#include <iostream>
using namespace std;

int main()
{
	
	char num; 
	int data = 0;
	cout << "���ĺ��� �Է��ϼ��� : ";
	cin >> num;
	/*
	if (num >= 'A' && num <= 'Z') {
		cout << (int)(num-'A'+1);
	}
	else if (num >= 'a' && num <= 'z') {
		cout << (int)(num-'a'+1);
	}
	*/

	/*
	if (isupper(num)) {	//isupper -> �빮�ڴ�?
		cout << (int)(num - 'A' + 1);
	}
	else if (islower(num)) {		//islower -> �빮�ڴ�?
		cout << (int)(num - 'a' + 1);
	}
	*/

	/*
	data = toupper(num) - 'A' + 1;
	cout << data;
	*/
}