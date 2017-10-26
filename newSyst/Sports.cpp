#include "Sports.h"
#include <iostream>
using namespace std;

// getter 
Player Sports::getPlayerDetails() const{
	return playerDetails;
}

// setter
void Sports::setPlayerDetails(Player p){
	playerDetails.setPlayerName(p.getPlayerName());
}