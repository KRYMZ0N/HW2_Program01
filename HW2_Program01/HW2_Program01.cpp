//=============================
//Author: Jack Grimes
//Date: 9-11-23
//Desc: change calculator
//=============================

#include <iostream>
#include <string>

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
	cout << "The fewest amount of bills to reach $" << input << " is..." << endl;
	cout << "========================================================" << endl;

	twenty = input / 20; // Used to figure out how many bills fits into input.
	input = input - (twenty * 20); // Used to figure out what's left over.
	
	ten = input / 10;
	input = input - (ten * 10);

	five = input / 5;
	input = input - (five * 5);
	
	one = input;

	cout << "20 bills: " << twenty << endl;
	cout << "10 bills: " << ten << endl;
	cout << "5 bills: " << five << endl;
	cout << "1 bills: " << one << endl;
}