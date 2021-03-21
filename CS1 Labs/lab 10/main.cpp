// add/remove double numbers from collection
// Livia Coduto
// 11/9/2020

#include "collection.hpp"
#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	int size = 0;
	double* a = new double[size];
	char op;
	double number;

	cout << "enter operation [a/r/q] and number: ";
	cin >> op;

	while (op != 'q' && op != 'Q') {

		cin >> number;

		if (op == 'a') {
			addNumber(a, number, size);
		}
		else if (op == 'r') {
			removeNumber(a, number, size);
		}

		output(a, size);

		cout << "enter operation [a/r/q] and number: ";
		cin >> op;
	}
	delete[] a;
}