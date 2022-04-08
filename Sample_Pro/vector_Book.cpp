#include <iostream>
#include <vector>
using namespace std;

const int num = 5;

struct Book{
	string title;
	int grade;
};

void Fill_List(Book& book_list);

int main() {
	vector<Book> book_list(num);

	for (int i = 0; i < num; i++) {
		Fill_List(book_list[i]);
	}

	cout << endl;

	for (int i = 0; i < num; i++) {
		cout << "책 제목 : " << book_list[i].title << ", ";
		cout << "책 등급 : " << book_list[i].grade;
		cout << endl;
	}

	return 0;
}

void Fill_List(Book& book_list) {
	cout << "책 제목 입력 : ";
	cin >> book_list.title;

	cout << "책 등급 입력 : ";
	cin >> book_list.grade;

	cout << endl<< endl;
}