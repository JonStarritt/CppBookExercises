//main.cpp

/*

Chapter 3 Exercise
3.17 Computerization of Health Records

In this exercise, you'll design a "starter" HealthProfile class for a person. The
class attributes should include the person's first name, last name, gender,
date of birth (consisting of separate attribuites for the month, day and year
of birth), height (in inches) and weight (in pounds). Your class should have a
constructor that receives this data. For each attribute, provide set and get
functions. The class should also include functions that calculate and return
the user's age in years, maximum heart rate and target heart rate range,
and body mass index (BMI).

Write an application that prompts for the person's information, instantiates an
object of class HealthProfile for that person and prints the information from that
object - including the person's first name, last name, gender, date of birth,
height and weight - then calculates and prints the person's age in years, BMI,
maximum heart rate and target-heart-rate range. It should also display the
"BMI values" chart from Exercise 2.30. Use the same technique as Exercise 3.16
to calculate the person's age.

*/

//#includes
#include <iostream>
#include <string>
#include "HealthProfile.h"

//STDLIB functions
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	//Var to keep the output window open on Windows until the user enters a character
	char ExitChar;

	//Vars for user input
	string iFirstName = "UNDEFINED";
	string iLastName = "UNDEFINED";
	string iGender = "UNDEFINED";
	int iBDay = 0;
	int iBMonth = 0;
	int iBYear = 0;
	int iHeight = 0;
	int iWeight = 0;

	//Prompt user for input and read to temp vars
	cout << "Please enter your first name: ";
	cin >> iFirstName;

	cout << "Please enter your last name: ";
	cin >> iLastName;

	cout << "Please enter your gender (male/female/other): ";
	cin >> iGender;

	cout << "Please enter your birth month (1-12): ";
	cin >> iBMonth;

	cout << "Please enter your birth day (1-31): ";
	cin >> iBDay;

	cout << "Please enter your birth year (xxxx): ";
	cin >> iBYear;

	cout << "Please enter your height in inches (xx): ";
	cin >> iHeight;

	cout << "Please enter your weight in pounds (xxx): ";
	cin >> iWeight;

	//Create class object, passing user input temp vars as parameters
	HealthProfile testProfile(iFirstName, iLastName, iGender, iBDay, iBMonth, iBYear, iHeight, iWeight);

	//Print the personal information from the HealthProfile
	cout << "\nName: " << testProfile.getLastName() << ", " << testProfile.getFirstName();
	cout << "\nGender: " << testProfile.getGender();
	cout << "\nD.O.B.: " << testProfile.getBMonth() << "/" << testProfile.getBDay() << "/" << testProfile.getBYear();
	cout << "\nHeight: " << testProfile.getHeight() << " inches";
	cout << "\nWeight: " << testProfile.getWeight() << " pounds";

	//Calculate age
	testProfile.getAge();

	//Calculate BMI
	testProfile.getBMI();

	//Calculate heart rates
	cout << "\nMaximum heart rate: " << testProfile.getMaximumHeartRate();
	testProfile.getTargetHeartRate();
	
	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}
