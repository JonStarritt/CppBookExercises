// Employee.cpp

/*

Employee class member function definitions from prototypes in "Employee.h"

*/

//#includes
#include <iostream>
#include "Employee.h"

//STDLib functions
using std::cout;
using std::cin;
using std::endl;
using std::string;

//Constructor initializes the three data members (first name, last name, and salary)
Employee::Employee()
{
	firstName = "UNDEFINED";
	lastName = "UNDEFINED";
	monthlySalary = 0;
}

//Return employee object first name
string Employee::getFirstName()
{
	return firstName;
}

//Set employee object first name
void Employee::setFirstName(string empFirstName)
{
	firstName = empFirstName;
}

//Return employee object last name
string Employee::getLastName()
{
	return lastName;
}

//Set employee object last name
void Employee::setLastName(string empLastName)
{
	lastName = empLastName;
}

//Return employee object yearly salary
int Employee::getSalary()
{
	//Monthly salary times 12 months
	return (monthlySalary * 12);
}

//Set employee object monthly salary
void Employee::setMonthlySalary(int empMonthlySalary)
{
	monthlySalary = empMonthlySalary;
}