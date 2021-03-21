// swap the values of two variables
// Livia Coduto
// 10/8/2020

#include <iostream>

using namespace std;
using std::cout; using std::endl; using std::cin;

void swapNumbers(int&, int&);

int main() {

	int numOne, numTwo, numThree;
    cout << "Enter three numbers: " << endl;
    cin >> numOne >> numTwo >> numThree;
    

    if (numOne > numTwo) {
        swapNumbers(numOne, numTwo);
    }

    else if (numOne > numThree) {
        swapNumbers(numOne, numThree);
    }

    else if (numTwo > numThree) {
        swapNumbers(numTwo, numThree);
    }
    cout << "The numbers swapped are: " << numOne << " " << numTwo << " " << numThree << endl;
}

void swapNumbers(int& left, int& right) {
    const int tmp = left;
    left = right;
    right = tmp;
}