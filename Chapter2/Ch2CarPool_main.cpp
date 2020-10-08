//main.cpp

/*

Chapter 2 Exercise
2.31 Car-Pool Savings Calculator

Create an application that calculates your daily driving cost, so that
you could estimate how much money could be saved by car-pooling, which
also has other advantages such as reducing carbon emissions and reducing
traffic congestion. The application should input the following information
and display the user's cost per day of driving to work.

A. Total miles driven per day
B. Cost per gallon of gasoline
C. Average miles per gallon
D. Parking fees per day
E. Tolls per day

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

	//Vars for user input and calculations
	int milesPerDay = 0;
	int costPerGallon = 0;
	int milesPerGallon = 0;
	int parkFees = 0;
	int tollsDay = 0;
	int totalDayCost = 0;

	cout << "Car-Pool Savings Calculator\n\n";
	
	//Prompt user and read in daily miles driven
	cout << "How many miles do you drive in a typical workday? (xx): ";
	cin >> milesPerDay;

	//Prompt user and read in gas price
	cout << "How much does a gallon of gas cost? (x): $";
	cin >> costPerGallon;

	//Prompt user and read in their vehicle's MPG
	cout << "What is your car's average miles per gallon? (xx): ";
	cin >> milesPerGallon;

	//Prompt user and read in parking fee costs
	cout << "How much do you pay in parking fees each day? (x): $";
	cin >> parkFees;

	//Prompt user and read in toll costs
	cout << "How much do you pay in tolls each day? (x): $";
	cin >> tollsDay;

	//Calculate the user's daily cost for commuting to work
	totalDayCost = ((milesPerDay / milesPerGallon) * costPerGallon) + parkFees + tollsDay;

	//Print the total daily cost to the screen
	cout << "\nYour daily driving cost is $" << totalDayCost << endl;
	
	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}
