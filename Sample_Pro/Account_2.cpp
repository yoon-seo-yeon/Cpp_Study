#include <iostream>
using namespace std;

class CBank {
private :
	string name;
	string account;
	int balance;
	static int cnt;

public:
	//생성자 작성
	CBank() {
		this->name = "";
		this->account = "";
		this->balance = 0;
	}

	CBank(string name, string account, int balance) {
		this->name=name;
		this->account = account;
		this->balance = balance;
		cout << "생성" << endl;
	}

	//입금되는 금액을 출력하는 함수 작성
	void refer() {
		cout << "예금주 :  " << this->name << endl;
		cout << "계좌번호 : " << this->account << endl;
		cout << "잔액 : " << this->balance << endl;
	}
	
	~CBank() {
		this->balance = -1;
		cout << this->account << "소멸" << endl;
	}

	void deposit() {
		int money;
		cout << "입금금액 : ";
		cin >> money;

		balance += money;
	}

	void withdraw() {
		int money;
		cout << "출금금액 : ";
		cin >> money;

		balance -= money;
	}

	void account_create() {
		string name = "";
		string account_no = "";
		int balance = 0;

		cout << "이름 : ";
		cin >> name;
		cout << "계좌번호 : ";
		cin >> account_no;
		cout << "입금 금액 : ";
		cin >> balance;

		this->name = name;
		this->account = account_no;
		this->balance = balance;

		//cb[cnt++] = new CBank(name, account_no, balance);  //account_distroy에서 제거할 수 있게 동적으로 할당
		this->refer();
		//CBank cb(name, account_no, balance);
		cnt++; //대기
	}

	void account_distroy() {
		//delete cb;  //cb를 여기서 제거 할 수 ㅇ없다 그 이유는 account_create에서 만들어졌고 정적으로 만들어졌기 때문에 동적으로 해지할 수 없다
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

CBank* cb[10]; //전역 변수
int CBank::cnt = 0;

int search() {
	string account_no = "";

	cout << "계좌번호 : ";
	cin >> account_no;

	for (int i = 0; i < CBank::getCnt(); i++) {	   //찾고자 하는 계좌 찾기
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
	//1. 계좌 생성 / 2. 입금 / 3. 출금 / 4. 잔액 조회 / 5. 계좌해지 / 0. 종료
	while (1) {
		cout << "1. 계좌생성" << endl;
		cout << "2. 입금" << endl;
		cout << "3. 출금" << endl;
		cout << "4. 잔액 조회" << endl;
		cout << "5. 계좌해지" << endl;
		cout << "6. 전체 계좌 조회" << endl;
		cout << "0. 종료" << endl;

		cout << "메뉴 선택 ==> ";
		cin >> menu;

		string account_no;
		int tmp_cnt=0;
		int se_loc;

		switch (menu) {
			case 1:   //일반함수
				tmp_cnt = CBank::getCnt();	 //0
				cb[tmp_cnt] = new CBank;
				cb[tmp_cnt]->account_create();
				break;

			case 2:
				se_loc = search();
				if (se_loc != -1) cb[se_loc]->deposit();
				else cout << "계좌 번호 오류!!" << endl;
				break;
			
			case 3:
				se_loc = search();
				if (se_loc != - 1) cb[se_loc]->withdraw();
				else cout << "계좌 번호 오류!!" << endl;
				break;

			case 4:
				se_loc = search();
				if (se_loc != - 1) cb[se_loc]->refer();
				else cout << "계좌 번호 오류!!" << endl;
				break;

			case 5:	  
				se_loc = search();
				if (se_loc != - 1) {
					cb[se_loc] = nullptr;
					delete cb[se_loc];
				}
				else cout << "계좌 번호 오류!!" << endl;
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