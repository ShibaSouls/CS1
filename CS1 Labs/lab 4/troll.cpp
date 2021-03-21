// troll game: guess the age of the troll
// Livia Coduto
// 9/29/2020

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout; using std::cin; using std::endl;

int main() {

	srand(time(nullptr));
	srand(2);

	int rand_num = rand() % 100 + 1;
	int guess;

	do {
		cout << "How old is the troll?" << endl;
		cin >> guess;

		if (guess < rand_num) {
			cout << "Wrong, he is older. How old is the troll?" << endl;
		}

		else if (guess > rand_num) {
			cout << "Wrong, he is younger. How old is the troll?" << endl;
		}

		else {
			cout << "You got it!" << endl;
		}
	}

	while (guess != rand_num); {
		return 0;
	}
}