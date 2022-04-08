#include <iostream>
using namespace std;

/*
예제05(class 이용, 접근제어자 수정 필요)
class Account {
public :
	char accID[20];		//계좌번호
	char secID[20];		//비밀번호
	char name[20];		//이름
	int balance;			//잔액
	void Deposit(int money);
	void Withdraw(int money);
	void print();
};

void Account::Deposit(int money) {			//call by reference
	balance += money;
	print();
}

void Account::Withdraw(int money) {		//call by pointer
	balance -= money;
	print();
}

void Account::print() {
	cout << "계좌번호 : " << accID << endl;
	cout << "비밀번호 : " << secID << endl;
	cout << "이름 : " << name << endl;
	cout << "잔액 : " << balance << endl;
}

int main() {
	Account mirim = { "1234", "1357", "개나리", 1000 };
	mirim.print();
	mirim.Deposit(100);	 	 //입금
	mirim.Withdraw(300);		//출금
	mirim.print();
}
*/

/*
예제04
struct Account {
	char accID[20];		//계좌번호
	char secID[20];		//비밀번호
	char name[20];		//이름
	int balance;			//잔액
	void Deposit(int money);
	void Withdraw(int money);
	void print();
};

void Account::Deposit(int money) {			//call by reference
	balance += money;
	print();
}

void Account::Withdraw(int money) {		//call by pointer
	balance -= money;
	print();
}

void Account::print() {
	cout << "계좌번호 : " << accID << endl;
	cout << "비밀번호 : " << secID << endl;
	cout << "이름 : " << name << endl;
	cout << "잔액 : " << balance << endl;
}

int main() {
	Account mirim = { "1234", "1357", "개나리", 1000 };
	mirim.print();
	mirim.Deposit(100);	 	 //입금
	mirim.Withdraw(300);		//출금
	mirim.print();
}
*/

/*
예제03
struct Account {
	char accID[20];		//계좌번호
	char secID[20];		//비밀번호
	char name[20];		//이름
	int balance;			//잔액
	void Deposit(int money);
	void Withdraw(int money);
};

void Account::Deposit(int money) {			//call by reference
	balance += money;
}

void Account::Withdraw(int money) {		//call by pointer
	balance -= money;
}

int main() {
	Account mirim = { "1234", "1357", "개나리", 1000 };
	cout << "계좌번호 : " << mirim.accID << endl;
	cout << "비밀번호 : " << mirim.secID << endl;
	cout << "이름 : " << mirim.name << endl;
	cout << "잔액 : " << mirim.balance << endl;

	mirim.Deposit(100);	 	 //입금
	cout << "계좌번호 : " << mirim.accID << endl;
	cout << "비밀번호 : " << mirim.secID << endl;
	cout << "이름 : " << mirim.name << endl;
	cout << "잔액 : " << mirim.balance << endl;

	mirim.Withdraw(300);		//출금
	cout << "계좌번호 : " << mirim.accID << endl;
	cout << "비밀번호 : " << mirim.secID << endl;
	cout << "이름 : " << mirim.name << endl;
	cout << "잔액 : " << mirim.balance << endl;
}
*/

/*
예제02
struct Account {
	char accID[20];		//계좌번호
	char secID[20];		//비밀번호
	char name[20];		//이름
	int balance;			//잔액
	void Deposit(int money) {			//call by reference
		balance += money;
	}

	void Withdraw(int money) {		//call by pointer
		balance -= money;
	}
};

int main() {
	Account mirim = { "1234", "1357", "개나리", 1000 };
	cout << "계좌번호 : " << mirim.accID << endl;
	cout << "비밀번호 : " << mirim.secID << endl;
	cout << "이름 : " << mirim.name << endl;
	cout << "잔액 : " << mirim.balance << endl;

	mirim.Deposit(100);	 	 //입금
	cout << "계좌번호 : " << mirim.accID << endl;
	cout << "비밀번호 : " << mirim.secID << endl;
	cout << "이름 : " << mirim.name << endl;
	cout << "잔액 : " << mirim.balance << endl;

	mirim.Withdraw(300);		//출금
	cout << "계좌번호 : " << mirim.accID << endl;
	cout << "비밀번호 : " << mirim.secID << endl;
	cout << "이름 : " << mirim.name << endl;
	cout << "잔액 : " << mirim.balance << endl;
}
*/

/*
예제01
struct Account {
	char accID[20];		//계좌번호
	char secID[20];		//비밀번호
	char name[20];		//이름
	int balance;			//잔액
};

void Deposit(Account &acc, int money) {			//call by reference
//void Deposit(int money)	{
	acc.balance += money;
}

void Withdraw(Account *acc, int money) {		//call by pointer
	(*acc).balance -= money;
}

int main() {
	Account mirim = { "1234", "1357", "개나리", 1000 };
	cout << "계좌번호 : " << mirim.accID << endl;
	cout << "비밀번호 : " << mirim.secID << endl;
	cout << "이름 : " << mirim.name << endl;
	cout << "잔액 : " << mirim.balance << endl;

	Deposit(mirim, 100);		//입금
	//mirim.Deposit(100);	   //<- 이렇게 하면 매개변수에 mirim이 필요없음
	cout << "계좌번호 : " << mirim.accID << endl;
	cout << "비밀번호 : " << mirim.secID << endl;
	cout << "이름 : " << mirim.name << endl;
	cout << "잔액 : " << mirim.balance << endl;

	Withdraw(&mirim, 300);		//출금
	cout << "계좌번호 : " << mirim.accID << endl;
	cout << "비밀번호 : " << mirim.secID << endl;
	cout << "이름 : " << mirim.name << endl;
	cout << "잔액 : " << mirim.balance << endl;
}
	*/