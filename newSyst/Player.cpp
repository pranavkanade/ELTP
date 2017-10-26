#include <iostream>
#include "Player.h"
using namespace std;

Player::Player(string name, string gender){
	PlayerName = name;
	Gender = gender;
}

string Player::getPlayerName() const{
	return PlayerName;
}

void Player::setPlayerName(string name){
	PlayerName = name;
}

string Player::getPlayerGender() const{
	return Gender;
}

void Player::setPlayerGender(string gender){
	Gender = gender;
}

void Player::DisplayPlayerDetails() const{
	
	cout << "Name : " << PlayerName;
	cout << endl << "Gender : " << Gender << endl;

	return;
}

bool Player::operator==(Player & p){
	if (p.getPlayerName() == PlayerName && p.getPlayerGender() == Gender)
		return true;
	return false;
}

void Player::operator=(Player& p){
	setPlayerName(p.getPlayerName());
	setPlayerGender(p.getPlayerGender());
}