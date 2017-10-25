#include "Cricket.h"
using namespace std;

Cricket::Cricket(string name, string gen, string sp){
	this->getPlayerDetails().setPlayerName(name);
	this->getPlayerDetails().setPlayerGender(gen);
	this->setSpecialField(sp);
}

string Cricket::getSpecialField() const {
	return specialFields;
}

void Cricket::setSpecialField(string st){
	specialFields = st;
}

void Cricket::DisplayCricket(){
	cout << "Cricketer Details : " << endl;
	getPlayerDetails().DisplayPlayerDetails();
	cout << "special field : " << specialFields << endl;
}