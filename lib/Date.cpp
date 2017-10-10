#include "Date.h"

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