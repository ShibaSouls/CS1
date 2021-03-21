// function implementation
// Livia Coduto
// 11/9/2020

#include "collection.hpp"
#include <iostream>

using std::cin; using std::cout; using std::endl;

void output(double* colPtr, int size) {

	for (int i = 0; i < size; ++i) {
		cout << colPtr[i] << endl;
	}
}

int check(double* colPtr, double number, int size) {

	for (int i = 0; i < size; ++i) {
		if (number == colPtr[i]) {
			return i;
		}
	}
	return -1;
}

void addNumber(double*& colPtr, double number, int& size) {

	if (check(colPtr, number, size) == -1) {

		++size;
		double* colPtr2 = new double[size];

		for (int i = 0; i < size - 1; ++i) {
			colPtr2[i] = colPtr[i];
		}

		colPtr2[size - 1] = number;

		delete[] colPtr;
		colPtr = colPtr2;
	}
}

void removeNumber(double*& colPtr, double number, int& size) {

	int index = check(colPtr, number, size);

	if (index != -1) {
		--size;
		double* colPtr2 = new double[size];
		bool found = false;

		for (int i = 0; i < size; ++i) {

			if (colPtr[i] == number) {
				found = true;
			}
			if (!(found)) {
				colPtr2[i] = colPtr[i];
			}
			else {
				colPtr2[i] = colPtr[i + 1];
			}
		}

		delete[] colPtr;
		colPtr = colPtr2;
	}
}