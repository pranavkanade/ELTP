#include "Date.h"
#include <string>
using namespace std;
#pragma once

class Student{
	string studentName;
	string studentId;
	Date dob;
	double per;

public:
	Student();
	Student(string, string, Date, double);

	string getStudentName()const;
	string getStudentId()const;
	double getPer()const;
	Date getDate()const;

	void setStudentId(string);
	void setStudentName(string);
	void setPer(double);
	void setDate(Date);

	void acceptStudentDetails();
	void displayStudentDetails();

};