#include <iostream>
using namespace std;

int main()
{
	char* sce = nullptr;
	char dest[] = "same";
	sce = dest;
	*sce = 'g';
	cout << sce << endl;
	//cout << *sce + 2 << endl; --> ()��ȣ�� ���� �ʾ����� s�� �ƽ�Ű�ڵ尪�� 105�� ���´�
	cout << *(sce + 2) << endl; //--> m�� ����ϱ� ����
}