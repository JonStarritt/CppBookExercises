//main.cpp

/*

Chapter 2 Exercise
2.27 Integer Equivalent of a Character

Write a program that prints the integer equivalent of a character
typed at the keyboard. Store the input in a variable of type char.
Test your program several times using uppercase letters, lowercase
letters, digits, and special characters (like $).

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

	//Var for user input
	char userInput = 0;
	
	//Prompt the user for input and read it to the input var
	cout << "Enter any keyboard character to find it's integer equivalent: ";
	cin >> userInput;

	//Output the integer equivalent by using static_cast on the user's input
	cout << endl << static_cast<int>(userInput) << endl;
	
	// Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}
