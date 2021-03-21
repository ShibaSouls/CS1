// Takes a number and outputs the spelling in English
// Lab 2 Number Spell
// Livia Coduto
// 09/12/2020

#include <iostream>
using std::cout; using std::cin; using std::endl;

int main() {

	// inputs the number
	int number;
	cout << "Enter a number from 1-50: ";
	cin >> number;

	int singles = number % 10;
	int tens = number / 10;

	// Displays if number input is equal or greater to one but less than twenty
	if ((number >= 0) && (number <= 19)) {
		switch (number) {

		case 1:
			cout << "One";
			break;

		case 2:
			cout << "Two";
			break;

		case 3:
			cout << "Three";
			break;

		case 4:
			cout << "Four";
			break;

		case 5:
			cout << "Five";
			break;

		case 6:
			cout << "Six";
			break;

		case 7:
			cout << "Seven";
			break;

		case 8:
			cout << "Eight";
			break;

		case 9:
			cout << "Nine";
			break;

		case 10:
			cout << "Ten";
			break;

		case 11:
			cout << "Eleven";
			break;

		case 12:
			cout << "Twelve";
			break;

		case 13:
			cout << "Thirteen";
			break;

		case 14:
			cout << "Fourteen";
			break;

		case 15:
			cout << "Fifteen";
			break;

		case 16:
			cout << "Sixteen";
			break;

		case 17:
			cout << "Seventeen";
			break;

		case 18:
			cout << "Eighteen";
			break;

		case 19:
			cout << "Nineteen";
			break;

		default: cout << "Invalid number input";
			break;
		}
	}

	//Displays if number input is equal or greater to twenty up to fifty
	else if ((number >= 20) && (number <= 50)) {
		switch (tens) {

		case 2:
			cout << "Twenty ";
			break;

		case 3:
			cout << "Thirty ";
			break;

		case 4:
			cout << "Forty ";
			break;

		case 5:
			cout << "Fifty ";
			break;
		}

		//Displays if number input (example: 34) has any number other than zero in the ones digit
		switch (singles) {

		case 0:
			cout << " ";
			break;

		case 1:
			cout << "One";
			break;

		case 2:
			cout << "Two";
			break;

		case 3:
			cout << "Three";
			break;

		case 4:
			cout << "Four";
			break;

		case 5:
			cout << "Five";
			break;

		case 6:
			cout << "Six";
			break;

		case 7:
			cout << "Seven";
			break;

		case 8:
			cout << "Eight";
			break;

		case 9:
			cout << "Nine";
			break;

		default:
			cout << "Invalid number input";
		}
	}
}