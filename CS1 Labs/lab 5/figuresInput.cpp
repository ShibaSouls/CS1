// figures - squares, slash, backslash, and triangle
// Livia Coduto
// 10/6/2020

#include "figures.hpp"
#include<iostream>

using namespace std;

void filledSquare(int);
void hollowSquare(int);
void slash(int);
void backSlash(int);
void triangle(int);

int main() {

	int s = 0;
	while (s <= 4) {

		cout << "1. square" << endl;
		cout << "2. slash" << endl;
		cout << "3. backslash" << endl;
		cout << "4. triangle" << endl;
		cout << "select figure: " << endl;
		int s;
		cin >> s;

		if (s == 1) {

			cout << "select size: " << endl;
			int n;
			cin >> n;

			cout << "filled, hollow [f/h]: " << endl;
			char squareStyle;
			cin >> squareStyle;

			if (squareStyle == 'f') {

				filledSquare(n);
			}

			else if (squareStyle == 'h') {

				hollowSquare(n);
			}

			else {
				cout << "Invalid square style chosen." << endl;
			}
		}

		if (s == 2) {

			cout << "select size: " << endl;
			int n;
			cin >> n;

			slash(n);
		}

		if (s == 3) {

			cout << "select size: " << endl;
			int n;
			cin >> n;

			backSlash(n);
		}

		if (s == 4) {

			cout << "select size: " << endl;
			int n;
			cin >> n;

			triangle(n);
		}
	}
}