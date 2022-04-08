#include <iostream>
using namespace std;

class Job {
public:
	char name[40];
	double salary;
	int grad;

	
};

template<typename T>
void swap_test(T& i, T& j) {
	T temp;
	temp = i;
	i = j;
	j = temp;
}

template<>
void swap_test(Job& a, Job& b) {
	int temp;
	double temp2;

	temp = a.grad;
	a.grad = b.grad;
	b.grad = temp;

	temp2 = a.salary;
	a.salary = b.salary;
	b.salary = temp2;
}

int main() {
	int i = 10, j = 20;
	cout << "i : " << i << " j : " << j << endl;

	swap_test(i, j);
	cout << "i : " << i << " j : " << j << endl;

	cout << "-----------------------------------------------------" << endl;

	Job j1 = { "Mirim", 187.2, 7 };
	Job j2 = { "Meister", 200.5, 9 };

	cout << "j1.name : " << j1.name << ", j1.salary : " << j1.salary << ", j1.grad : " << j1.grad << endl;
	cout << "j2.name : " << j2.name << ", j2.salary : " << j2.salary << ", j2.grad : " << j2.grad << endl;

	cout << "-----------------------------------------------------" << endl;

	swap_test(j1, j2);
	cout << "j1.name : " << j1.name << ", j1.salary : " << j1.salary << ", j1.grad : " << j1.grad << endl;
	cout << "j2.name : " << j2.name << ", j2.salary : " << j2.salary << ", j2.grad : " << j2.grad << endl;

	return 0;
}