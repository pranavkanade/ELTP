#include <iostream>
#include "Sports.h"
#include "SportsAcademy.h"
#include "Cricket.h"
#include "Kabbadi.h"
#include <string>

using namespace std;

int main(){
	string filename = "data1.dat";
	int i = -1;
	SportsAcademy SA; // = new SportsAcademy();
	Kabbadi k;
	Cricket c;
	while (i != 0){
		cout << "OPTION" << endl
			<< "0. Exit" << endl
			<< "1. Insert" << endl
			<< "2. Display" << endl
			<< "3. Remove" << endl
			<< "--------------------------------------" << endl;

		cout << "op : ";
		cin >> i;
		cout << "--------------------------------------" << endl;

		switch (i)
		{
		case 1:
		{
				  //Kabbadi * k1;
				  //
				  //k1 = new Kabbadi("Rinku", "M", "allRounder");
				  //SA.addSportsDetailsInNSA("Kabbadi", k1);

				  //k1 = new Kabbadi("Sandeep", "M", "allRounder");
				  //SA.addSportsDetailsInNSA("Kabbadi", k1);

				  //k1 = new Kabbadi("Mangit", "M", "Defender");
				  //SA.addSportsDetailsInNSA("Kabbadi", k1);

				  //k1 = new Kabbadi("Somya", "F", "Raider");
				  //SA.addSportsDetailsInNSA("Kabbadi", k1);

				  //Cricket *c1;
				  //c1 = new Cricket("Utkarsha", "F", "Wicket Keeper");
				  //SA.addSportsDetailsInNSA("Cricket", c1);

				  //c1 = new Cricket("Ayush", "M", "Spiner");
				  //SA.addSportsDetailsInNSA("Cricket", c1);

				  //c1 = new Cricket("Tanaya", "F", "Opening Batsman");
				  //SA.addSportsDetailsInNSA("Cricket", c1);

				  
				  mmss testnsa = SA.readNSA(filename);
				  SA.setNSA(testnsa);
				  cout << SA.getCountOfAllPlayers() << endl;
				  break;
		}
		case 2:
			SA.DisplayType();
			SA.DisplaySA();
			cout << "total count : " << SA.getCountOfAllPlayers() << endl;
			//SA.writeNSA(filename);
			break;
		case 3:
			SA.removeSportsDetailsFromNSA(&k, "Somya");
			break;
		default:
			break;
		}
	}
	
}