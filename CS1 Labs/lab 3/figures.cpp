// ask the user for figure size and then print the figures
// Livia Coduto
// 9/22/2020


#include <iostream>

using std::cout; using std::endl; using std::cin;

int main() {

	int row;
	int column;

	cout << "Input figure size: ";
	int size;
	cin >> size;

	// Square
	for (row = 1; row <= size; row++) {

		for (column = 1; column <= size; column++) {
			cout << "*";
		}
		cout << "\n";
	}

	// Diagonal 1
	for (int column = 0; column < size; ++column) {

		for (int row = 0; row < size; ++row) {

			if (row == column) {
				cout << "*";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	// Diagonal 2
	for (int row = 0; row < size; ++row) {

		for (int column = 0; column < size; ++column) {

			if (row + column == size - 1) {
				cout << "*";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	// Hollow Square
	for (int row = 0; row < size; ++row) {

		for (int column = 0; column < size; ++column) {

			if (row == 0) {
				cout << "*";
			}
			else if (column == 0) {
				cout << "*";
			}
			else if (row == size - 1) {
				cout << "*";
			}
			else if (column == size - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	// Triangle
	for (int row = 1; row <= size; row++) {

		for (int column = 1; column <= (size - row); column++) {
			cout << " ";
		}

		for (int column = 1; column <= row * 2 - 1; column++) {
		
			if (column == 1 || column == row * 2 - 1)
			{
				cout << "*";
			}

			else if (row == size)
			{
			
				cout << "*";
			}
			else
			{
			
				cout << " ";
			}

		}

		cout << endl;
	}
	return 0;
}