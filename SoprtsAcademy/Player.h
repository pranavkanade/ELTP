#pragma once

#include <iostream>
#include <string>
using namespace std;

class Player{
	string PlayerName;
	string Gender;

public:
	Player() = default;
	Player(string name, string gender);

	string getPlayerName() const;
	void setPlayerName(string name);
	string getPlayerGender() const;
	void setPlayerGender(string gender);

	void DisplayPlayerDetails() const;

	bool operator==(Player&);
	void operator=(Player&);
};