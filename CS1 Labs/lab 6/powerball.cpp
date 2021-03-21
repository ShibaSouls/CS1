// lottery - user wins if at least one input number matches the lottery numbers
// Livia Coduto
// 10/8/2020

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout; using std::endl; using std::cin;

void assign(int[], int Size);
void draw(int, int[]);
bool check(int, const int[], int);
void printOut(const int[], int);
void entry(int &);

int main() {

	srand(time(nullptr));
	const int arraySize = 10;
	int user[arraySize];
	cout << "See if you've won the Powerball this week!" << endl;

	int wins[arraySize];
	int userInput;

	entry(userInput);
	assign(wins, arraySize);
	draw(arraySize, wins);

	const bool win = check(userInput, wins, arraySize);

	if (win) {

		cout << "You won, congratulations!" << endl;
		printOut(wins, arraySize);
	}
}

void assign(int wins[], int Size) {
	for (int i = 0; i < Size; ++i) {
		wins[i] = 0;
	}
}

void draw(int arraySize, int wins[]) {
	int count = 0;

	while (count < arraySize) {

		int number = rand() % 100 + 1;

		if (!check(number, wins, arraySize)) {
			wins[count] = number;
			count++;
		}
	}
}

bool check(int number, const int wins[], int arraySize) {
	for (int i = 0; i < arraySize; i++) {

		if (wins[i] == number) {
			return true;
		}
	}
	return false;
}

void entry(int &userInput) {
	int i;
	cout << "Enter your 5 lottery numbers: ";
	cin >> userInput;
}

void printOut(const int wins[], int Size) {
	cout << "The winning numbers are: " << endl;
	for (int i = 0; i < Size;  ++i) {
		cout << wins[i] << " ";
	}
}