#include "SportsAcademy.h"
#include "Kabbadi.h"
#include "Cricket.h"
#include <iostream>
#include <map>
#include <string>
#include <typeinfo>
#include <tuple>

using namespace std;

typedef multimap<string, Sports*> mmss;
#define sa SportsAcademy
#define mp make_pair

void setNSA(mmss);

void sa::addSportsDetailsInNSA(string s, Sports* sp){
	if (s == "Kabbadi" && typeid(*sp).name() == typeid(Kabbadi).name()){
		NSA.insert(mp(s, sp));
		
	}		
	else if (s == "Cricket" && typeid(*sp).name() == typeid(Cricket).name())
		NSA.insert(mp(s, sp));
}

void sa::removeSportsDetailsFromNSA(Sports* sp, string st){
//	clog << "Hello " << endl;
	mmss::iterator nsaItr = NSA.begin();
	int i = 0;
//	clog << "Hello " << endl;
	while (nsaItr != NSA.end()){
	//	clog << "Hello " << endl;

		if (((*nsaItr).second->getPlayerDetails().getPlayerName()== st) && typeid(*(nsaItr->second)).name() == typeid(*sp).name()){
		//	clog << "Hello " << endl;
			//NSA.erase(nsaItr);
			nsaItr = NSA.erase(nsaItr);
			break;
		}
	}
	//cout << "itr : " << typeid(*nsaItr).name() << endl;
	//cout << "sp : " << typeid(*sp).name() << endl;
}

void sa::DisplaySA(){
	mmss::iterator nsaItr = NSA.begin();
	while (nsaItr != NSA.end()){
		nsaItr->second->getPlayerDetails().DisplayPlayerDetails();
		nsaItr++;
	}
}

//void sa::UpdateSportsDetailsInNSA(Sports* sptr, Sports s){
//	mmss::iterator nsaItr = NSA.begin();
//	while (nsaItr != NSA.end()){
//		if (typeid(*nsaItr).name() == typeid(*sptr).name() && (*nsaItr).second->getPlayerDetails() == sptr->getPlayerDetails()){
//			nsaItr->second->setPlayerDetails(s.getPlayerDetails());
//			break;
//		}
//		nsaItr++;
//	}
//}
//
//bool sa::searchPlayerAsPerSportsType(Sports* sptr){
//	return false;
//}
//
//bool sa::searchPlayerAsPerPlayerDetails(string name){
//	mmss::iterator nsaItr = NSA.begin();
//	while (nsaItr != NSA.end()){
//		/*if ((*nsaItr).second->getPlayerDetails() == sptr->getPlayerDetails()){
//			
//			break;
//		}*/
//		nsaItr++;
//	}
//	return false;
//}
//
//int sa::getCountOfKabbadiPlayers() const{ return 0; }
//int sa::getCountOfCricketPlayers() const{ return 0; }
int sa::getCountOfAllPlayers() const{ return NSA.size(); }
//
//void sa::writeNSA(mmss){}
//mmss sa::readNSA(){}