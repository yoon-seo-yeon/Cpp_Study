#include <iostream>
using namespace std;

int main()
{
	int iCode;
	iCode = 'A';

	cout << (char)iCode << "->" << iCode << endl; //A->65

	iCode = 'B';
	cout << (char)iCode << "->" << iCode << endl; //B->66

	iCode = 'C';
	cout << (char)iCode << "->" << iCode << endl;//C->67

	char cCode = 'a';
	cout << cCode << "->" << (int)cCode << endl;//a->97

	cCode = 'b';
	cout << cCode << "->" << (int)cCode << endl;//b->98

	cCode = 'c';
	cout << cCode << "->" << (int)cCode << endl;//c->99

	//또 다른 표현
	iCode = 'A';
	cout << (char)iCode << "->" << iCode << endl;//A->65

	iCode = iCode + 1;
	cout << (char)iCode << "->" << iCode << endl;//B->66

	iCode = iCode + 1;
	cout << (char)iCode << "->" << iCode << endl;//C->67

	cCode = 'a';
	cout << cCode << "->" << (int)cCode << endl;//a->97

	cCode = cCode + 1;
	cout << cCode << "->" << (int)cCode << endl;

	cCode = cCode + 1;
	cout << cCode << "->" << (int)cCode << endl;

	return 0;
}