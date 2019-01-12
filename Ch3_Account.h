//Account.h

/*

Account class public interface for functions defined in "Account.cpp"

*/

class Account
{
public:
	//Account class member function prototypes
	Account(int); //Constructor that initializes account balance

	void creditAccount(int); //Adds the user input amount to the account
	void debitAccount(int); //Subtracts the user input amount from the account
	int getAccountBalance(); //Returns the balance of the account

private:
	//Account class data members
	int accountBalance; //Balance of the account	
};