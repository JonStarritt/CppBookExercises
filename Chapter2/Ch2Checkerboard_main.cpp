//main.cpp

/*

Chapter 2 Exercise
2.26 Checkerboard Pattern

Display the following checkerboard pattern with eight output
statements, then display the same pattern using as few statements
as possible.

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
	
	//Print the checkerboard pattern to the screen with eight output statements
	cout << "* * * * * * * * \n";
	cout << " * * * * * * * *\n";
	cout << "* * * * * * * * \n";
	cout << " * * * * * * * *\n";
	cout << "* * * * * * * * \n";
	cout << " * * * * * * * *\n";
	cout << "* * * * * * * * \n";
	cout << " * * * * * * * *\n\n\n";

	//Print the checkerboard pattern to the screen with one output statement
	cout << "* * * * * * * * \n * * * * * * * *\n* * * * * * * * \n * * * * * * * *\n* * * * * * * * \n * * * * * * * *\n* * * * * * * * \n * * * * * * * *\n\n";

	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}
