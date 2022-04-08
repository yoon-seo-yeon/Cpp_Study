#include <iostream>
#include <map>
using namespace std;

int main() {

	map<int, int>m;

	m.insert(pair<int, int>(8, 123));
	m.insert(pair<int, int>(9, 345));
	m.insert(pair<int, int>(7, 234));

	pair<int, int> p(6, 321);
	m.insert(p);
	m[2] = 300;
	m[4] = 400;
	m[3] = 500;

	//iterator 반복자 이용
	map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter)
		cout << "(" << (*iter).first << ", " << (*iter).second << ")" << " ";
	cout << endl;

	//참조 변수 이용
	for (auto& map1 : m)
		cout << "(" << map1.first << ", " << map1.second << ")" << " ";
	cout << endl;
	m[4] = 432;	//key에 따른 value 갱신
	for (auto& map1 : m)
		cout << "(" << map1.first << ", " << map1.second << ")" << " ";
	cout << endl;

	pair<map<int, int>::iterator, bool> pa;
	pa = m.insert(pair<int, int>(10, 30));
	if (pa.second)
		cout << "key : " << pa.first->first << ", value : " << pa.first->second << " 저장 완료!" << endl;

	else
		cout << "key 10가 이미 m에 있습니다." << endl;

	for(auto& map1 : m)
		cout << "(" << map1.first << ", " << map1.second << ")" << " ";
	cout << endl;

	pa = m.insert(pair<int, int>(10, 40));
	if (pa.second)
		cout << "key : " << pa.first->first << ", value : " << pa.first->second << " 저장 완료!" << endl;

	else
		cout << "key 10가 이미 m에 있습니다." << endl;
}