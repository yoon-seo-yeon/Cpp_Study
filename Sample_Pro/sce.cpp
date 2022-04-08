#include <iostream>
using namespace std;

int main()
{
	char* sce = nullptr;
	char dest[] = "same";
	sce = dest;
	*sce = 'g';
	cout << sce << endl;
	//cout << *sce + 2 << endl; --> ()괄호를 쓰지 않았을시 s의 아스키코드값인 105가 나온다
	cout << *(sce + 2) << endl; //--> m을 출력하기 위함
}