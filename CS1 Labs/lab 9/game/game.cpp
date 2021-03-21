// battleship game
// Livia Coduto
// 11/2/2020

#include "battleship.hpp"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {

	srand(time(nullptr));

	cout << "\nBATTLESHIP\n";

	Fleet myFleet;

	myFleet.deployFleet();

	cout << "\nPress [v] to view ship locations, or press any key to continue: ";
	char view;
	cin >> view;

	if (view == 'v' || view == 'V') {
		cout << "\nInitial Fleet";
		myFleet.printFleet();
	}

	while (myFleet.operational()) {
		Location shot;
		shot.fire();

		if (myFleet.isHitNSink(shot)) {
			cout << "\nHIT";
		}
		else {
			cout << "\nMISS";
		}

		if (view == 'v' || view == 'V') {
			myFleet.printFleet();
		}
	}
	cout << "\nAll ships have been sank, game over.\n";
}