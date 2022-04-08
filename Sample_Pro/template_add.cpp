#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
	return a + b;
}

int main() {
	cout << add(3, 5) << endl;
	cout << add(2.7, 4.2) << endl;

	//¹Ø¿¡²« ¸í½ÃÀû ÅÛÇÃ¸´ ÇÊ¿ä
	//cout << add('a', 'b') << endl;
	//cout << add("School", "Mirim") << endl;
}