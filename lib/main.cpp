#include <iostream>
#include <string>
#include "Date.h"
#include "Library.h"
#include <vector>

using namespace std;



int main(){
	//Library lib;
	//lib.acceptBookList();
	//lib.WriteBookList();
	Library lib2;
	lib2.ReadBookList();
	lib2.displayBookList();
	
	int bookNum;
	cout << endl << "book no : ";
	cin >> bookNum;
	cout << endl;
	
	Book * book = lib2.getBook(bookNum);
	if (book != nullptr){
		book->setBookQuantity(500);
		book->displayBookDetails();
		lib2.ModifyBookList(book);
	}
	else{
		clog << "failed" << endl;
	}
	Library lib3;
	lib3.ReadBookList();
	lib3.displayBookList();
	return 0;
} 