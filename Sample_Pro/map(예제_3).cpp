#include <iostream>
#include <map>
using namespace std;

class AAA {
public:
	int x, y;
	float z;
};

ostream& operator<<(ostream& out, AAA &a) {
	out << a.x << " " << a.y << " " << a.z << endl;
	return out;
}

int main() {
	map<string, AAA> m;

	AAA aobj;
	aobj.x = 7;
	aobj.y = 2;
	aobj.z = 1.234;
	m["C"] = aobj;

	aobj.x = 5;
	m["B"] = aobj;

	aobj.x = 4;
	aobj.y = 8;
	aobj.z = 7.234;
	m["D"] = aobj;

	for (map<string, AAA>::iterator ni = m.begin(); ni != m.end(); ni++) { 
		cout << ni->first << " " << ni->second << endl; 
	}
}