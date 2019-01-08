//main.cpp

/*

Chapter 2 Exercise
2.24 Odd or Even

Write a program that reads an integer and determines and prints
whether it's odd or even. 

[Hint: use the modulus operator. An even number is a multiple of 2. 
Any multiple of 2 leaves a remainder of zero when divided by 2.

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

	//Var for user input
	int userInt = 0;
	
	//Prompt user for input and read it in to the input var
	cout << "Please enter an integer: ";
	cin >> userInt;

	//Check if the user input is an even integer
	if (userInt%2 == 0)
	{ 
		cout << "The integer you entered is even.\n";
	}
	
	//Check if the user input is an odd integer
	if (userInt%2 != 0)
	{
		cout << "The integer you entered is odd.\n";
	}
	
	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}