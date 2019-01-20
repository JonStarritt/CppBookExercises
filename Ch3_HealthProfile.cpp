// HealthProfile.cpp

/*

HealthProfile class member function definitions from prototypes in "HealthProfile.h"

*/

//#includes
#include <iostream>
#include "HealthProfile.h"

//STDLib functions
using std::cout;
using std::cin;
using std::endl;
using std::string;

//Global var to help calculate age in years, maximum and target heart rates
int userAgeYear = 0;

//Constructor initializes the data members: first name, last name, gender, birth day, birth month, birth year,
//height(in inches) and weight(in pounds)
HealthProfile::HealthProfile(string uFirstName, string uLastName, string uGender, int uBDay, int uBMonth, int uBYear, int uHeight, int uWeight)
{
	setFirstName(uFirstName);
	setLastName(uLastName);
	setGender(uGender);
	setBDay(uBDay);
	setBMonth(uBMonth);
	setBYear(uBYear);
	setHeight(uHeight);
	setWeight(uWeight);

}

string HealthProfile::getFirstName() //Returns the first name
{
	return firstName;
}

void HealthProfile::setFirstName(string uFirstName) //Sets the first name
{
	firstName = uFirstName;
}

string HealthProfile::getLastName() //Returns the last name
{
	return lastName;
}

void HealthProfile::setLastName(string uLastName) //Sets the last name
{
	lastName = uLastName;
}

string HealthProfile::getGender() //Returns the gender
{
	return gender;
}

void HealthProfile::setGender(string uGender) //Sets the gender
{
	gender = uGender;
}

int HealthProfile::getBDay() //Returns the birth day
{
	return birthDay;
}

void HealthProfile::setBDay(int uBDay) //Sets the birth day, making sure it's from 1 to 31
{
	birthDay = uBDay;

	if (uBDay <= 0)
	{
		birthDay = 1;
	}
	if (uBDay > 31)
	{
		birthDay = 1;
	}
}

int HealthProfile::getBMonth() //Returns the birth month
{
	return birthMonth;
}

void HealthProfile::setBMonth(int uBMonth) //Sets the birth month making sure it's from 1 to 12
{
	birthMonth = uBMonth;

	if (uBMonth <= 0)
	{
		birthMonth = 1;
	}
	if (uBMonth > 12)
	{
		birthMonth = 1;
	}
}

int HealthProfile::getBYear() //Returns the birth year
{
	return birthYear;
}

void HealthProfile::setBYear(int uBYear) //Sets the birth year
{
	birthYear = uBYear;
}

int HealthProfile::getHeight() //Returns the height in inches
{
	return heightInches;
}

void HealthProfile::setHeight(int uHeight) //Sets the height in inches
{
	heightInches = uHeight;
}

int HealthProfile::getWeight() //Returns the weight in pounds
{
	return weightPounds;
}

void HealthProfile::setWeight(int uWeight) //Sets the weight in pounds	
{
	weightPounds = uWeight;
}

//getAge has a void return type because it handles printing data to the screen
void HealthProfile::getAge() //Calculate age based on birth date and current date
{
	//Temp vars for holding current date
	int currentYear = 0;
	int currentMonth = 0;
	int currentDay = 0;

	//Get current month from user
	cout << "\n\nPlease enter the current month (1-12): ";
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
	if (currentMonth > birthMonth)
	{
		//Then the user's age is the current year minus their birth year
		userAgeYear = (currentYear - birthYear);
	}

	//If the current month is earlier in the year than the user's birth month
	if (currentMonth < birthMonth)
	{
		//Then the user's age is one less than the current year minus their birth year
		userAgeYear = (currentYear - birthYear - 1);
	}

	//If the current month is the user's birth month
	if (currentMonth == birthMonth)
	{
		//If the current day is after or is the user's birth day
		if (currentDay >= birthDay)
		{
			//Then the user's age is the current year minus their birth year
			userAgeYear = (currentYear - birthYear);
		}

		//If the current day is earlier in the month than the user's birth day
		if (currentDay < birthDay)
		{
			//Then the user's age is one less than the current year minus their birth year
			userAgeYear = (currentYear - birthYear - 1);
		}
	}

	//Print the user's age to the screen
	cout << "\nAge: " << userAgeYear;
}

void HealthProfile::getBMI() //Calculate the body mass index
{
	//Temp var for calculation
	int userBMI = 0;

	userBMI = (weightPounds * 703) / (heightInches * heightInches);

	//Print the BMI ranges and the user's BMI to the screen
	cout << "\n\nBMI VALUES\n";

	//If the user's BMI is in this range, print the underweight notification
	if (userBMI < 18.5)
	{
		cout << "Underweight: less than 18.5  <--- You are in this range at: " << userBMI;
		cout << "\n";
	}

	//If the user's BMI is outside of this range, print the standard underweight message
	if (userBMI >= 18.5)
	{
		cout << "Underweight: less than 18.5\n";
	}

	//If the user's BMI is in this range, print the normal notification
	if (userBMI >= 18.5)
	{
		if (userBMI <= 24.9)
		{
			cout << "Normal:      between 18.5 and 24.9  <--- You are in this range at: " << userBMI;
			cout << "\n";
		}
	}

	//If the user's BMI is outside of this range, print the standard normal message
	if (userBMI < 18.5)
	{
		cout << "Normal:      between 18.5 and 24.9\n";
	}

	//If the user's BMI is outside of this range, print the standard normal message
	if (userBMI > 24.9)
	{
		cout << "Normal:      between 18.5 and 24.9\n";
	}

	//If the user's BMI is in this range, print the overweight notification
	if (userBMI >= 25)
	{
		if (userBMI <= 29.9)
		{
			cout << "Overweight:  between 25 and 29.9  <--- You are in this range at: " << userBMI;
			cout << "\n";
		}
	}

	//If the user's BMI is outside of this range, print the standard overweight message
	if (userBMI < 25)
	{
		cout << "Overweight:  between 25 and 29.9\n";
	}

	//If the user's BMI is outside of this range, print the standard overweight message
	if (userBMI > 29.9)
	{
		cout << "Overweight:  between 25 and 29.9\n";
	}

	//If the user's BMI is in this range, print the obese notification
	if (userBMI >= 30)
	{
		cout << "Obese:       30 or greater  <--- You are in this range at: " << userBMI;
		cout << "\n";
	}

	//If the user's BMI is outside of this range, print the standard obese message
	if (userBMI < 30)
	{
		cout << "Obese:       30 or greater\n";
	}

	cout << "\nBMI: " << userBMI;
}

int HealthProfile::getMaximumHeartRate() //Calculate maximum heart rate according to the American Heart Association's formula
{
	//Var to hold heart rate
	int maxHeartRate = 0;

	//Calculate max heart rate
	maxHeartRate = (220 - userAgeYear);

	return maxHeartRate;
}

void HealthProfile::getTargetHeartRate() //Calculate target heart rate average according to the American Heart Association's formula
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

	cout << "\nTarget heart rate minimum: " << targetHeartRateMin;
	cout << "\nTarget heart rate average: " << targetHeartRateAvg;
	cout << "\nTarget heart rate maximum: " << targetHeartRateMax;
}