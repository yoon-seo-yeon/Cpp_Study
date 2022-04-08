#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int, string> Employees;

	Employees[5234] = "Mike C";
	Employees[3374] = "Chalie M";
	Employees[1923] = "David D";
	Employees[7582] = "John A";
	Employees[5328] = "Peter Q";

	cout << Employees[3374] << endl;	//Chalie M
	cout << Employees.size() << endl;	//5

	//map<int, string>::iterator ni;
	for (map<int, string>::iterator ni = Employees.begin(); ni != Employees.end(); ni++) { //오름차순 출력
		cout << (*ni).first << " " << (*ni).second << endl; //key값 순으로 출력됨
	}

	cout << endl;

	for (map<int, string>::reverse_iterator ri = Employees.rbegin(); ri != Employees.rend(); ri++) { //reverse_iterator -> 역순으로 출력
		cout << ri->first << " " << ri->second << endl; //화살표로 대체 가능
	}
}