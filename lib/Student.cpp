#include "Student.h"
#include <iostream>
#include <fstream>
using namespace std;

Student::Student(string studentName, string studentId, Date dob, double per){
	this->studentName = studentName;
	this->studentId = studentId;
	this->dob = dob;
	this->per = per;
}

string Student::getStudentName()const{
	return this->studentName;
}

string Student::getStudentId()const{
	return this->studentId;
}
double Student::getPer()const{
	return this->per;
}
Date Student::getDate()const{
	return this->dob;
}

void Student::setStudentId(string id){
	this->studentId = id;
}
void Student::setStudentName(string name){
	this->studentName = name;
}
void Student::setPer(double per){
	this->per = per;
}
void Student::setDate(Date dob){
	this->dob = dob;
}

void Student::acceptStudentDetails(){
	cout << "Student Name : ";
	getline(cin, this->studentName);
	fflush(stdin);
	cout << endl << "Student Id : ";
	getline(cin, this->studentId);
	fflush(stdin);
	cout << endl << "Student dob (use <space>) : ";
	this->dob.acceptDate();							// accepting date you have to write the line before
	fflush(stdin);
	cout << endl << "student per : ";
	cin >> this->per;
	fflush(stdin);
}

void Student::displayStudentDetails(){
	cout << "Student's Details" << endl;
	cout << "Name : " << this->studentName << endl;
	cout << "ID : " << this->studentId << endl;
	cout << "per : " << this->per << endl;
	return;
}