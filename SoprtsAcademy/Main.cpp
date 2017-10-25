#include <iostream>
#include "Sports.h"
#include "SportsAcademy.h"
#include "Cricket.h"
#include "Kabbadi.h"

using namespace std;

int main(){

	int i = -1;
	SportsAcademy SA;
	while (i != 0){
		cout << "op : ";
		cin >> i;
		switch (i)
		{
		case 1:
		{
				  Kabbadi* k1 = new Kabbadi("Sandeep", "M", "allRounder");
				  //k1->DisplayKabbadi();

				  SA.addSportsDetailsInNSA("Kabbadi", k1);

				  Kabbadi* k2 = new Kabbadi("Rinku", "M", "allRounder");
				  SA.addSportsDetailsInNSA("Kabbadi", k2);
				  cout << SA.getCountOfAllPlayers() << endl;
				  SA.removeSportsDetailsFromNSA(k1, "Sandeep");
				  cout << SA.getCountOfAllPlayers() << endl;
				  break;
		}
		case 2:
			SA.DisplaySA();
			break;
		default:
			break;
		}
		

		
		
	}
	
}