// the program attempts to sort three integers
// in increasing order
// Livia Coduto
// 9/8/2020

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

    // inputs the numbers
    cout << "Enter three numbers: ";
    int x, y, z;
    cin >> x >> y >> z;

    int tmp;

    // orders x and y
    if (x > y) {
        tmp = x;
        x = y;
        y = tmp;
    }

    // orders x and z
    if (x > z) {
        tmp = x;
        x = z;
        z = tmp;
    }

    // orders y and z
    if (y > z) {
        tmp = y;
        y = z;
        z = tmp;
    }

    // outputs the sorted numbers
    cout << "The sorted numbers are: ";
    cout << x << " " << y << " " << z << endl;
}