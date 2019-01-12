//main.cpp

/*

Chapter 3 Exercise
3.14 Employee Class

Create a class called Employee that includes three pieces of information as
data members -- a first name (type string), a last name (type string), and a monlthy
salary (type int). 

[Note: In subsequent chapters, we'll use numbers that contain decimal
points (e.g., 2.75) -- called floating-point values -- to represent dollar amounts.]

Your class should have a constructor that initializes the three data members. Provide
a set and get function for each data member. If the monthly salary is not positive,
set it to 0. 

Write a test program that demonstrates class Employee's capabilities.
Create two Employee objects and display each object's yearly salary. Then give each
Employee a 10 percent raise and display each Employee's yearly salary again.

*/

//#includes
#include <iostream>
#include <string>
#include "Employee.h"

//STDLib functions
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	//Var to keep the output window open on Windows until the user enters a character
	char ExitChar;
	
	//Temp vars to hold user input
	string fName;
	string lName;
	int mSalary;
	int mRaise1;
	int mRaise2;
	
	//Two Employee class objects initialized
	Employee employee1;
	Employee employee2;

	//Get user input for first name and set the data member
	cout << "Please enter first name for employee 1: ";
	cin >> fName;
	employee1.setFirstName(fName);

	//Get user input for last name and set the data member
	cout << "Please enter last name for employee 1: ";
	cin >> lName;
	employee1.setLastName(lName);

	//Get user input for monthly salary and set the data member
	cout << "Please enter monthly salary for employee 1: $";
	cin >> mSalary;
	employee1.setMonthlySalary(mSalary);

	//Get user input for first name and set the data member
	cout << "\n\nPlease enter first name for employee 2: ";
	cin >> fName;
	employee2.setFirstName(fName);

	//Get user input for last name and set the data member
	cout << "Please enter last name for employee 2: ";
	cin >> lName;
	employee2.setLastName(lName);

	//Get user input for monthly salary and set the data member
	cout << "Please enter monthly salary for employee 2: $";
	cin >> mSalary;
	employee2.setMonthlySalary(mSalary);

	//Output the user data for employee 1
	cout << "\n\n\n***********************";
	cout << "\nData for Employee 1";
	cout << "\nFirst Name: " << employee1.getFirstName();
	cout << "\nLast Name: " << employee1.getLastName();
	cout << "\nYearly Salary: $" << employee1.getSalary();
	cout << "\n***********************" << endl;

	//Output the user data for employee 2
	cout << "\n***********************";
	cout << "\nData for Employee 2";
	cout << "\nFirst Name: " << employee2.getFirstName();
	cout << "\nLast Name: " << employee2.getLastName();
	cout << "\nYearly Salary: $" << employee2.getSalary();
	cout << "\n***********************" << endl;

	//Give both employees a 10% raise
	mRaise1 = (employee1.getSalary() * 0.1);
	mRaise2 = (employee2.getSalary() * 0.1);
	
	//Output the employee salaries after the 10% raise
	cout << "\nAfter a 10% raise: ";
	cout << employee1.getLastName() << ", " << employee1.getFirstName() << " is now making $" << (employee1.getSalary() + mRaise1) << " per year.\n";
	cout << "After a 10% raise: ";
	cout << employee2.getLastName() << ", " << employee2.getFirstName() << " is now making $" << (employee2.getSalary() + mRaise2) << " per year.\n";

	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}