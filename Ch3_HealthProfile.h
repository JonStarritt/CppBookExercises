// HealthProfile.h

/*

HealthProfile class public interface for functions defined in "HealthProfile.cpp"

*/

//#includes
#include<string>

//STDLib functions
using std::string;

class HealthProfile
{
public:
	//HealthProfile class member function prototypes
	//Constructor initializes the data members : first name, last name, gender, birth day, birth month, birth year,
	//height(in inches) and weight(in pounds)
	HealthProfile(string, string, string, int, int, int, int, int);
	
	string getFirstName(); //Returns the first name
	void setFirstName(string); //Sets the first name

	string getLastName(); //Returns the last name
	void setLastName(string); //Sets the last name

	string getGender(); //Returns the gender
	void setGender(string); //Sets the gender

	int getBDay(); //Returns the birth day
	void setBDay(int); //Sets the birth day

	int getBMonth(); //Returns the birth month
	void setBMonth(int); //Sets the birth month

	int getBYear(); //Returns the birth year
	void setBYear(int); //Sets the birth year

	int getHeight(); //Returns the height in inches
	void setHeight(int); //Sets the height in inches

	int getWeight(); //Returns the weight in pounds
	void setWeight(int); //Sets the weight in pounds	
	
	//Void return type because it handles printing data to the screen
	void getAge(); //Calculate age based on birth date and current date	

	int getMaximumHeartRate(); //Calculate amximum heart rate according to the American Heart Association's formula

	//Void return type because it handles printing data to the screen
	void getTargetHeartRate(); //Calculate target heart rate average according to the American Heart Association's formula

	//Void return type because it handles printing data to the screen
	void getBMI(); //Calculate the body mass index

private:
	//HealthProfile class data members
	string firstName; //First name
	string lastName; //Last name
	string gender; //Gender
	int birthMonth; //Birth month
	int birthDay; //Birth day
	int birthYear; //Birth year
	int heightInches; //Height in inches
	int weightPounds; //Weight in pounds
};