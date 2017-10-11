#include "Book.h"
#include "Student.h"
#include <vector>
using namespace std;

class Library{
	// use following it works
	vector<Book*> bookList;
	vector<Student*> studentList;
	// can create another object to create an index of books

public:
	Library();
	vector<Book*> getBookList();
	void setBookList(vector<Book*>);		// rem

	void ReadBookList();
	void WriteBookList();		
	void ModifyBookList(Book*);
	void DeleteBookList(string);
	void issueBookToStudentFromLibrary(Student, string);
	void submitIssuedBookFromStudentInTheLibrary(string, string);
	void read_the_student_library_card();
	
	void acceptBookList();
	void displayBookList();
	void addBook(Book*);
	Book* getBook(int);
};