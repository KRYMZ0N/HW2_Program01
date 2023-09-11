// HW2_Program01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;
int main()
{ 
	int input;
	int twenty = 0;
	int ten = 0;
	int five = 0;
	int one = 0;
	cout << "Enter a Dollar Amount!: ";
	cin >> input;

	if (input >= 20) {
		twenty = input/20;
		input = input - (twenty * 20);
	}

	if (input >= 10) {
		ten = input / 10;
		input = input - (ten * 10);
	}

	if (input >= 5) {
		five = input / 5;
		input = input - (five * 5);
	}

	if (input >= 1) {
		one = input;
	}

	cout << "$20 bills: " + twenty << endl;
	cout << "$10 bills: " + ten << endl;
	cout << "$5 bills: " + five << endl;
	cout << "$1 bills: " + one << endl;
}