// makes string input exactly 75 characters
// Livia Coduto
// 10/19/2020

#include <string>
#include <iostream>  
using std::cout; using std::cin; using std::endl; using std::string;

const int maxwidth = 75;

int main() {
	string s;
	int pos = -1;

	cout << "Enter string: ";
	getline(cin, s);

	if (s.length() > maxwidth) {
		cout << "String is too long, will not justify" << endl;
	}
	else {
		pos = s.find_first_of(".,?!;");

		while (pos != string::npos) {
			s.insert(pos, " ");
			pos = s.find_first_of(".,?!;", pos + 2);
		}
		if (s.length() < maxwidth && s.length()) {
			while (s.length() < 75) {
				pos = s.find_first_of(' ');

				while (pos != string::npos && s.length() < 75) {
					if (!(isspace(s[pos - 1]))) {
						s.insert(pos, " ");
					}
					pos = s.find_first_of(' ', pos + 2);
				}
			}
		}
		cout << "Your justified string is: " << s;
	}
	cin.get();
	return 0;
}