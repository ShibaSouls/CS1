// justify a chunk of text
// Livia Coduto
// 10/20/2020

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

const int maxLine = 75;

void padAfterPunct(string& input);
void padRandom(string& input);

int main() {

    srand(time(0));

    ifstream fin("unjustified.txt");
    ofstream fout("justified.txt");
    string inputLine;

    while (getline(fin, inputLine)) {

        if (inputLine.size() > 40 && inputLine.size() < maxLine) {
            padAfterPunct(inputLine);

            if (inputLine.size() < maxLine) {
                padRandom(inputLine);
            }
        }
        fout << inputLine << endl;
    }
    return 0;
}

void padAfterPunct(string& input) {

    const std::string punct = ".,?;!";

    for (char p : punct) {
        size_t pos = 0;
        while ((pos = input.find(p, pos)) != string::npos && input.size() < maxLine) {
            input.insert(++pos, " ");
        }
    }
}

void padRandom(string& input) {

    size_t pos = 0;
    while (input.size() < maxLine) {
        pos = input.find(' ', pos);

        if (pos < input.size() && pos != string::npos) {
            if (rand() & 1) {
                input.insert(pos, " ");
            }
            pos = input.find_first_not_of(' ', pos);
        }
        else {
            pos = 0;
        }
    }
}