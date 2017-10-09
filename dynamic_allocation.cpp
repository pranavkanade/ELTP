// allocate memory for 3*3 matrix accept it and display

#include <iostream>
//#include "dalloc.h"
using namespace std;
/*
int allocateMemory(int *mat){
	mat = new (int)(sizeof(int) * 3);


	mat[0] = 1;
	mat[1] = 2;
	cout << mat[0] << mat[1] << endl;
	clog << "test" << endl;
	return 0;
	// need to return the address of the pointer to the array
}
*/


int** newalloc(int **m){

	// in C
	// m = (int **)malloc(sizeof(int*) * 3);
	//for (int i = 0; i < 3; i++){
	//	m[i] = (int *)malloc(sizeof(int)* 3);
	//}

	m = new (int*)(new int(sizeof(int*)* 3));

	for (int i = 0; i < 3; i++)
		m[i] = new int(sizeof(int)* 3);

	int p = 0;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			m[i][j] = ++p;
			//cout << p << endl;
		}
	}

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	return m;
}

int main(){
	int **mat = NULL;
	mat = newalloc(mat);
	cout << mat[0][0] << endl;
	return 0;
}
