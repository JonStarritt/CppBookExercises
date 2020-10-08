// Employee.h

/*

Employee class public interface for functions defined in "Employee.cpp"

*/

//#includes
#include<string>

//STDLib functions
using std::string;

class Employee
{
public:
	//Account class member function prototypes
	Employee(); //Constructor, takes no parameters

	string getFirstName(); //Returns the first name
	void setFirstName(string); //Sets the first name

	string getLastName(); //Returns the last name
	void setLastName(string); //Sets the last name

	int getSalary(); //Returns the salary
	void setMonthlySalary(int); //Sets the salary


private:
	//Employee class data members
	string firstName; //First name
	string lastName; //Last name
	int monthlySalary; //Monthly salary
};
