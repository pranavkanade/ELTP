#include <iostream>
#include "String.h"

using namespace std;

// Default Constructor
String::String(){
	name = nullptr;
	name = new char;
	*name = '\0';
	len = 0;
}

// Parameterized Constructor
String::String(const char * nm){
	len = strlen(nm);
	name = new char[len + 1];
	strcpy_s(name, len + 1, nm);
}

//destructor
String::~String(){
	delete[]name;
}

// copy constructor (creates Deep Copy)
String::String(const String & s){
	len = strlen(s.name);
	name = new char[len + 1];

	strcpy_s(name, len + 1, s.name);
}


// overloaded assignment operator
String& String::operator=(const String&s){
	if (s.name == '\0')
		return *this;
	else{
		delete[]name;	// if not done it leaks memory
		name = new char[strlen(s.name) + 1];
		strcpy_s(name, len + 1, s.name);
	}
	return *this;
}

void String::display(){
	cout << "len : " << this->len << endl
		<< "name : " << this->name << endl;
}