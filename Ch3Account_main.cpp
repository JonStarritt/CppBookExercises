//main.cpp

/*

Chapter 3 Exercise
3.12 Account Class

Create an account class that a bank might use to represent customer's bank
accounts. Include a data member of type int to represent the account balance.

[Note: In subsequent chapters, we'll use numbers that contain decimal points
(e.g., 2.75) -- called floating-point values -- to represent dollar amounts.]

Provide a constructor that receives an initial balance and use it to initialize
the data member. The constructor should validate the initial balance to ensure
that it's greater than or equal to 0. If not, set the balance to 0 and display
an error message indicating that the initial balance was invalid. Provide three
member functions. Member function credit should add an amount to the current
balance. Member function debit should withdraw money from the account and ensure
that the debit amount does not exceed the account's balance. If it does, the balance
should be left unchanged and the function should print a message indicating "Debit
amount exceeded account balance." Member function getBalance should return the
current balance. 

Create a program that creates two Account objects and tests the 
member functions of class Account.

*/

//#includes
#include <iostream>
#include <string> //Needed for the stream insertion operator to input strings
#include "Account.h"

//STDLIB functions
using std::cout;
using std::cin;
using std::endl;
using std::string; //Needed for string data type for user commands

int main()
{
	//Var to keep the output window open on Windows until the user enters a character
	char ExitChar;

	//Var to determine which transaction to perform
	string commandOps = "balance";
	
	//Vars for user input
	int initialBalance = 0;
	int whichAccount = 0;
	int creditAmount = 0;
	int debitAmount = 0;	
	
	//Get user input for initial Account balance of first class object,
	//then create the class object
	cout << "Please enter the initial balance for Member Account 1: $";
	cin >> initialBalance;

	Account memberAccount1(initialBalance);

	//Get user input for initial Account balance of second class object,
	//then create the class object
	cout << "Please enter the initial balance for Member Account 2: $";
	cin >> initialBalance;

	Account memberAccount2(initialBalance);

	//Get user input for which account to perform an operation
	cout << "\nPlease select an account to perform a transaction (1 or 2): ";
	cin >> whichAccount;

	//Get user input for transaction type (credit or debit)
	cout << "\nPlease enter a transaction type (credit or debit): ";
	cin >> commandOps;

	//If the user selected the first class object
	if (whichAccount == 1)
	{		
		//If the user chose credit, get the credit amount, output the initial balance,
		//call the creditAccount function, and show the balance after the transaction
		if (commandOps == "credit")
		{
			cout << "Please enter the amount to credit the account: $";
			cin >> creditAmount;
			
			cout << "\nInitial balance is: $" << memberAccount1.getAccountBalance();

			memberAccount1.creditAccount(creditAmount);

			cout << "\nBalance after transaction is: $" << memberAccount1.getAccountBalance() << endl;
		}

		//If the user chose debit, get the debit amount, output the initial balance,
		//call the debitAccount function, show the balance after the transaction
		if (commandOps == "debit")
		{
			cout << "Please enter the amount to debit the account: $";
			cin >> debitAmount;
			
			cout << "\nInitial balance is: $" << memberAccount1.getAccountBalance();

			memberAccount1.debitAccount(debitAmount);

			cout << "\nBalance after transaction is: $" << memberAccount1.getAccountBalance() << endl;
		}
	}

	//If the user selected the second class object
	if (whichAccount == 2)
	{		
		//If the user chose credit, get the credit amount, output the initial balance,
		//call the creditAccount function, and show the balance after the transaction
		if (commandOps == "credit")
		{
			cout << "Please enter the amount to credit the account: $";
			cin >> creditAmount;
			
			cout << "\nInitial balance is: $" << memberAccount2.getAccountBalance();

			memberAccount2.creditAccount(creditAmount);

			cout << "\nBalance after transaction is: $" << memberAccount2.getAccountBalance() << endl;

		}

		//If the user chose debit, get the debit amount, output the initial balance,
		//call the debitAccount function, show the balance after the transaction
		if (commandOps == "debit")
		{
			cout << "Please enter the amount to debit the account: $";
			cin >> debitAmount;
			
			cout << "\nInitial balance is: $" << memberAccount2.getAccountBalance();

			memberAccount2.debitAccount(debitAmount);

			cout << "\nBalance after transaction is: $" << memberAccount2.getAccountBalance() << endl;
		}
	}
	
	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}