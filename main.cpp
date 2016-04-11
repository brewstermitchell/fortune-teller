// CS161 Fortune Teller (main.cpp)
// (c) Brewster Mitchell 2016
// April 09, 2016
// CS 161 PCC
// Sources: UNIX binary 'fortune' for a couple fortunes, stackoverflow (http://stackoverflow.com/questions/257091/how-do-i-flush-the-cin-buffer)

//includes
// # include "stdafx.h" // precompiled Windows headers from VS.
# include <iostream>
# include <string>
# include <cstdlib> // Ch. 5
# include <ctime> // 

using namespace std;

//global variables
string fortune;

void randSelect()
{
	
	int randSelect;
	srand(time(0));
	randSelect = rand() % 3; // determine random num between 0-2

	if (randSelect == 0) { // if else statements from Ch. 4. Better solution would probably be to read in a file with a whole load
							// of fortunes and select random lines rather than hard-code into the program, but well-beyond scope of assignment.
		fortune = "\tEvery why hath a wherefore.";
	}
	else if (randSelect == 1) {
		fortune = "\tQ:      Why did the chicken cross the road?\n\tA:      He was giving it last rites.";
	}
	else if (randSelect == 2) {
		fortune = "\tBeware of Bigfoot!";
	}
}

int main()
{
	string firstName;
	string lastName;

	cout << "Enter your first and last name: ";

	cin >> firstName >> lastName; // get first and last name from user

	randSelect(); // get fortune

	// Output greeting and fortune
	cout << endl << "Hello, " << firstName << " " << lastName << "." << endl << endl;
	cout << "  Your fortune for today is: " << endl << fortune << "\n\n";

	// OS-agnostic means of pausing console
	cout << "Press RETURN to exit.";
	cin.get(); // clear input buffer // stackoverflow
	cin.ignore();
	return 0;
}