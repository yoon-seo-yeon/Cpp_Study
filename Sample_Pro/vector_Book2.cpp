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
	cout << "å ���� �Է� : ";
	//cin >> book_list.title;
	getline(cin, book_list.title);

	if (book_list.title == "quit") return false;

	cout << "å ��� �Է� : ";
	cin >> book_list.grade;
	cin.get();

	//cout << endl << endl;

	return true;
}

void ShowList(Book& book_list) {
	cout << "å ���� : " << book_list.title << ", ";
	cout << "å ��� : " << book_list.grade;
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
		cout << "å ���� : " << book_list[i].title << ", ";
		cout << "å ��� : " << book_list[i].grade;
		cout << endl;
	}*/

	/*for(auto& e : book_list) {
		cout << "å ���� : " << e.title << ", ";
		cout << "å ��� : " << e.grade;
		cout << endl;
	}*/

	vector<Book>::iterator ptr;
	for (ptr = book_list.begin(); ptr != book_list.end(); ptr++) {
		ShowList(*ptr);
	}

	//���
	vector<Book> old_List(book_list);	 //���������
	
	cout << "==old_List==" << endl;
	for(auto& e : old_List) {
		cout << "å ���� : " << e.title << ", ";
		cout << "å ��� : " << e.grade;
		cout << endl;
	}

	//����
	int num = book_list.size();
	/*
	if (num > 2) {
		book_list.erase(book_list.begin());
	}
	cout << "==book_list==" << endl;
	for (auto& e : book_list) {
		cout << "å ���� : " << e.title << ", ";
		cout << "å ��� : " << e.grade;
		cout << endl;
	}*/
	
	/*if (num > 2) {
		book_list.erase(book_list.end()-1);
	}
	cout << "==book_list==" << endl;
	for (auto& e : book_list) {
		cout << "å ���� : " << e.title << ", ";
		cout << "å ��� : " << e.grade;
		cout << endl;
	}*/
	
	if (num > 5) {
		book_list.erase(book_list.begin()+1, book_list.end());
	}
	cout << "==book_list==" << endl;
	for (auto& e : book_list) {
		cout << "å ���� : " << e.title << ", ";
		cout << "å ��� : " << e.grade;
		cout << endl;
	}

	//����
	cout << "==book_list insert==" << endl;
	book_list.insert(book_list.begin(), old_List.begin()+1, old_List.begin() + 4);
	for (auto& e : book_list) {
		cout << "å ���� : " << e.title << ", ";
		cout << "å ��� : " << e.grade;
		cout << endl;
	}

	//��ȯ
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