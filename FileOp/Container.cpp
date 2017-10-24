#include "NewClass.h"
#include "Container.h"
#include <iostream>
#include <string>
#include <fstream>
#include <exception>
#include <stdexcept>

using namespace std;
using FileStream::NewContainer;
using FileStream::NewClass;

void NewContainer::readFromFile() throw (bad_alloc, exception) {
	ifstream inf;
	NewClass * nc;
	try{
		inf.open(containerFile, ios::in | ios::binary);
		nc = new NewClass();
	}
	catch (bad_alloc &ex){
		throw;
	}
	catch (exception &ex){
		throw;
	}

	inf.read((char*)nc, sizeof(NewClass));

	while (!inf.eof()){
		lst.push_back(*nc);

		//Create new Object
		nc = new NewClass();

		//read again
		inf.read((char*)nc, sizeof(NewClass));
	}	 
	inf.close();
}

void NewContainer::writeToFile() throw (exception) {
	ofstream ofs;
	try{
		ofs.open(containerFile, ios::out | ios::app | ios::binary);
	}
	catch (exception &ex){
		throw;
	}
	
	for each (NewClass obj in lst){
		ofs.write((char*)&obj, sizeof(NewClass));
	}
	ofs.close();
}

void NewContainer::display(){
	for each (NewClass obj in lst)
	{
		obj.display();
	}
}

void NewContainer::addObj(){
	int i;
	string str;
	cout << "New Object Addition : " << endl;
	cout << "i : ";
	cin >> i;
	cout << "str : ";
	fflush(stdin);
	getline(cin, str);
}