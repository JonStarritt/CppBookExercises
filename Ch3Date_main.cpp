//main.cpp

/*

Chapter 3 Exercise
3.15 Date Class

Create a class called Date that includes three pieces of information as data
members -- a month (type int). a day (type int) and a year (type int). Your
class should have a constructor with three parameters that uses the parameters
to initialize the three data members. For the purpose of this exercise, assume
that the values provided for the year and day are correct, but ensure that the
month value is in the range 1-12; if it isn't, set the month to 1. Provide a set
and get function for each data member. Provide a member function displayDate that
displays the month, day and year seperated by forward slashes (/). 

Write a test program that demonstrate's class Date's capabilities.

*/

//#includes
#include <iostream>
#include "Date.h"

//STDLIB functions
using std::cout;
using std::cin;
using std::endl;

int main()
{
	//Var to keep the output window open on Windows until the user enters a character
	char ExitChar;

	//Vars for user input
	int uMonth = 0;
	int uDay = 0;
	int uYear = 0;

	//Prompts for user input
	cout << "Please enter a month (1-12): ";
	cin >> uMonth;
	cout << "Please enter a day (1-31): ";
	cin >> uDay;
	cout << "Please enter a year (xxxx): ";
	cin >> uYear;

	//Create a Date class object with user input
	Date userDate1(uMonth, uDay, uYear);

	//Display the date entered by the user
	//The display function calls the get functions for each data member
	userDate1.displayDate();

	//Prompts for user input to change the date.
	cout << "\n\nPlease enter a new month (1-12): ";
	cin >> uMonth;
	cout << "Please enter a new day (1-31): ";
	cin >> uDay;
	cout << "Please enter a new year (xxxx): ";
	cin >> uYear;

	//Calling the set functions for the data members
	userDate1.setMonth(uMonth);
	userDate1.setDay(uDay);
	userDate1.setYear(uYear);

	//Display the date again, with the user changes
	userDate1.displayDate();
	
	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}