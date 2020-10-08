//main.cpp

/*

Chapter 2 Exercise
2.30 Body Mass Index Calculator

Create a BMI calculator application that reads the user's weight in pounds
and height in inches, then calculates and displays the user's body mass index.
Also, the application should display the following information from the
Department of Health and Human Services/National Institutes of Health so the 
user can evaluate his/her BMI:

BMI VALUES
Underweight: less than 18.5
Normal:      between 18.5 and 24.9
Overweight:  between 25 and 29.9
Obese:       30 or greater

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

	//Vars for user input and output calculations
	int userWeight = 0;
	int userHeight = 0;
	int userBMI = 0;

	//Prompt the user and read their input to the vars
	cout << "Please enter your weight in pounds (xxx): ";
	cin >> userWeight;
	cout << "Please enter your height in inches (xx): ";
	cin >> userHeight;

	//Calculate the user's BMI per the given formula:
	//       (weight in pounds x 703)
	//BMI =   ----------------------
	//        (height in inches ^ 2)

	userBMI = (userWeight * 703) / (userHeight * userHeight);

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
	
	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}
