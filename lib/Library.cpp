#include "Library.h"
#include <fstream>
#include <iostream>


vector<Book> Library::getBookList(){
	return bookList;
}

void Library::setBookList(vector<Book> bl){}

void Library::ReadBookList(){
	ifstream in;
	in.open("library.dat", ios::in);
	Book book;

	in.read((char*)&book, sizeof(book));

	while (!in.eof()){
		this->bookList.push_back(book);
		// action

		//checking further
		in.read((char*)&book, sizeof(book));
	}
}

void Library::WriteBookList(vector<Book> bl){
	ofstream out;
	out.open("library.dat", ios::app);

	for (int i = 0; i < bl.size(); i++){
		out.write((char*)&bl[i], sizeof(bl[i]));
	}
	return;
}

void Library::ModifyBookList(Book){}
void Library::DeleteBookList(string){}
void Library::issueBookToStudentFromLibrary(Student, string){}
void Library::submitIssuedBookFromStudentInTheLibrary(string, string){}
void Library::read_the_student_library_card(){}