//main.cpp

/*

Chapter 2 Exercise
2.20 Diameter, Circumference and Area of a Circle

Write a program that reads in the radius of a circle as an integer
and prints the circle's diameter, circumference, and area. Use
the constant value 3.14159 for Pi. Do all calculations in output
statements.

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

	//Var to hold user input
	int userRadius = 0;
	
	//Prompt user for input and read it to the var
	cout << "Enter the radius of a circle as an integer: ";
	cin >> userRadius;

	//Perform calculations in output statements, and print the results to the screen
	cout << "The diameter is: " << userRadius * 2 << "\n";
	cout << "The circumference is: " << 2 * 3.14159 * userRadius << "\n";
	cout << "The area is: " << 3.14159 * userRadius * userRadius << "\n";

	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}
