//main.cpp

/*

 Chapter 3 Exercise
 3.16 Target Heart Rate Calculator

 Create a class called HeartRates. The class attributes should include the
 person's first name, last name and date of birth (consisting of separate
 attributes for the month, day and year of birth). Your class should have 
 a constructor that receives this data as parameters. For each attribute
 provide set and get functions. The class should also include a function
 getAge that calculates and returns the person's age (in years),
 a function getMaximumHeartRate that calculates and returns the person's
 maximum heart rate and a function getTargetHeartRate that calculate's
 and returns the person's target heart rate. Since you do not yet know
 how to obtain the current date from the computer, function getAge should 
 prompt the user to enter the current month, day and year before calculating
 the person's age. 
 
 Write an application that prompts for the person's information,
 instantiates an object of class HeartRates, and prints the information from
 that object -- including the person's first name, last name and date of birth --
 then calculates and prints the person's age (in years), maximum heart rate
 and target-heart-rate.

 */

//#includes
#include <iostream>
#include <string> //Needed for cin to read in strings
#include "HeartRates.h"

//STDLIB functions
using std::cout;
using std::cin;
using std::endl;

int main()
{	
	//Var to keep the output window open on Windows until the user enters a character
	char ExitChar;

	//Vars for user input
	string userFName = "UNDEFINED";
	string userLName = "UNDEFINED";
	int userDay = 0; 
	int userMonth = 0; 
	int userYear = 0; 

	//Prompts for user data and read it to the input vars
	cout << "Please enter your first name: ";
	cin >> userFName;

	cout << "Please enter your last name: ";
	cin >> userLName;

	cout << "Please enter your birth month (1-12): ";
	cin >> userMonth;

	cout << "Please enter your birth day (1-31): ";
	cin >> userDay;

	cout << "Please enter your birth year (xxxx): ";
	cin >> userYear;

	//Create class object with user data as parameters
	HeartRates patient1(userFName, userLName, userDay, userMonth, userYear);

	//Print the user name and date of birth to the screen
	cout << "\nName: " << patient1.getLastName() << ", " << patient1.getFirstName();
	cout << "\nD.O.B.: " << patient1.getBMonth() << "/" << patient1.getBDay() << "/" << patient1.getBYear();
	cout << "\n\n";
	
	//Calculate user's age 
	patient1.getAge();
 
	//Print maximum and target heart rates to the screen
	cout << "\nMaximum heart rate: " << patient1.getMaximumHeartRate() << " bpm";
	cout << "\nTarget heart rate average: " << patient1.getTargetHeartRate() << " bpm";
	cout << "\n\n";
	
	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}