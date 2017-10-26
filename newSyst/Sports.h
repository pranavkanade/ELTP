#pragma once
#include "Player.h"

class Sports{
	Player playerDetails;

public:
	Sports() = default;
	Sports(string name, string gen){
		playerDetails.setPlayerGender(gen);
		playerDetails.setPlayerName(name);
	}
	// getter 
	Player getPlayerDetails() const;

	// setter
	void setPlayerDetails(Player p);
	virtual ~Sports(){}
};