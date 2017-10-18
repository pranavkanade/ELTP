#pragma once
#include <string>
#include "Admin.h"
using namespace std;
namespace LibrarySystem{
	class Book{
		string Name;
		unsigned int BookId;
		unsigned int BookQuantity;

		void setName(string);
		void setBookId(unsigned int);
		void setBookQuantity(unsigned int);

	public:
		Book() = default;
		//Book(string, unsigned int, unsigned int);

		string getName();
		unsigned int getBookId();
		unsigned int getBookQuantity();
	};
}