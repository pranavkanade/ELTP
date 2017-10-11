#include "Date.h"
#include <string>
using namespace std;
#pragma once

class Book{
	int bookNumber;
	string authorName;
	string bookName;
	int bookEdition;
	string bookPublisher;
	int pageNumber;
	Date dop;
	int bookQuantity;


public:
	Book();
	Book(int, string, string, int, string, int, Date, int);

	int getBookNumber()const;
	string getAuthorName()const;
	string getBookName()const;
	Date getDOP()const;
	string getBookPublisher()const;
	int getPageNumber()const;
	int getBookQuantity()const;
	int getBookEdition()const;

	void setBookNumber(int);
	void setAuthor(string);
	void setBookName(string);
	void setDOP(Date);
	void setBookPublisher(string);
	void setPageNumber(int);
	void setBookQuantity(int);
	void setBookEdition(int);

	void AcceptBookDetails(int, string, string, int, string, int, Date, int);
	void displayBookDetails();
};