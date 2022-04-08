#include <iostream>
using namespace std;

class CDelegration {
public:
	int a, b, c, d;

	CDelegration(int a) {
		printf("CDelegration 1\n");
		this->a = a;
	}

	CDelegration(int a, int b) : CDelegration(a) {
		printf("CDelegration 2\n");
		this->b = b;
	}

	CDelegration(int a, int b, int c) : CDelegration(a, b) {
		printf("CDelegration 3\n");
		this->c = c;
	}

	CDelegration(int a, int b, int c, int d) : CDelegration(a, b, c) {
		printf("CDelegration 4\n");
		this->d = d;
	}
};

int main() {
	CDelegration c(1, 2, 3, 4);

	return 0;
}