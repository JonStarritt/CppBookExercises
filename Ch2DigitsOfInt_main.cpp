//main.cpp

/*

Chapter 2 Exercise
2.28 Digits of an Integer

Write a program that inputs a five-digit integer,
seperates the integer into it's digits and prints
them seperated by three spaces each. [Hint: Use the
integer division and modulus operators.]

*/

//#includes
#include <iostream>

//STBLIB functions
using std::cout;
using std::cin;
using std::endl;

int main()
{
	//Var to keep the output window open on Windows until the user enters a character
	char ExitChar;

	//Var for user input
	int userInt = 0;
	
	//Vars to hold individual digits
	int digit1 = 0;
	int digit2 = 0;
	int digit3 = 0;
	int digit4 = 0;
	int digit5 = 0;
	
	//Prompt the user for input and read it to the input var
	cout << "Please enter a five-digit integer: ";
	cin >> userInt;
	
	//Calculate the individual digits using modulus and division operators
	digit1 = ((userInt % 100000) / 10000);
	digit2 = ((userInt % 10000) / 1000);
	digit3 = ((userInt % 1000) / 100);
	digit4 = ((userInt % 100) /10);
	digit5 = (userInt % 10);

	//Print the results to the screen
	cout << digit1 << "   " << digit2 << "   " << digit3 << "   " << digit4 << "   " << digit5 << endl;
	
	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}