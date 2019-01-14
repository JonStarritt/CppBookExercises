//HeartRates.cpp

/*

HeartRates class member function definitions from prototypes in "HeartRates.h"

*/

//#includes
#include <iostream>
#include "HeartRates.h"

//STDLIB functions
using std::cout;
using std::cin;
using std::endl;

//Global var to help calculate age in years, maximum and target heart rates
int userAgeYear = 0;

//Constructor calling set functions for each attribute
HeartRates::HeartRates(string uFName,string uLName,int uDay,int uMonth,int uYear)
{
	setFirstName(uFName);	
	setLastName(uLName);
	setBDay(uDay);
	setBMonth(uMonth);
	setBYear(uYear);
}

//Get first name
string HeartRates::getFirstName()
{
	return firstName;
};

//Set first name
void HeartRates::setFirstName(string uFName)
{
	firstName = uFName;
};

//Get last name
string HeartRates::getLastName()
{
	return lastName;
};

//Set last name
void HeartRates::setLastName(string uLName)
{
	lastName = uLName;
};

//Get birth day
int HeartRates::getBDay()
{
	return bDay;
};

//Set birth day, making sure it is between 1 and 31
void HeartRates::setBDay(int uDay)
{
	bDay = uDay;
	
	if (uDay <= 0)
	{
		bDay = 1;
	}
	if (uDay > 31)
	{
		bDay = 1;
	}
};

//Get birth month
int HeartRates::getBMonth()
{
	return bMonth;
};

//Set birth month, making sure it is between 1 and 12
void HeartRates::setBMonth(int uMonth)
{
	bMonth = uMonth;

	if (uMonth <= 0)
	{
		bMonth = 1;
	}
	if (uMonth > 12)
	{
		bMonth = 1;
	}
};

//Get birth year
int HeartRates::getBYear()
{
	return bYear;
};

//Set birth year, assuming the user entered a valid date
void HeartRates::setBYear(int uYear)
{
	bYear = uYear;
};

//Get user's age by asking for current date and calculating their current age
void HeartRates::getAge()
{
	//Temp vars for holding current date
	int currentYear = 0;
	int currentMonth = 0;
	int currentDay = 0;	

	//Get current month from user
	cout << "Please enter the current month (1-12): ";
	cin >> currentMonth;

	//Set the current month to the user's input
	currentMonth = currentMonth;
	
	//If the user's input for the month is out of range, set it to 1
	if (currentMonth <= 0)
	{
		currentMonth = 1;
	}
	if (currentMonth > 12)
	{
		currentMonth = 1;
	}

	//Get current day from the user
	cout << "Please enter the current day (1-31): ";
	cin >> currentDay;

	//Set the current day to the user's input
	currentDay = currentDay;

	//If the user's input for the day is out of range, set it to 1
	if (currentDay <= 0)
	{
		currentDay = 1;
	}
	if (currentDay > 31)
	{
		currentDay = 1;
	}

	//Assume the user enters valid data for the year
	cout << "Please enter the current year (xxxx): ";
	cin >> currentYear;

	//Calculate the person's age in years	
	//If the current month is later in the year than the user's birth month
	if (currentMonth > bMonth)
	{
		//Then the user's age is the current year minus their birth year
		userAgeYear = (currentYear - bYear);
	}

	//If the current month is earlier in the year than the user's birth month
	if (currentMonth < bMonth)
	{
		//Then the user's age is one less than the current year minus their birth year
		userAgeYear = (currentYear - bYear - 1);
	}
		
	//If the current month is the user's birth month
	if (currentMonth == bMonth)
	{
		//If the current day is after or is the user's birth day
		if (currentDay >= bDay)
		{
			//Then the user's age is the current year minus their birth year
			userAgeYear = (currentYear - bYear);
		}

		//If the current day is earlier in the month than the user's birth day
		if (currentDay < bDay)
		{
			//Then the user's age is one less than the current year minus their birth year
			userAgeYear = (currentYear - bYear - 1);
		}
	}

	//Print the user's age to the screen
	cout << "\n";
	cout << "Age: " << userAgeYear;
	
};

//Calculate and return the user's maximum heart rate
//Using the formula in the book from the American Heart Association
int HeartRates::getMaximumHeartRate()
{
	//Var to hold heart rate
	int maxHeartRate = 0;

	//Calculate max heart rate
	maxHeartRate = (220 - userAgeYear);

	return maxHeartRate;
};

//Calculate target heart rate
//Using the formula in the book from the American Heart Association
int HeartRates::getTargetHeartRate()
{
	//Temp vars for calculating average target heart rate
	int targetHeartRateMax = 0;
	int targetHeartRateMin = 0;
	int targetHeartRateAvg = 0;

	//Calculate target heart rate maximum
	//Divide by 4 and multiply by 3 to get 75%, then add the max heart rate divided by 10 to get a total of 85%
	targetHeartRateMax = ((getMaximumHeartRate() / 4) * 3) + (getMaximumHeartRate() / 10);
		
	//Add the truncated decimal part back to the total from the above division operation
	targetHeartRateMax += (getMaximumHeartRate() % 4);

	//Calculate target heart rate minimum
	targetHeartRateMin = (getMaximumHeartRate() / 2); //Divide by 2 to get 50% of the max heart rate

	//Calculate target heart rate average
	targetHeartRateAvg = (targetHeartRateMax + targetHeartRateMin) / 2;

	return targetHeartRateAvg;
};