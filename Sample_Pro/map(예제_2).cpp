#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, int> Employees;

	Employees["Mike C"] = 5234;
	Employees["Chalie M"] = 3374;
	Employees.insert(pair<string, int>("David D", 1923));
	Employees.insert(map<string, int>::value_type("John A", 7582));
	Employees.insert(make_pair("Peter Q", 5328));

	for (map<string, int>::iterator ni = Employees.begin(); ni != Employees.end(); ni++) { //오름차순 출력
		cout << (*ni).first << " " << (*ni).second << endl; //key값 순으로 출력됨
	}

	cout << endl;

	for (map<string, int>::reverse_iterator ri = Employees.rbegin(); ri != Employees.rend(); ri++) { //reverse_iterator -> 역순으로 출력
		cout << ri->first << " " << ri->second << endl; //화살표로 대체 가능
	}
}