#include <iostream>
#include <string>

using namespace std;

string * allocMem(string * st){
	st = new string[4];
	return st;
}

// without returning the pointer
void allocMem2(string **st){
	*st = new string[4];
}

/*
	// In C
	#include <stdio.h>
	#include <malloc.h>
	#include 
char ** Memory_alloc(char ** name){
	name = (char**)malloc(sizeof(char*)*3);

	for(int i = 0; i < 3; i++){
		*(name+i) = (char*)malloc(sizeof(char) * 15);
	}
	return name;
}

// to read string
gets_s(name[i] , 15);

// to write string
printf("\n%s", t[i][j]);

main(){
	char **name_list = NULL;
}

p*/

void acceptArr(string * st){
	cout << "input(4) String type :" << endl;
	for (int i = 0; i < sizeof(st); i++)
		cin >> st[i];
}

void dispArr(string * st){
	cout << "Friend List : " << endl;
	for (int i = 0; i < sizeof(st); i++)
		cout << st[i] << endl;
}

int main7(){
	string * str = nullptr;
//	str = allocMem(str);
	allocMem2(&str);

	acceptArr(str);
	dispArr(str);
	
	return 0;
}
