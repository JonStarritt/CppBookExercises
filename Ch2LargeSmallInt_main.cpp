//main.cpp

/*

Chapter 2 Exercise
2.23 Largest and Smallest Integers

Write a program that reads in 5 integers and determines and prints
the largest and the smallest integers in the group. Use only the 
programming techniques you learned in this chapter.

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
	
	//Vars for user input
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	
	//Vars for output
	int largestNum = 0;
	int smallestNum = 0;

	//Prompt the user and read it to the input vars
	cout << "Please enter five (5) integers: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	//********************************************************
	//Check if num1 is the largest
	if (num1 >= num2)
	{
		if (num1 >= num3)
		{
			if (num1 >= num4)
			{
				if (num1 >= num5)
				{
					largestNum = num1;
				}
			}
		}
	}
	
	//********************************************************
	//Check if num2 is the largest
	if (num2 >= num1)
	{
		if (num2 >= num3)
		{
			if (num2 >= num4)
			{
				if (num2 >= num5)
				{
					largestNum = num2;
				}
			}
		}
	}

	//********************************************************
	//Check if num3 is the largest
	if (num3 >= num1)
	{
		if (num3 >= num3)
		{
			if (num3 >= num4)
			{
				if (num3 >= num5)
				{
					largestNum = num3;
				}
			}
		}
	}

	//********************************************************
	//Check if num4 is the largest
	if (num4 >= num1)
	{
		if (num4 >= num2)
		{
			if (num4 >= num3)
			{
				if (num4 >= num5)
				{
					largestNum = num4;
				}
			}
		}
	}

	//********************************************************
	//Check if num5 is the largest
	if (num5 >= num1)
	{
		if (num5 >= num2)
		{
			if (num5 >= num3)
			{
				if (num5 >= num4)
				{
					largestNum = num5;
				}
			}
		}
	}


	//********************************************************
	//Check if num1 is the smallest
	if (num1 <= num2)
	{
		if (num1 <= num3)
		{
			if (num1 <= num4)
			{
				if (num1 <= num5)
				{
					smallestNum = num1;
				}
			}
		}
	}

	//********************************************************
	//Check if num2 is the smallest
	if (num2 <= num1)
	{
		if (num2 <= num3)
		{
			if (num2 <= num4)
			{
				if (num2 <= num5)
				{
					smallestNum = num2;
				}
			}
		}
	}

	//********************************************************
	//Check if num3 is the smallest
	if (num3 <= num1)
	{
		if (num3 <= num3)
		{
			if (num3 <= num4)
			{
				if (num3 <= num5)
				{
					smallestNum = num3;
				}
			}
		}
	}

	//********************************************************
	//Check if num4 is the smallest
	if (num4 <= num1)
	{
		if (num4 <= num2)
		{
			if (num4 <= num3)
			{
				if (num4 <= num5)
				{
					smallestNum = num4;
				}
			}
		}
	}

	//********************************************************
	//Check if num5 is the smallest
	if (num5 <= num1)
	{
		if (num5 <= num2)
		{
			if (num5 <= num3)
			{
				if (num5 <= num4)
				{
					smallestNum = num5;
				}
			}
		}
	}

	//********************************************************
	
	//Print the largest and smallest numbers to the screen
	cout << "\nThe largest integer of the group is: " << largestNum << "\n";
	cout << "The smallest integer of the group is: " << smallestNum << endl;
	
	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}