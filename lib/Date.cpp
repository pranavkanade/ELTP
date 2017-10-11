#include "Date.h"
#include <iostream>
#include <fstream>

using namespace std;

Date::Date(){

}

Date::Date(int day, int month, int year){
	this->day = day;
	this->month = month;
	this->year = year;
}

int Date::get_day()const{
	return this->day;
}

int Date::get_month()const{
	return this->month;
}

int Date::get_year()const{
	return this->year;
}

void Date::set_day(int day){
	this->day = day;
}

void Date::set_month(int month){
	this->month = month;
}


void Date::set_year(int year){
	this->year = year;
}

void Date::acceptDate(){
	cin >> this->day >> this->month >> this->year;
}

void Date::displayDate(){
	cout << this->day << " " << this->month << " " << this->year << endl;
}


// This works
void Date::writeDate(){
	ofstream out;
	out.open("date.dat", ios::app);

	out.write((char*)this, sizeof(*this));
	
	return;
}

void Date::readDate(){
	ifstream in;
	in.open("date.dat", ios::in | ios::binary);
	if (!in){
		cout << "File not found" << endl;
	}
	else{
		while(in.read((char*)this, sizeof(*this)))
			in.close();
	}
	return;
}

