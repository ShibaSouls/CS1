// calculates several mathematical operations
// Livia Coduto
// 9/29/20

#include <iostream>
#include <cmath>

using std::cout; using std::endl; using std::cin;

int main() {

	int operation = 0;
	while (operation <= 4) {

		cout << "1. absolute value" << endl;
		cout << "2. square root" << endl;
		cout << "3. floor" << endl;
		cout << "4. power" << endl;
		cout << "select an operation:" << endl;
		int operation;
		cin >> operation;

		int base;

		if (operation == 1) {
			cout << "enter number: " << endl;
			cin >> base;
			cout << "the result is: " << abs(base) << endl;
		}

		else if (operation == 2) {
			cout << "enter number: " << endl;
			cin >> base;
			cout << "the result is: " << sqrt(base) << endl;
		}

		else if (operation == 3) {
			cout << "enter number: " << endl;
			float base;
			cin >> base;
			cout << "the result is: " << floor(base) << endl;
		}

		else if (operation == 4) {
			cout << "enter base: " << endl;
			cin >> base;
			int expo;
			cout << "enter exponent: " << endl;
			cin >> expo;
			cout << "the result is: " << pow(base, expo) << endl;
		}

		else {
			cout << "Invalid operation choice, program ended" << endl;
			break;
		}
	}
}