#include "Book.h"
#include <iostream>
#include <fstream>

using namespace std;
//constructor
Book::Book(){

}

Book::Book(int bookNumber, string authorName, string bookName, int bookEdition, string bookPublisher, int pageNumber, Date dop, int bookQuantity){
	this->bookNumber = bookNumber;
	this->authorName = authorName;
	this->bookName = bookName;
	this->bookEdition = bookEdition;
	this->bookPublisher = bookPublisher;
	this->pageNumber = pageNumber;
	this->dop = dop;
	this->bookQuantity = bookQuantity;
}

int Book::getBookNumber()const{
	return this->bookNumber;
}
string Book::getAuthorName()const{
	return this->authorName;
}
string Book::getBookName()const{
	return this->bookName;
}
Date Book::getDOP()const{
	return this->dop;
}
string Book::getBookPublisher()const{
	return this->bookPublisher;
}
int Book::getPageNumber()const{
	return this->pageNumber;
}
int Book::getBookQuantity()const{
	return this->bookQuantity;
}
int Book::getBookEdition()const{
	return this->bookEdition;
}




void Book::setBookNumber(int bookNumber){
	this->bookNumber = bookNumber;
}
void Book::setAuthor(string authorName){
	this->authorName = authorName;
}
void Book::setBookName(string bookName){
	this->bookName = bookName;
}
void Book::setDOP(Date dop){
	this->dop = dop;
}
void Book::setBookPublisher(string bookPublisher){
	this->bookPublisher = bookPublisher;
}
void Book::setPageNumber(int pageNumber){
	this->pageNumber = pageNumber;
}
void Book::setBookQuantity(int bookQuantity){
	this->bookQuantity = bookQuantity;
}
void Book::setBookEdition(int bookEdition){
	this->bookEdition = bookEdition;
}

void Book::AcceptBookDetails(){
	cout << "Enter Details for new Book : " << endl;
	cout << "book num : ";
	cin >> this->bookNumber;
	//cout << "author name : ";
	//cin >> this->authorName;
	cout << "book name : ";
	cin >> this->bookName;
	cout << "book edition : ";
	cin >> this->bookEdition;
	//cout << "book publisher : ";
	//cin >> this->bookPublisher;
	//cout << "page nu : ";
	//cin >> this->pageNumber;
	//cout << endl << "Student dop (use <space>) : ";
	//this->dop.acceptDate();
	cout << "book quantity : ";
	cin >> this->bookQuantity;
}

void Book::displayBookDetails(){
	cout	<< "book name : " << this->bookName << endl
			<< "book number : " << this->bookNumber << endl
			<< "book edition : " << this->bookEdition << endl
			<< "book quantity : " << this->bookQuantity << endl;
	cout << " ------------------------------------------------ " << endl;
}
