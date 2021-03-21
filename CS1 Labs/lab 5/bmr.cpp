// calculate BMR and how many donuts a person can consume
// Livia Coduto
// 10/5/2020

#include <iostream>

using std::cin; using std::cout; using std::endl;

const int calories = 195;

double bmrWomen(int weight, int height, int years);
double bmrMen(int weight, int height, int years);
int numDonuts(double bmr);
int heightConvert(int feet, int inches);
char genderConvert(char gender);
int bmrWomenCalc();
int bmrMenCalc();

int main() {

	cout << "Enter your gender (M or F): " << endl;
	char gender;
	cin >> gender;
	gender = genderConvert(gender);

	if (gender == 'f') {
		bmrWomenCalc();
	}

	else if (gender == 'm') {
		bmrMenCalc();
	}

	else {
		cout << "Invalid entry, program will end." << endl;
	}
	return 0;
}

double bmrWomen(int weight, int height, int years) {
	return 655 + (4.3 * weight) + (4.7 * height) - (4.7 * years);
}

double bmrMen(int weight, int height, int years) {
	return 66 + (6.3 * weight) + (12.9 * height) - (6.8 * years);
}

int numDonuts(double bmr) {
	return floor (bmr / calories);
}

int heightConvert(int feet, int inches) {
	return(feet * 12) + inches;
}

char genderConvert(char gender) {

	if (gender == 'f' || gender == 'F') {
		return 'f';
	}

	else if (gender == 'm' || gender == 'M') {
		return 'm';
	}

	else {
		return 'x';
	}
}

int bmrMenCalc() {

	int weight;
	int feet;
	int inches;
	int years;

	cout << "Enter your weight in pounds: " << endl;
	cin >> weight;

	cout << "Enter your height in feet and inches: " << endl;
	cin >> feet >> inches;

	cout << "Enter your age in years: " << endl;
	cin >> years;

	int height;
	height = heightConvert(feet, inches);

	double bmr;
	bmr = bmrMen(weight, height, years);

	int donuts;
	donuts = numDonuts(bmr);
	cout << "Your BMR is: " << bmr << endl;
	cout << "You can eat " << donuts << " donuts per day" << endl;
	return 0;
}

int bmrWomenCalc() {

	int weight;
	int feet;
	int inches;
	int years;

	cout << "Enter your weight in pounds: " << endl;
	cin >> weight;

	cout << "Enter your height in feet and inches: " << endl;
	cin >> feet >> inches;

	cout << "Enter your age in years: " << endl;
	cin >> years;

	int height;
	height = heightConvert(feet, inches);

	double bmr;
	bmr = bmrWomen(weight, height, years);

	int donuts;
	donuts = numDonuts(bmr);
	cout << "Your BMR is: " << bmr << endl;
	cout << "You can eat " << donuts << " donuts per day" << endl;
	return 0;
}