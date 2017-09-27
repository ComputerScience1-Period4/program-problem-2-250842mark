/*
Mark Antipuesto - 9/25/17 Period 4

Take In Data 

Collect data provided by users to display in response to quesitons given
*/
// Libraries 
#include <iostream>
#include <conio.h>
// Namespaces
using namespace std;
//Functions
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit);
	_getch();
	cout << '\n';
}
// Main
void main() {
	//Variables
	int age; // What is your age?
	char first_middle; // What is the first letter of your middle name?
	double family; // How many people are in your immediate family?
	double myFamily = 5; // 5 family members
	bool procreation;

	// User Queries
	cout << "What is your age (in years)?";
	cin >> age;
	cout << "What is the first letter of your middle name?";
	cin >> first_middle;
	cout << "How many people are in your immediate family?";
	cin >> family;
	procreation = family > myFamily;

	//After Questions
	cout << "When did you turn " << age << " ? " << endl;
	cout << "Your middle name starts with " << first_middle << "?" << " Mine starts with H!" << endl;
	cout << "Wtih " << family << " family members, you can do so many things!" << endl;
	if (procreation) {
		cout << "Your parents went to town buddy!" << endl;
	}
	pause();
}