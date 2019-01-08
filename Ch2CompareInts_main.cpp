//main.cpp

/*

Chapter 2 Excercise
2.18 Comparing Integers

Write a program that asks the user to enter two integers, obtains the numbers from the user, 
then prints the larger number followed by the words "is larger." If the numbers are equal,
print the message "These numbers are equal."

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
	int number1 = 0;
	int number2 = 0;

	//Prompt the user and read their input to the vars
	cout << "Please enter two integers: ";
	cin >> number1 >> number2;

	//Compare the two integers and print the appropriate message
	//If the numbers are equal, print this message
	if (number1 == number2)
		{
			cout << "These numbers are equal.\n";
		}

	//If the first number is larger than the second, print this message
	if (number1 > number2)
		{
			cout << number1 << " is larger.\n";
		}

	//If the first number is smaller than the second, print this message
	if (number1 < number2)
		{
			cout << number2 << " is larger.\n";
		}

	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}