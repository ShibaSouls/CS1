// battleship game
// Livia Coduto
// 10/26/2020

#include "battleship.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int check(const Ship ships[], Location& tmploc);

int main() {

	srand(time(nullptr));
	Ship s[fleetSize];
	initialize(s);
	deploy(s);
	char shipView;
	Ship user; 
	cout << "WELCOME TO BATTLESHIP\n";
	cout << "You can view the status of the ships or go straight to the game.\n\n";

	while (operational(s)) { 
		cout << "Would you like to see the location and status of the ships? <y or n>  ";
		cin >> shipView;

		if (shipView == 'y' || shipView == 'Y') {
			printFleet(s);
			user.loc = fire();
			int c = check(s, user.loc);

			if (c != -1) {
				sink(s[c]);
				cout << "HIT!\n\n";
			}
			else {
				cout << "MISS!\n\n";
			}

		}
		else if (shipView == 'n' || shipView == 'N') {
			user.loc = fire();
			int c = check(s, user.loc);

			if (c != -1) {
				sink(s[c]);
				cout << "HIT!\n\n";
			}
			else {
				cout << "MISS!\n\n";
			}
		}
		else {
			cout << "\nInvalid option. Please enter <y or n>\n" << endl;
		}
	}
	cout << "\nYou have sunk all enemy ships, game over!\n\n";
}
