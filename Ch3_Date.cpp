//Date.cpp

/*

Date class member function definitions from prototypes in "Date.h"

*/

//#includes
#include <iostream>
#include "Date.h"

//STDLIB functions
using std::cout;
using std::cin;
using std::endl;

//Constructor that sets the data members with user input.
//Assuming the day and year are valid, but checking the month
//for valid input. If month input is not valid, set it to 1.
Date::Date(int uMonth, int uDay, int uYear)
{
	dDay = uDay;
	dYear = uYear;

	if (uMonth <= 0)
	{
		dMonth = 1;
	}

	if (uMonth > 12)
	{
		dMonth = 1;
	}

	if (uMonth > 0)
	{
		if (uMonth <= 12)
		{
			dMonth = uMonth;
		}
	}	
}

//Return the month
int Date::getMonth()
{
	return dMonth;
};

//Set the month to user input if it's between 1 and 12, inclusive.
//If not, set it to 1
void Date::setMonth(int uMonth)
{	
	if (uMonth <= 0)
	{
		dMonth = 1;
	}

	if (uMonth > 12)
	{
		dMonth = 1;
	}

	if (uMonth > 0)
	{
		if (uMonth <= 12)
		{
			dMonth = uMonth;
		}
	}
};

//Return the day
int Date::getDay()
{
	return dDay;
};

//Set the day to user input, assuming valid input
void Date::setDay(int uDay)
{
	dDay = uDay;
};

//Return the year
int Date::getYear()
{
	return dYear;
};

//Set the year to user input, assuming valid input
void Date::setYear(int uYear)
{
	dYear = uYear;
};

//Display the date in the format: dd/mm/yyyy
void Date::displayDate()
{
	cout << "\n" << getMonth() << "/" << getDay() << "/" << getYear() << endl;
};