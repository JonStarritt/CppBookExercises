//GradeBook.h

/*

GradeBook class public interface for functions defined in "GradeBook.cpp"

*/

//#includes
#include <string>

//STDLib functions
using std::string;

class GradeBook
{
public:
	//GradeBook class member function prototypes
	GradeBook(string, string); //Constructor that initializes courseName and course instructor's name

	void setCourseName(string); //Sets the course name
	string getCourseName(); //Gets the course name

	void setCourseInstructor(string); //Sets the course instructor's name
	string getCourseInstructor(); //Gets the course instructor's name

	void displayMessage(); //Displays a welcome message

private:
	//GradeBook class data members
	string courseName; //Course name for this gradeBook
	string instructorName; //Course instructor's name
};
