#include <iostream>
#include <vector>
#include <string>
using namespace std;

//const int num = 5;

struct Book {
	string title;
	int grade;
};

bool Fill_List(Book& book_list) {
	cout << "책 제목 입력 : ";
	//cin >> book_list.title;
	getline(cin, book_list.title);

	if (book_list.title == "quit") return false;

	cout << "책 등급 입력 : ";
	cin >> book_list.grade;
	cin.get();

	//cout << endl << endl;

	return true;
}

void ShowList(Book& book_list) {
	cout << "책 제목 : " << book_list.title << ", ";
	cout << "책 등급 : " << book_list.grade;
	cout << endl;
}

int main() {
	vector<Book> book_list;
	Book temp;

	while (Fill_List(temp)) {
		book_list.push_back(temp);
	}

	cout << endl;

	cout << "============================" << endl;
	
	/*int num = book_list.size();
	for (int i = 0; i < num; i++) {
		cout << "책 제목 : " << book_list[i].title << ", ";
		cout << "책 등급 : " << book_list[i].grade;
		cout << endl;
	}*/

	/*for(auto& e : book_list) {
		cout << "책 제목 : " << e.title << ", ";
		cout << "책 등급 : " << e.grade;
		cout << endl;
	}*/

	vector<Book>::iterator ptr;
	for (ptr = book_list.begin(); ptr != book_list.end(); ptr++) {
		ShowList(*ptr);
	}

	//백업
	vector<Book> old_List(book_list);	 //복사생성자
	
	cout << "==old_List==" << endl;
	for(auto& e : old_List) {
		cout << "책 제목 : " << e.title << ", ";
		cout << "책 등급 : " << e.grade;
		cout << endl;
	}

	//삭제
	int num = book_list.size();
	/*
	if (num > 2) {
		book_list.erase(book_list.begin());
	}
	cout << "==book_list==" << endl;
	for (auto& e : book_list) {
		cout << "책 제목 : " << e.title << ", ";
		cout << "책 등급 : " << e.grade;
		cout << endl;
	}*/
	
	/*if (num > 2) {
		book_list.erase(book_list.end()-1);
	}
	cout << "==book_list==" << endl;
	for (auto& e : book_list) {
		cout << "책 제목 : " << e.title << ", ";
		cout << "책 등급 : " << e.grade;
		cout << endl;
	}*/
	
	if (num > 5) {
		book_list.erase(book_list.begin()+1, book_list.end());
	}
	cout << "==book_list==" << endl;
	for (auto& e : book_list) {
		cout << "책 제목 : " << e.title << ", ";
		cout << "책 등급 : " << e.grade;
		cout << endl;
	}

	//삽입
	cout << "==book_list insert==" << endl;
	book_list.insert(book_list.begin(), old_List.begin()+1, old_List.begin() + 4);
	for (auto& e : book_list) {
		cout << "책 제목 : " << e.title << ", ";
		cout << "책 등급 : " << e.grade;
		cout << endl;
	}

	//교환
	cout << "==list swap==" << endl; 
	book_list.swap(old_List);
	cout << "==book_list==" << endl;
	for (auto& e : book_list) {
		ShowList(e);
	}
	cout << "==old_List==" << endl;
	for (auto& e : old_List) {
		ShowList(e);
	}

	return 0;
}