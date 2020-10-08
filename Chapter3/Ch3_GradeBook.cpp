// GradeBook.cpp

/*

GradeBook class member function definitions from prototypes in "GradeBook.h"

*/

//#includes
#include <iostream>
#include "GradeBook.h"

//STDLib functions
using std::cout;
using std::endl;
using std::string;

//Constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string courseName, string instructorName)
{
	setCourseName(courseName); // Call set function to set courseName
	setCourseInstructor(instructorName); // Call set function to set the course instructor's name
}

//Set the course name
void GradeBook::setCourseName(string name)
{
	//If name has fewer than 25 characters, store the courseName in the object
	if (name.length() <= 25) 
	{
		courseName = name;  
	}

	//If name has more than 25 characters, store the first 25 characters entered
	//and show a warning message
	if (name.length() > 25) 
	{
		courseName = name.substr(0, 25); 

		cout << "\nName \"" << name << "\" exceeds maximum length (25).\n"
			<< "Limiting courseName to first 25 characters." << endl;
	}	
}

//Get the course name
string GradeBook::getCourseName()
{
	return courseName;
}

//Set the course instructor's name
void GradeBook::setCourseInstructor(string name)
{
	instructorName = name; 
}

//Get the course instructor's name
string GradeBook::getCourseInstructor()
{
	return instructorName; 
}

//Display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
	//Call getCourseName to get the courseName
	cout << "\nWelcome to the Grade Book for\n" << getCourseName()
		<< "!" << endl;
	cout << "This course is presented by: " << getCourseInstructor() << endl;
}
