//HeartRates.h

/*

HeartRates class public interface for functions defined in "HeartRates.cpp"

*/

//#includes
#include<string>

//STDLIB functions
using std::string;

class HeartRates
{
public:
	
	//HeartRates class member function prototypes
	HeartRates(string, string, int, int, int); //Constructor takes: first name, last name, birth day, birth month, birth year
	
	string getFirstName(); //Returns the first name
	void setFirstName(string); //Sets the first name
	
	string getLastName(); //Returns the last name
	void setLastName(string); //Sets the last name
	
	int getBDay(); //Returns the birth day
	void setBDay(int); //Sets the birth day
	
	int getBMonth(); //Returns the birth month
	void setBMonth(int); //Sets the birth month
	
	int getBYear(); //Returns the birth year
	void setBYear(int); //Sets the birth year
	
	void getAge(); //Calculate age based on birth date and current date
	               //Void return type because it handles printing data to the screen
	
	int getMaximumHeartRate(); //Calculate amximum heart rate according to the American Heart Association's formula
	
	int getTargetHeartRate(); //Calculate target heart rate average according to the American Heart Association's formula

private:
	//HeartRates class data members
	string firstName; //User's first name
	string lastName; //User's last name
	int bDay; //User's birth day
	int bMonth; //User's birth month
	int bYear; //User's birth year
};
