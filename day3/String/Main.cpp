#include <iostream>
#include "String.h"

using namespace std;

int main(){
	String s1;
	s1.display();

	String s2("kanade");
	s2.display();

	String s3(s2);				// copy constructor
	s3.display();		
	
	s1 = s2;
	s1.display();

	return 0;
}