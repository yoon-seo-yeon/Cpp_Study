#include <iostream>
using namespace std;

int Add(int x, int y) {
	return x + y;
}

int Subtract(int x, int y) {
	return x - y;
}

int Maltiply (int x, int y) {
	return x * y;
}

int main() {
	int x, y, op;

	cout << "X를 입력하세요 : ";
	cin >> x;

	cout << "Y를 입력하세요 : ";
	cin >> y;

	cout << endl;

	cout << "1 : Add, 2 : Subtract, 3 : Multiply" << endl;
	cout << "연산자를 입력하세요 : ";
	cin >> op;

	cout << endl;
	
	//동적 바인딩
	int (*func_ptr)(int, int) = nullptr;	 //func_ptr은 함수 포인터, 매개변수 두 개를 가지는 함수 포인터, 초기값은 null

	switch (op) {
		case 1:
			//result = Add(x, y);
			func_ptr = Add;
			break;

		case 2:
			//result = Subtract(x, y);
			func_ptr = Subtract;
			break;

		case 3:
			//result = Maltiply(x, y);
			func_ptr = Maltiply;
			break;
	}

	cout << "답은 : " << func_ptr(x, y);		  //함수 호출 스위치에 따라서 어떤 함수가 호출될건지 결정된다


	/*
	//정적 바인딩
	int result;

	switch (op) {
		case 1 : 
			result = Add(x, y);
			break;

		case 2 :
			result = Subtract(x, y);
			break;

		case 3 :
			result = Maltiply(x, y);
			break;
	}

	cout << "답은 : " << result;
	*/


	return 	 0;
}