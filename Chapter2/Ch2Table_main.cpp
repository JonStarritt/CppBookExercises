//main.cpp

/*

Chapter 2 Exercise
2.29 Table

Using the techniques of this chapter, write a program that calculates the squares
and cubes of the integers from 0 to 10. Use tabs to print the following neatly formatted
table of values.

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
	
	//Output the table of squared and cubed values while performing inline calculations
	cout << "Integer\tSquare\tCube\n";
	cout << "0\t" << (0 * 0) << "\t" << (0 * 0 * 0) << "\n";
	cout << "1\t" << (1 * 1) << "\t" << (1 * 1 * 1) << "\n";
	cout << "2\t" << (2 * 2) << "\t" << (2 * 2 * 2) << "\n";
	cout << "3\t" << (3 * 3) << "\t" << (3 * 3 * 3) << "\n";
	cout << "4\t" << (4 * 4) << "\t" << (4 * 4 * 4) << "\n";
	cout << "5\t" << (5 * 5) << "\t" << (5 * 5 * 5) << "\n";
	cout << "6\t" << (6 * 6) << "\t" << (6 * 6 * 6) << "\n";
	cout << "7\t" << (7 * 7) << "\t" << (7 * 7 * 7) << "\n";
	cout << "8\t" << (8 * 8) << "\t" << (8 * 8 * 8) << "\n";
	cout << "9\t" << (9 * 9) << "\t" << (9 * 9 * 9) << "\n";
	cout << "10\t" << (10 * 10) << "\t" << (10 * 10 * 10) << "\n";
	
	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}
