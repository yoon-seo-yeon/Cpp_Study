#include <iostream>
#include <vector>
#include <algorithm> //for_each를 쓰고싶다면 써야됨
using namespace std;

void Show(const int &item) {
	cout << item << " ";
}

int main() {
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//초기 버전
	vector<int>::iterator ptr1;
	cout << "초기버전" << endl;
	for (ptr1 = v.begin(); ptr1 != v.end(); ptr1++) {
		//cout << *ptr1 << " ";
		Show(*ptr1);
	}
	cout << endl << endl;

	//버전 1
	cout << "버전 1" << endl;
	for (auto ptr2 = v.begin(); ptr2 != v.end(); ptr2++) {
		//cout << *ptr2 << " ";
		Show(*ptr2);
	}
	cout << endl << endl;

	//버전 2
	cout << "버전 2" << endl;
	for (auto& ptr3 : v) {
		//cout << ptr3 << " ";
		Show(ptr3);
	}
	cout << endl << endl;

	cout << "for_each" << endl;
	for_each(v.begin()+2, v.end(), Show);

	return 0;
}