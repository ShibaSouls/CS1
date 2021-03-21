// prints the sum of positive numbers until user inputs 0
// Livia Coduto
// 9/22/2020


#include <iostream>

using std::cout; using std::endl; using std::cin;

int main() {

    cout << "Input number, enter 0 to finish: ";
    int num;
    int posSum = 0;
    cin >> num;
    
    if (num > 0) {
        posSum += num;
    }

    while (num != 0) {
        cout << "Input number, enter 0 to finish: ";
        cin >> num;

        if (num > 0) {
            posSum += num;
        }
        else if (num == 0) {
            cout << "Sum of positive numbers is: " << posSum << endl;
        }
    }   
}
