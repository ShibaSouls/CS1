// asks the user to input numbers to add/remove from the array and then prints contents
// Livia Coduto
// 11/25/2020

#include <iostream>
#include "collection.hpp"

using std::cout; using std::endl; using std::cin;

int main() {

	Collection userInput;
	char operation;
	double number;

	cout << "enter operation [a/r/q] and number: ";
	cin >> operation;

	while (operation != 'q' && operation != 'Q') {
		cin >> number;

		if (operation == 'a' || operation == 'A') {
			userInput.addNumber(number);
		}

		else if (operation == 'r' || operation == 'R') {
			userInput.removeNumber(number);
		}

		else {
			cout << "Duplicate! Please enter a different number.";
		}

		userInput.output();

		cout << "enter operation [a/r/q] and number: ";
		cin >> operation;
	}
}