#pragma once
#include "Book.h"
using namespace std;
namespace LibrarySystem{
	class Admin{
	public:
		Admin() = default;

		void UpdateBook_Quantity(Book &, unsigned int qnt);
		void IssueBook(Book &);
	};
}