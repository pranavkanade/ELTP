#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace FileStream{
	class NewClass{
		int i;
		string str;

	public:
		NewClass() = default;
		NewClass(int i, string str) : i(i), str(str){
		}

		int getI() const { return i; }
		string getStr() const { return str; }
		void setI(int newI) { i = newI; }
		void setStr(string newStr) { str = newStr; }

		void display(){
			cout << endl << "i : " << i;
			cout << endl << "str : " << str;
			cout << endl;
		}
	};
}