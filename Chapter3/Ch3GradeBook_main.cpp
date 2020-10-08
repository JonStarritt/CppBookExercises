//main.cpp

/*

Chapter 3 Exercise
3.11 Modifying Class GradeBook

Modify class GradeBook (Figs. 3.11-3.12) as follows:
	A) Include a second string data member that represents the course instructor's name.
	B) Provide a set function to change the inctructor's name and a get function to retrieve it.
	C) Modify the constructor to specify course name and instructor name parameters.
	D) Modify function displayMessage to output the welcome message and course name,
		then the string "This course is presented by: " followed by the instructor's name.

*/

//#includes
#include <iostream>
#include "GradeBook.h"

//STDLib functions
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
	//Var to keep the output window open on Windows until the user enters a character
	char ExitChar;

	//Vars to store user input
	string gB1Name;
	string gB2Name;
	string gB1Instructor;
	string gB2Instructor;
	
	//Create two GradeBook objects
	GradeBook gradeBook1("Course 1 GradeBook", "Instructor");
	GradeBook gradeBook2("Course 2 GradeBook", "Instructor");

	//Get user input for GradeBook course and set the data member
	cout << "Please enter the course name for the first GradeBook: ";
	getline(cin, gB1Name);
	gradeBook1.setCourseName(gB1Name);

	//Get user input for GradeBook instructor and set the data member
	cout << "\nPlease enter the instructor's name for the first GradeBook: ";
	getline(cin, gB1Instructor);
	gradeBook1.setCourseInstructor(gB1Instructor);

	//Get user input for GradeBook course and set the data member
	cout << "\nPlease enter the course name for the second GradeBook: ";
	getline(cin, gB2Name);
	gradeBook2.setCourseName(gB2Name);

	//Get user input for GradeBook instructor and set the data member
	cout << "\nPlease enter the instructor's name for the second GradeBook: ";
	getline(cin, gB2Instructor);
	gradeBook2.setCourseInstructor(gB2Instructor);

	//Call displayMessage from the GradeBook class definition
	gradeBook1.displayMessage();
	cout << endl;
	gradeBook2.displayMessage();
	cout << endl;

	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}
