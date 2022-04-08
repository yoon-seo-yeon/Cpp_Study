#include <iostream>
using namespace std;

class CBank {
private :
	string name;
	string account;
	int balance;
	static int cnt;

public:
	//������ �ۼ�
	CBank() {
		this->name = "";
		this->account = "";
		this->balance = 0;
	}

	CBank(string name, string account, int balance) {
		this->name=name;
		this->account = account;
		this->balance = balance;
		cout << "����" << endl;
	}

	//�ԱݵǴ� �ݾ��� ����ϴ� �Լ� �ۼ�
	void refer() {
		cout << "������ :  " << this->name << endl;
		cout << "���¹�ȣ : " << this->account << endl;
		cout << "�ܾ� : " << this->balance << endl;
	}
	
	~CBank() {
		this->balance = -1;
		cout << this->account << "�Ҹ�" << endl;
	}

	void deposit() {
		int money;
		cout << "�Աݱݾ� : ";
		cin >> money;

		balance += money;
	}

	void withdraw() {
		int money;
		cout << "��ݱݾ� : ";
		cin >> money;

		balance -= money;
	}

	void account_create() {
		string name = "";
		string account_no = "";
		int balance = 0;

		cout << "�̸� : ";
		cin >> name;
		cout << "���¹�ȣ : ";
		cin >> account_no;
		cout << "�Ա� �ݾ� : ";
		cin >> balance;

		this->name = name;
		this->account = account_no;
		this->balance = balance;

		//cb[cnt++] = new CBank(name, account_no, balance);  //account_distroy���� ������ �� �ְ� �������� �Ҵ�
		this->refer();
		//CBank cb(name, account_no, balance);
		cnt++; //���
	}

	void account_distroy() {
		//delete cb;  //cb�� ���⼭ ���� �� �� ������ �� ������ account_create���� ��������� �������� ��������� ������ �������� ������ �� ����
	}

	static int getCnt() {
		return cnt;
	}

	string getAccount() {
		return account;
	}

	string getName() {
		return name;
	}

	int getBalance() {
		return balance;
	}
};

CBank* cb[10]; //���� ����
int CBank::cnt = 0;

int search() {
	string account_no = "";

	cout << "���¹�ȣ : ";
	cin >> account_no;

	for (int i = 0; i < CBank::getCnt(); i++) {	   //ã���� �ϴ� ���� ã��
		if (account_no == cb[i]->getAccount()) {
			cout << account_no << " " << cb[i]->getAccount() << endl;
			return i;
		}
	}
	return -1;
}

void All_Search() {
	for (int i = 0; i < CBank::getCnt(); i++) {
		if (cb[i] != nullptr)
			cout << cb[i]->getName() << " " << cb[i]->getAccount() << " " << cb[i]->getBalance() << endl;
	}
}

int main() {
	int menu;
	//1. ���� ���� / 2. �Ա� / 3. ��� / 4. �ܾ� ��ȸ / 5. �������� / 0. ����
	while (1) {
		cout << "1. ���»���" << endl;
		cout << "2. �Ա�" << endl;
		cout << "3. ���" << endl;
		cout << "4. �ܾ� ��ȸ" << endl;
		cout << "5. ��������" << endl;
		cout << "6. ��ü ���� ��ȸ" << endl;
		cout << "0. ����" << endl;

		cout << "�޴� ���� ==> ";
		cin >> menu;

		string account_no;
		int tmp_cnt=0;
		int se_loc;

		switch (menu) {
			case 1:   //�Ϲ��Լ�
				tmp_cnt = CBank::getCnt();	 //0
				cb[tmp_cnt] = new CBank;
				cb[tmp_cnt]->account_create();
				break;

			case 2:
				se_loc = search();
				if (se_loc != -1) cb[se_loc]->deposit();
				else cout << "���� ��ȣ ����!!" << endl;
				break;
			
			case 3:
				se_loc = search();
				if (se_loc != - 1) cb[se_loc]->withdraw();
				else cout << "���� ��ȣ ����!!" << endl;
				break;

			case 4:
				se_loc = search();
				if (se_loc != - 1) cb[se_loc]->refer();
				else cout << "���� ��ȣ ����!!" << endl;
				break;

			case 5:	  
				se_loc = search();
				if (se_loc != - 1) {
					cb[se_loc] = nullptr;
					delete cb[se_loc];
				}
				else cout << "���� ��ȣ ����!!" << endl;
				break;

			case 6:
				All_Search();
				break;

			case 0:
				return 0;
		}
	}

	return 0;
}