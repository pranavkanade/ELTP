#pragma once

#include <iostream>
#include <list>
#include "NewClass.h"
#include <string>
using namespace std;

namespace FileStream{
	class NewContainer{
	private:
		list<NewClass> lst;
		string containerFile;
	public:
		NewContainer(string fn) : containerFile(fn){}

		void readFromFile();
		void writeToFile();
		void display();
		void addObj();
	};
}