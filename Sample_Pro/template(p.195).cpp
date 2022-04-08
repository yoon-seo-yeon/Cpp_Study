#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b) {
	if (a > b) return a;
	else return b;
}

int main(void) {
	cout << Max(100, 200) << "  ";
	cout << Max('A', 'B') << "  ";
	cout << Max(12.34, 56.78) << "  ";
	cout << Max("Computer", "Science") << endl;

	return 0;
}