// battleship functions
// Livia Coduto
// 10/26/2020

#include "battleship.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

Location pick() {

	Location tmp;
	int tmp2;
	tmp.x = rand() % 6 + 1;
	tmp2 = rand() % 6 + 1;

	switch (tmp2) {
	case 1:
		tmp.y = 'a';
		break;
	case 2:
		tmp.y = 'b';
		break;
	case 3:
		tmp.y = 'c';
		break;
	case 4:
		tmp.y = 'd';
		break;
	case 5:
		tmp.y = 'e';
	case 6:
		tmp.y = 'f';
	};
	return tmp;
};


Location fire() {

	cout << "Enter the coordinates of your shot: ";
	Location shot;
	cin >> shot.x >> shot.y;

	return shot;
}

void printShip(const Ship& tmp) {

	cout << "X Coordinate= " << tmp.loc.x << endl << "Y Coordinate= " << tmp.loc.y;
	if (tmp.sunk == false)
		cout << " Not Sunk " << endl;
	if (tmp.sunk == true)
		cout << " Sunk ship! " << endl;
}

void sink(Ship& myShip) {
	myShip.sunk = true;
}

bool match(const Ship& tmp, const Location& tmp2) {

	if (tmp.loc.x == tmp2.x && tmp.loc.y == tmp2.y) {
		return true;
	}
	else {
		return false;
	}
}

void initialize(Ship ships[]) {

	for (int i = 0; i < fleetSize; i++) {
		ships[i].loc.x = -1;
		ships[i].loc.y = '*';
	}

}

int check(const Ship ships[], Location& tmploc) {

	for (int l = 0; l < fleetSize; l++) {
		if (ships[l].loc.x == tmploc.x) {
			if (ships[l].loc.y == tmploc.y) {
				return l;
			}
		}
	}
	return -1;
}

void deploy(Ship ships[]) {

	for (int e = 0; e < fleetSize; e++) {

		ships[e].loc = pick();
		ships[e].sunk = false;
	}
}

void printFleet(const Ship ships[]) {

	for (int d = 0; d < fleetSize; d++) {

		cout << ships[d].loc.x << " " << ships[d].loc.y;

		if (ships[d].sunk == true) {
			cout << " Sunk ship! " << endl;
		}
		else {
			cout << " Not Sunk " << endl;
		}
	}
}

bool operational(const Ship ships[]) {

	if (ships[0].sunk == true && ships[1].sunk == true && ships[2].sunk == true && ships[3].sunk == true && ships[4].sunk == true && ships[5].sunk == true) {
		return false;
	}
	else {
		return true;
	}
}