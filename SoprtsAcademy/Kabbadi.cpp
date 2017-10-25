#include "Kabbadi.h"
using namespace std;

Kabbadi::Kabbadi(string name, string gen, string sp) : Sports(name, gen){
	/*this->getPlayerDetails().setPlayerName(name);
	this->getPlayerDetails().setPlayerGender(gen)*/; 
	this->setSpecialField(sp);
}

string Kabbadi::getSpecialField() const {
	return specialFields;
}

void Kabbadi::setSpecialField(string st){
	specialFields = st;
}

void Kabbadi::DisplayKabbadi(){
	cout << "Kabbadier Details : " << endl;
	getPlayerDetails().DisplayPlayerDetails();
	cout << "special field : " << specialFields << endl;
}