#include "figures.hpp"
#include<iostream>

using namespace std;

void filledSquare(int n) {

	int r;
	int c;

	for (r = 1; r <= n; r++) {

		for (c = 1; c <= n; c++) {
			cout << "*";
		}
		cout << "\n";
	}

}

void hollowSquare(int n) {

	for (int r = 0; r < n; ++r) {

		for (int c = 0; c < n; ++c) {

			if (r == 0) {
				cout << "*";
			}

			else if (c == 0) {
				cout << "*";
			}

			else if (r == n - 1) {
				cout << "*";
			}

			else if (c == n - 1) {
				cout << "*";
			}

			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

void slash(int n) {

	for (int r = 0; r < n; ++r) {

		for (int c = 0; c < n; ++c) {

			if (r + c == n - 1) {
				cout << "*";
			}

			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}

void backSlash(int n) {

	for (int c = 0; c < n; ++c) {

		for (int r = 0; r < n; ++r) {

			if (r == c) {
				cout << "*";
			}

			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}

void triangle(int n) {

	for (int r = 1; r <= n; r++) {

		for (int c = 1; c <= (n - r); c++) {
			cout << " ";
		}

		for (int c = 1; c <= r * 2 - 1; c++) {

			if (c == 1 || c == r * 2 - 1) {
				cout << "*";
			}

			else if (r == n) {

				cout << "*";
			}

			else {

				cout << " ";
			}

		}
		cout << endl;
	}
}