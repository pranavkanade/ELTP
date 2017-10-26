#include "Cricket.h"
#include <iostream>
using namespace std;

Cricket::Cricket(string name, string gen, string sp): Sports(name, gen){
	this->setSpecialField(sp);
}

string Cricket::getSpecialField() const {
	return specialFields;
}

void Cricket::setSpecialField(string st){
	specialFields = st;
}

void Cricket::DisplayCricket(){
	//cout << "Cricketer Details : " << endl;
	getPlayerDetails().DisplayPlayerDetails();
	cout << "special field : " << specialFields << endl;
	cout << "----------------------" << endl;
}

//Cricket::Cricket(Cricket * c) : Sports(c->getPlayerDetails().getPlayerName(), c->){
//
//}