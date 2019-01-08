//main.cpp

/*

Chapter 2 Exercise
2.16 Arithmetic

Write a program that asks the user to enter two numbers,
obtains the two numbers from the user and prints the sum,
product, difference and quotient of the two numbers.

*/

//#includes
#include <iostream>

//STDLIB functions
using std::cin;
using std::cout;

int main()
{	
	//Var to keep the output window open on Windows until the user enters a character
	char ExitChar;

	//Vars for user input and output calculations
	int number1 = 0;
	int number2 = 0;
	int userSum = 0;
	int userProduct = 0;
	int userDifference = 0;
	int userQuotient = 0;	
	
	//Prompt the user and read their input to the vars
	cout << "Please enter the first of two integers: ";
	cin >> number1;
	cout << "Please enter the second integer: ";
	cin >> number2;

	//Calculate the sum, product, difference, and quotient of the entered numbers
	userSum = number1 + number2;
	userProduct = number1 * number2;
	userDifference = number1 - number2;
	userQuotient = number1 / number2;

	//Output the results to the user
	cout << "\nThe sum of the entered numbers is: " << userSum;
	cout << "\nThe product of the entered numbers is: " << userProduct;
	cout << "\nThe difference of the entered numbers is: " << userDifference;
	cout << "\nThe quotient of the entered numbers is: " << userQuotient;

	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}