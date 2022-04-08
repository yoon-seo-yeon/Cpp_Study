#include <iostream>
#include <map>
using namespace std;

int main() {
	multimap<string, int> m;

	m.insert(pair<string, int>("a", 1));
	m.insert(pair<string, int>("c", 2));
	m.insert(pair<string, int>("b", 3));
	m.insert(pair<string, int>("b", 4));
	m.insert(pair<string, int>("a", 5));
	m.insert(pair<string, int>("b", 6));

	for (multimap<string, int>::iterator ii = m.begin(); ii != m.end(); ii++) {
		cout << ii->first << " " << ii->second << endl;
 	}

	cout << endl;

	cout << "a : " << m.count("a") << endl;	//2
	cout << "b : " << m.count("b") << endl;	//3
	cout << "c : " << m.count("c") << endl;	//1

	cout << endl;

	pair<multimap<string, int>::iterator, multimap<string, int>::iterator> ppp;
	ppp = m.equal_range("b");

	for (multimap<string, int>::iterator ii = ppp.first; ii != ppp.second; ii++) {
		cout << ii->first << " " << ii->second << endl;
	}

	return 0;
}