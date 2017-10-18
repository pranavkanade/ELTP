#pragma once
#include <string>
#include "Book.h"
#include <vector>
namespace LibrarySystem{
#define LIM 3
	class Student{
		int ID;
		int Qnt;
		string Name;
		vector<Book> Blist;

	public:
		Student() = default;
		Student(int, string);


	};
}