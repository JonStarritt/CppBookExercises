//main.cpp

/*

Chapter 2 Exercise
2.19 Arithmetic, Smallest and Largest

Write a program that inputs three integers from the keyboard
and prints the sum, average, product, smallest and largest
of these numbers. The screen dialog should appear as follows:

   Input three different integers: 13 27 14
   Sum is 54
   Average is 18
   Product is 4914
   Smallest is 13
   Largest is 27

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

	//Vars to hold user input and calculations
	int number1 = 0;
	int number2 = 0;
	int number3 = 0;
	int userSum = 0;
	int userAverage = 0;
	int userProduct = 0;
	int userSmallest = 0;
	int userLargest = 0;

	//Prompt the user for input and read it to the vars
	cout << "Input three different integers: ";
	cin >> number1 >> number2 >> number3;

	//Calculate the output data
	userSum = number1 + number2 + number3;
	userAverage = (number1 + number2 + number3) / 3;
	userProduct = number1 * number2 * number3;

	//Compare to find the smallest of the three entered integers
	//Set the smallest integer to number1 to start
	userSmallest = number1;

	//If number2 is less than or equal to number3
	if (number2 <= number3)
	{
		//If number2 is less than or equal to number1
		if (number2 <= number1)
		{
			//Set the smallest integer to number2
			userSmallest = number2; 
		}
	}

	//If number3 is less than or equal to number2
	if (number3 <= number2)
	{
		//If number3 is less than or equal to number1
		if (number3 <= number1)
		{
			//Set the smallest integer to number3
			userSmallest = number3;
		}		
	}

	//Compare to find the largest of the three entered integers
	//Set the largest integer to number1 to start
	userLargest = number1;

	//If number2 is greater than or equal to number3
	if (number2 >= number3)
	{
		//If number2 is greater than or equal to number1
		if (number2 >= number1)
		{
			//Set the largest integer to number2
			userLargest = number2;
		}
	}

	//If number3 is greater than or equal to number2
	if (number3 >= number2)
	{
		//If number3 is greater than or equal to number1
		if (number3 >= number1)
		{
			//Set the largest integer to number3
			userLargest = number3;
		}		
	}

	//Output the data
	cout << "Sum is: " << userSum << "\n";
	cout << "Average is: " << userAverage << "\n";
	cout << "Product is: " << userProduct << "\n";
	cout << "Smallest is: " << userSmallest << "\n";
	cout << "Largest is: " << userLargest << "\n";

	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}
