#include "DataBase.h"

/*
*/
void DB::WriteInTable() {
	CreateTable();
	fout << _booksList[0].name << "\n" << _booksList[0].author << "," << _booksList[0].age << "\n";
}

/*
*/
void DB::AddBook() {
	book tmpBook;
	cout << "\nInput yr book:\n\t-Name of book: ";
	//cin.clear();
	//fflush(stdin);
	//getline(cin, tmpBook.name);
	cin >> tmpBook.name;
	//	cin.clear();
	//	fflush(stdin);
	cout << "\t-Author: ";
	//	getline(cin, tmpBook.author);
	cin >> tmpBook.author;

	//	cin.clear();
	//	fflush(stdin);
	cout << "\t-Year of write: ";
	cin >> tmpBook.age;
	_booksList.push_back(tmpBook);
}

void DB::ShowBookInfo(book b) {
	cout << "-Book name: " << b.name << "\n-Book author: " << b.author;
	cout << "\n-Book age: " << b.age << endl;
}
void DB::ShowAllBooks() {
		cout << "------------------------------\n";
		int i = 0;
		for (book b : _booksList)
		{
			cout << i++ << ") \n";
			ShowBookInfo(b);
			cout << "---------------\n";
		}
}
/*
@brief
- SetFileName - setup _fileName value
-params - string 
-return value - void
*/
void DB::SetFileName(string st) {
	_fileName = st;
}
