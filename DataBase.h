#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <map>
using namespace std;

struct book {
	string name = "";
	string author = "";
	int age = 0;
};


// класс База Данных
// Создает обьект база данных для хранения обьектов  book;
// функции:
// AddBook() - добавляет обьект book в контейнер vector<book> 
// ShowAllBooks() - выводит все книжки 
class DB {
public:
	ofstream fout;

	/*
	@brief
	- SetFileName - setup _fileName value
	-params - string
	-return value - void
	*/
	void SetFileName(string st);


	string  GetFileName() {
		return _fileName;
	}

	void ShowBookInfo(book b);
	void ShowAllBooks();
	void AddBook();
	
	void CreateTable() {
		fout.open(_fileName);
		fout << "Name,Author,Age\n";
	}
	void WriteInTable();

private:
	vector<book> _booksList;
	string _fileName = "books_table.csv";

};
