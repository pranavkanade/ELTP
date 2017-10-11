#pragma once

class String{
	int len;
	char * name;
public:
	String();
	~String();
	String(const char*);
	String(const String&);

	// overloaded assignment operator
	String& operator=(const String&);

	void display();

};