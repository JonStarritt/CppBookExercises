//main.cpp

/*

Chapter xx Exercise
x.xx "Exercise Name"

Write a program that...

*/

//#includes
#include <iostream>

//STDLIB functions
using std::cout;
using std::cin;
using std::endl;

int main()
{
	//Var to keep the output window open on Windows until the user enters a character
	char ExitChar;

	
	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}