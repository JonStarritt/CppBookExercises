//Date.h

/*

Date class public interface for functions defined in "Date.cpp"

*/

class Date
{
public:
	//Date class member function prototypes
	Date(int month, int day, int year); //Constructor that initializes the day, month, and year

	int getMonth(); //Returns the month
	void setMonth(int); //Sets the month

	int getDay(); //Returns the day
	void setDay(int); //Sets the day

	int getYear(); //Returns the year
	void setYear(int); //Sets the year

	void displayDate(); //Outputs the date to the screen

private:
	//Date class data members
	int dMonth; //Month number
	int dDay; //Day number
	int dYear; //Year number
};
