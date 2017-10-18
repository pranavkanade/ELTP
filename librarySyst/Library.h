#pragma once 
#include "Book.h"
#include "Admin.h"
#include "Student.h"

namespace LibrarySystem{
	class Library{
		vector<Book> BookCollection;
		vector<Student> MemberList;
		Admin LibAdmin;

	public:
		Library() = default;
		
		void AddBook();
		void IssueBookToStudent(int);
		void SubmitBookFromStudent(int);

		void DisplayBookCollection();
	};
}