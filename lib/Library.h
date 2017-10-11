#include "Book.h"
#include "Student.h"
#include <vector>
using namespace std;

class Library{
	vector<Book> bookList;

public:
	vector<Book> getBookList();
	void setBookList(vector<Book>);		// rem

	void ReadBookList();
	void WriteBookList(vector<Book>);		
	void ModifyBookList(Book);
	void DeleteBookList(string);
	void issueBookToStudentFromLibrary(Student, string);
	void submitIssuedBookFromStudentInTheLibrary(string, string);
	void read_the_student_library_card();

};