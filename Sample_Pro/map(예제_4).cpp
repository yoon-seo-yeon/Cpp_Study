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

		else if (p1.lastname == p2.lastname) { //성이 같다면
			return p1.firstname < p2.firstname;
		}

		else {
			return false;
		}
	}
};

int main() {
	map<Person, bool, PersonLessThan> m;

	Person p1("흥부", "연");
	Person p2("장화", "배");
	Person p3("길동", "홍");
	Person p4("개소문", "연");

	m[p1] = true;
	m[p2] = true;
	m[p3] = true;
	m[p4] = true;

	for (map<Person, bool>::iterator ii = m.begin(); ii != m.end(); ii++) {
		cout << ((*ii).first).firstname << ((*ii).first).lastname << endl; 
	}                                                                       
	
	return 0;
}