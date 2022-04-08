#include <iostream>
using namespace std;

/*
����05(class �̿�, ���������� ���� �ʿ�)
class Account {
public :
	char accID[20];		//���¹�ȣ
	char secID[20];		//��й�ȣ
	char name[20];		//�̸�
	int balance;			//�ܾ�
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
	cout << "���¹�ȣ : " << accID << endl;
	cout << "��й�ȣ : " << secID << endl;
	cout << "�̸� : " << name << endl;
	cout << "�ܾ� : " << balance << endl;
}

int main() {
	Account mirim = { "1234", "1357", "������", 1000 };
	mirim.print();
	mirim.Deposit(100);	 	 //�Ա�
	mirim.Withdraw(300);		//���
	mirim.print();
}
*/

/*
����04
struct Account {
	char accID[20];		//���¹�ȣ
	char secID[20];		//��й�ȣ
	char name[20];		//�̸�
	int balance;			//�ܾ�
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
	cout << "���¹�ȣ : " << accID << endl;
	cout << "��й�ȣ : " << secID << endl;
	cout << "�̸� : " << name << endl;
	cout << "�ܾ� : " << balance << endl;
}

int main() {
	Account mirim = { "1234", "1357", "������", 1000 };
	mirim.print();
	mirim.Deposit(100);	 	 //�Ա�
	mirim.Withdraw(300);		//���
	mirim.print();
}
*/

/*
����03
struct Account {
	char accID[20];		//���¹�ȣ
	char secID[20];		//��й�ȣ
	char name[20];		//�̸�
	int balance;			//�ܾ�
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
	Account mirim = { "1234", "1357", "������", 1000 };
	cout << "���¹�ȣ : " << mirim.accID << endl;
	cout << "��й�ȣ : " << mirim.secID << endl;
	cout << "�̸� : " << mirim.name << endl;
	cout << "�ܾ� : " << mirim.balance << endl;

	mirim.Deposit(100);	 	 //�Ա�
	cout << "���¹�ȣ : " << mirim.accID << endl;
	cout << "��й�ȣ : " << mirim.secID << endl;
	cout << "�̸� : " << mirim.name << endl;
	cout << "�ܾ� : " << mirim.balance << endl;

	mirim.Withdraw(300);		//���
	cout << "���¹�ȣ : " << mirim.accID << endl;
	cout << "��й�ȣ : " << mirim.secID << endl;
	cout << "�̸� : " << mirim.name << endl;
	cout << "�ܾ� : " << mirim.balance << endl;
}
*/

/*
����02
struct Account {
	char accID[20];		//���¹�ȣ
	char secID[20];		//��й�ȣ
	char name[20];		//�̸�
	int balance;			//�ܾ�
	void Deposit(int money) {			//call by reference
		balance += money;
	}

	void Withdraw(int money) {		//call by pointer
		balance -= money;
	}
};

int main() {
	Account mirim = { "1234", "1357", "������", 1000 };
	cout << "���¹�ȣ : " << mirim.accID << endl;
	cout << "��й�ȣ : " << mirim.secID << endl;
	cout << "�̸� : " << mirim.name << endl;
	cout << "�ܾ� : " << mirim.balance << endl;

	mirim.Deposit(100);	 	 //�Ա�
	cout << "���¹�ȣ : " << mirim.accID << endl;
	cout << "��й�ȣ : " << mirim.secID << endl;
	cout << "�̸� : " << mirim.name << endl;
	cout << "�ܾ� : " << mirim.balance << endl;

	mirim.Withdraw(300);		//���
	cout << "���¹�ȣ : " << mirim.accID << endl;
	cout << "��й�ȣ : " << mirim.secID << endl;
	cout << "�̸� : " << mirim.name << endl;
	cout << "�ܾ� : " << mirim.balance << endl;
}
*/

/*
����01
struct Account {
	char accID[20];		//���¹�ȣ
	char secID[20];		//��й�ȣ
	char name[20];		//�̸�
	int balance;			//�ܾ�
};

void Deposit(Account &acc, int money) {			//call by reference
//void Deposit(int money)	{
	acc.balance += money;
}

void Withdraw(Account *acc, int money) {		//call by pointer
	(*acc).balance -= money;
}

int main() {
	Account mirim = { "1234", "1357", "������", 1000 };
	cout << "���¹�ȣ : " << mirim.accID << endl;
	cout << "��й�ȣ : " << mirim.secID << endl;
	cout << "�̸� : " << mirim.name << endl;
	cout << "�ܾ� : " << mirim.balance << endl;

	Deposit(mirim, 100);		//�Ա�
	//mirim.Deposit(100);	   //<- �̷��� �ϸ� �Ű������� mirim�� �ʿ����
	cout << "���¹�ȣ : " << mirim.accID << endl;
	cout << "��й�ȣ : " << mirim.secID << endl;
	cout << "�̸� : " << mirim.name << endl;
	cout << "�ܾ� : " << mirim.balance << endl;

	Withdraw(&mirim, 300);		//���
	cout << "���¹�ȣ : " << mirim.accID << endl;
	cout << "��й�ȣ : " << mirim.secID << endl;
	cout << "�̸� : " << mirim.name << endl;
	cout << "�ܾ� : " << mirim.balance << endl;
}
	*/