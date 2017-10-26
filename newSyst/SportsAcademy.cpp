#include "SportsAcademy.h"
#include "Kabbadi.h"
#include "Cricket.h"
#include <iostream>
#include <map>
#include <string>
#include <typeinfo>
#include <tuple>
#include <fstream>
#include <exception>

using namespace std;

typedef multimap<string, Sports*> mmss;
#define sa SportsAcademy
#define mp make_pair


void sa::addSportsDetailsInNSA(string s, Sports* sp){
	if (s == "Kabbadi" && typeid(*sp).name() == typeid(Kabbadi).name()){
		NSA.insert(mp(s, sp));	
	}		
	else if (s == "Cricket" && typeid(*sp).name() == typeid(Cricket).name()){
		NSA.insert(mp(s, sp));
		/*cout << s << endl;
		sp->getPlayerDetails().DisplayPlayerDetails();
		cout << "inserted" << endl;*/
	}
}

void sa::removeSportsDetailsFromNSA(Sports* sp, string st){
	//clog << "Hello entry" << endl;
	mmss::iterator nsaItr = NSA.begin();
	int i = 0;
	while (nsaItr != NSA.end()){
		clog << "Hello while" << endl;
		try{
			cout << "type in remove : " << typeid(*(*nsaItr).second).name() << endl;
			if (((*nsaItr).second->getPlayerDetails().getPlayerName() == st) && typeid(*(nsaItr)->second).name() == typeid(*sp).name()){
				//clog << "Hello cond true" << endl;
				//NSA.erase(nsaItr);
				//nsaItr->second->getPlayerDetails().DisplayPlayerDetails();
				nsaItr = NSA.erase(nsaItr);
				break;
			}
			
		}
		catch (...){
			cout << "exception in remove";
		}
		nsaItr++;
	}
	//cout << "itr : " << typeid(*nsaItr).name() << endl;
	//cout << "sp : " << typeid(*sp).name() << endl;
}

void sa::DisplaySA(){
	mmss::iterator nsaItr = NSA.begin();
	while (nsaItr != NSA.end()){
		//if (nsaItr->first == "Kabbadi" && typeid(*(nsaItr->second)).name() == typeid(Kabbadi).name()){
		if (nsaItr->first == "Kabbadi"){
			static_cast<Kabbadi*>(nsaItr->second)->DisplayKabbadi();
			//k->DisplayKabbadi();
		}
		//else if (nsaItr->first == "Cricket" && typeid(*(nsaItr->second)).name() == typeid(Cricket).name()){
		else if (nsaItr->first == "Cricket"){
			 static_cast<Cricket*>(nsaItr->second)->DisplayCricket();
		}
		//nsaItr->second->getPlayerDetails().DisplayPlayerDetails();
		cout << nsaItr->first << endl;
		nsaItr++;
	}
}

//void sa::test(mmss & test){
//	mmss::iterator nsaItr = test.begin();
//	while (nsaItr != test.end()){
//		//if (nsaItr->first == "Kabbadi" && typeid(*(nsaItr->second)).name() == typeid(Kabbadi).name()){
//		if (nsaItr->first == "Kabbadi"){
//			Kabbadi * k = dynamic_cast<Kabbadi*>(nsaItr->second);
//			k->DisplayKabbadi();
//		}
//		//else if (nsaItr->first == "Cricket" && typeid(*(nsaItr->second)).name() == typeid(Cricket).name()){
//		else if (nsaItr->first == "Cricket"){
//			Cricket * k = dynamic_cast<Cricket*>(nsaItr->second);
//			k->DisplayCricket();
//		}
//		//nsaItr->second->getPlayerDetails().DisplayPlayerDetails();
//
//		nsaItr++;
//	}
//}

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
void sa::writeNSA(string filename){
	ofstream f;
	try{
		f.open(filename, ios::out);
		Kabbadi * k = nullptr;
		Cricket * c = nullptr;
		Sports * sp = nullptr;
		for (mmss::iterator o = NSA.begin(); o != NSA.end(); o++){
			f.write((char*)&(o->first), sizeof(o->first));
			if (o->first == "Kabbadi"){
				k = dynamic_cast<Kabbadi *>(o->second);
				f.write((char*)k, sizeof(Kabbadi));
			}
			else if (o->first == "Cricket"){
				c = dynamic_cast<Cricket *>(o->second);
				f.write((char*)c, sizeof(Cricket));

			}
		}
	}
	catch (...){
		cout << "exception in write" << endl;
	}
	f.close();
}

mmss sa::readNSA(string filename){
	ifstream f;
	Sports * sp = nullptr;
	
	//Cricket * c = nullptr;
	string * st = nullptr;

	mmss tempMap;
	try{
		f.open(filename, ios::in);
		//sp = new Sports();
		st = new string();

		f.read((char*)st, sizeof(*st));
		/*f.read((char*)sp, sizeof(*sp));*/
		//NSA.insert(mp(*st, sp));

		while (!f.eof()){
			//k = new Kabbadi();
			//c = new Cricket();

			if (*st == "Kabaddi"){
				Kabbadi * k = new Kabbadi();
				f.read((char*)k, sizeof(Kabbadi));
				//NSA.insert(pair<string, Sports*>());
				//addSportsDetailsInNSA(*st, k);
				//tempMap.insert(pair<string, Sports*>(*st, k));
				tempMap.insert(mp(*st, k));

				//k->DisplayKabbadi();
				//cout << "type : " << typeid(*k).name() << endl;
				//cout << typeid(*k).name() << endl;
			}
			else{
				Cricket * c = new Cricket();
				f.read((char*)c, sizeof(Cricket));	
				//NSA.insert(pair<string, Sports*>());
				//addSportsDetailsInNSA(*st, c);
				//tempMap.insert(pair<string, Sports*>(*st, c));
				tempMap.insert(mp(*st, c));
				//c->DisplayCricket();
				//cout << "type : " << typeid(*c).name() << endl;
				//cout << typeid(*c).name() << endl;
			}
			st = new string();
			f.read((char*)st, sizeof(*st));
		}
	}catch(...){
		cout << "exception in read" << endl;
	}
	f.close();

	////DisplayType(tempMap);
	//cout << "size : " << tempMap.size() << endl;
	//mmss::iterator itr = tempMap.begin();
	//int i = 1;
	//while (itr != tempMap.end()){
	//	cout << i << endl << "string type -> " << itr->first << endl;
	//	//cout << "obj type -> " << typeid(*(itr->second)).name() << endl;
	//	cout << i << endl << "string type -> " << itr->second-> << endl;

	//	itr++;
	//}
	return tempMap;
}

void SportsAcademy::setNSA(mmss tempNSA){
	/*mmss::iterator itr = tempNSA.begin();
	while (itr != tempNSA.end())
	{
		
		NSA.insert(*itr);
		itr++;
	}*/
	NSA = tempNSA;
}

void SportsAcademy::DisplayType(){
	mmss tempnsa = NSA;
	cout << "size : " << tempnsa.size() << endl;
	mmss::iterator itr = tempnsa.begin(); 
	int i = 1;
	while (itr != tempnsa.end()){
		cout << i << endl << "string type -> " << itr->first << endl;
		cout << "obj type -> " << typeid(*(itr->second)).name() << endl;
		itr++;
	}
}