// function definitions
// Livia Coduto
// 11/17/2020

#include <iostream>
#include "collection.hpp"

using std::cout; using std::endl;

int Collection::check(double number) {

	for (int i = 0; i < size_; ++i) {

		if (number == col_[i]) {
			return i;
		}
	}
	return -1;
}

void Collection::addNumber(double number) {

	if (check(number) == -1) {

		++size_;
		double* col2 = new double[size_];

		for (int i = 0; i < size_ - 1; ++i) {
			col2[i] = col_[i];
		}
		col2[size_ - 1] = number;

		delete[] col_;
		col_ = col2;
	}
}

void Collection::removeNumber(double number) {

	if (check(number) != -1) {

		--size_;
		double* col2 = new double[size_];
		bool found = false;


		for (int i = 0; i < size_; ++i) {

			if (col_[i] == number) {
				found = true;
			}

			if (!(found)) {
				col2[i] = col_[i];
			}
			else {
				col2[i] = col_[i + 1];
			}
		}

		delete[] col_;
		col_ = col2;
	}
}

void Collection::output() {

	for (int i = 0; i < size_; ++i) {
		cout << col_[i] << " ";
	}
	cout << endl;
}

Collection::Collection(const Collection& obj) {

	size_ = obj.size_;
	col_ = new double[size_];

	for (int i = 0; i < size_; ++i) {
		col_[i] = obj.col_[i];
	}
}

Collection& Collection:: operator=(const Collection& obj) {

	if (this != &obj) {
		size_ = obj.size_;
		delete[] col_;
		col_ = new double[size_];

		for (int i = 0; i < size_; ++i) {
			col_[i] = obj.col_[i];
		}
	}
	return *this;
}