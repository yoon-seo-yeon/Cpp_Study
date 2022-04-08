#include <iostream>
#include <map>
using namespace std;

class Person {
public:
	string firstname;
	string lastname;

	Person(const string& firstname, const string& lastname) {
		this->firstname = firstname;
		this->lastname = lastname;
	}

	friend class PersonLessThan;
};

class PersonLessThan {
public:
	bool operator()(const Person& p1, const Person& p2) const {
		if (p1.lastname < p2.lastname) {
			return true;
		}

		else if (p1.lastname == p2.lastname) { //���� ���ٸ�
			return p1.firstname < p2.firstname;
		}

		else {
			return false;
		}
	}
};

int main() {
	map<Person, bool, PersonLessThan> m;

	Person p1("���", "��");
	Person p2("��ȭ", "��");
	Person p3("�浿", "ȫ");
	Person p4("���ҹ�", "��");

	m[p1] = true;
	m[p2] = true;
	m[p3] = true;
	m[p4] = true;

	for (map<Person, bool>::iterator ii = m.begin(); ii != m.end(); ii++) {
		cout << ((*ii).first).firstname << ((*ii).first).lastname << endl; 
	}                                                                       
	
	return 0;
}