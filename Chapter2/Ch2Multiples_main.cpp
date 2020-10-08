//main.cpp

/*

Chapter 2 Exercise
2.25 Multiples

Write a program that reads in two integers and determines
and prints if the first is a mulitple of the second.
[Hint: use the modulus operator.]

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

	//Vars for user input
	int userInt1 = 0;
	int userInt2 = 0;

	//Prompt the user for input and read it in to the input vars
	cout << "Please enter two integers: ";
	cin >> userInt1 >> userInt2;

	//Check if the first integer is a multiple of the second
	if (userInt2%userInt1 == 0)
	{
		cout << "\n" << userInt1 << " is a multiple of " << userInt2 << "\n\n";
	}
	
	//Check if the first integer is not a multiple of the second
	if (userInt2%userInt1 != 0)
	{
		cout << "\n" << userInt1 << " is not a multiple of " << userInt2 << "\n\n";
	}
	
	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}
