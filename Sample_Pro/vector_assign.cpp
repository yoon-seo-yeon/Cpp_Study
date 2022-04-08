#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1, v2, v3;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	cout << "v1 : ";
	for (auto& e : v1) cout << e << " ";

	cout << endl;

	v2.assign(v1.begin()+3, v1.end());
	cout << "v2 : ";
	for (auto& e : v2) cout << e << " ";

	cout << endl;

	v3.assign(7, 3);
	cout << "v3 : ";
	for (auto& e : v3) cout << e << " ";

	cout << endl;

	v3.assign({ 5, 6, 7 });
	cout << "v3 : ";
	for (auto& e : v3) cout << e << " ";
}							