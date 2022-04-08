//대소문자 상관없이 a는 1, b는 2, c는 3
#include <iostream>
using namespace std;

int main()
{
	
	char num; 
	int data = 0;
	cout << "알파벳을 입력하세요 : ";
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
	if (isupper(num)) {	//isupper -> 대문자니?
		cout << (int)(num - 'A' + 1);
	}
	else if (islower(num)) {		//islower -> 대문자니?
		cout << (int)(num - 'a' + 1);
	}
	*/

	/*
	data = toupper(num) - 'A' + 1;
	cout << data;
	*/
}