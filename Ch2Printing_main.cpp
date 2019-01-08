//main.cpp

/*

Chapter 2 Exercise
2.17 Printing

Write a program that prints the numbers 1 to 4 on the same line
with each pair of adjacent numbers seperated by one space. Do this
several ways:

A) Using one statement with one stream insertion operator.
B) Using one statement with four stream insertion operators.
C) Using four statements.

*/

//#includes
#include <iostream>

//STDLIB functions
using std::cout;
using std::cin;

int main()
{
	//Var to keep the output window open on Windows until the user enters a character
	char ExitChar;
	
	//Statement for part A above
	cout << "12 34\n";

	//Statement for part B above
	cout << "1" << "2" << " 3" << "4\n";

	//Statements for part C above
	cout << "1";
	cout << "2";
	cout << " 3";
	cout << "4\n";

	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}