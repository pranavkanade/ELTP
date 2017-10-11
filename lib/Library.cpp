#include "Library.h"
#include <fstream>
#include <iostream>
#include <ostream>


const string filename = "library2.dat";

Library::Library(){

}

vector<Book*> Library::getBookList(){
	return bookList;
}

void Library::setBookList(vector<Book*> bl){
	// this is with the consideration that,
	// the new book list to be set wont have set of books in common with the existing list
	for (int i = 0; i < bl.size(); i++){
		this->bookList.push_back(bl[i]);
	}
}

void Library::ReadBookList(){
	ifstream in;
	in.open(filename, ios::in);
	in.seekg(0);
	Book * book = new Book();

	in.read((char*)book, sizeof(*book));
	
	while (!in.eof()){
		this->bookList.push_back(book);
		// action
		//book->displayBookDetails();
		//cout << endl;
		//checking further
		book = new Book();

		in.read((char*)book, sizeof(*book));
		
	}
	in.close();
}

void Library::WriteBookList(){
	ofstream out;
	out.open(filename, ios::app);

	for (int i = 0; i < this->bookList.size(); i++){
		out.write((char*)this->bookList[i], sizeof(*this->bookList[i]));
	}
	return;
}

void Library::ModifyBookList(Book * book){
	/*
	*/
	fstream in;
	in.open(filename, ios::in | ios::out);
	in.seekg(0);
	Book * temp_book = new Book();

	if (!in){
		cout << "File not found .. " << endl;
	}
	else{
		in.read((char*)temp_book, sizeof(*temp_book));
		while (!in.eof()){
			if (temp_book->getBookNumber() == book->getBookNumber()){
				int pos = -1*(int)sizeof(Book);
				temp_book->displayBookDetails();
				
				// writing the modified document
				in.seekp(pos, ios::cur);
				in.write((char*)book, sizeof(*book));
				
				break;
			}
			
			in.read((char*)temp_book, sizeof(*temp_book));
		}
	}
	
	in.close();

}

void Library::DeleteBookList(string){}
void Library::issueBookToStudentFromLibrary(Student, string){}
void Library::submitIssuedBookFromStudentInTheLibrary(string, string){}
void Library::read_the_student_library_card(){}

void Library::addBook(Book* book){
	this->bookList.push_back(book);
}

void Library::acceptBookList(){
	int i = 1;
	while (i == 1){
		Book * book = new Book();
		book->AcceptBookDetails();
		this->addBook(book);
		cout << "add new ? : ";
		cin >> i;
	}
}

void Library::displayBookList(){
	for (int i = 0; i < this->bookList.size(); i++){
		cout << endl;
		this->bookList[i]->displayBookDetails();
	}
}

Book* Library::getBook(int bookNumber){
	for each (Book* bptr in bookList)
	{
		if (bptr->getBookNumber() == bookNumber)
			return bptr;
	}
	return nullptr;
}