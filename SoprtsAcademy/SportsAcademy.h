#pragma once
#include <iostream>
#include "Sports.h"
#include "Player.h"
#include <map>
#include <string>

using namespace std;
typedef multimap<string, Sports*> mmss;

class SportsAcademy{
private:
	// to accept different type of sports like cricket and kabbadi
	mmss NSA;
public:
	void setNSA(mmss);

	void addSportsDetailsInNSA(string, Sports*);
	void removeSportsDetailsFromNSA(Sports*, string);
	void UpdateSportsDetailsInNSA(Sports*, Sports);

	bool searchPlayerAsPerSportsType(Sports*);
	bool searchPlayerAsPerPlayerDetails(string);

	int getCountOfKabbadiPlayers() const;
	int getCountOfCricketPlayers() const;
	int getCountOfAllPlayers() const;

	void writeNSA(mmss);
	mmss readNSA();
	void DisplaySA();

	// virtual destructor
	virtual ~SportsAcademy(){

	}
};