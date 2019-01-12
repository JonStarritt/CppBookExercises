//Account.cpp

/*

Account class member function definitions from prototypes in "Account.h"

*/

//#includes
#include <iostream>
#include "Account.h"

//STDLIB functions
using std::cout;
using std::cin;
using std::endl;

//Constructor initializes the account with an initial balance
Account::Account(int initialBalance)
{
	//If initial balance is greater than or equal to zero, set the account balance to user input
	if (initialBalance >= 0) 
	{
		accountBalance = initialBalance; 
	}

	//If initial balance is less than zero, set the account balance to zero and show a warning
	if (initialBalance < 0) 
	{
		accountBalance = 0; 

		cout << "\nThe initial account balance requested is invalid.\n"
			<< "Setting the account balance to 0.\n" << endl;
	}
}

//Credit the account or show an error if a negative number is entered
void Account::creditAccount(int creditAmount)
{
	//If the credit amount is negative, show an error and leave the balance unchanged
	if (creditAmount < 0)
	{
		cout << "\nUnable to credit a negative amount to an account.\n"
			<< "Use the debit transaction type to withdraw money from an account.\n";
	}

	//If the credit amount is greater than or equal to zero
	if (creditAmount >= 0)
	{
		//Add the credit amount to the account balance
		accountBalance = accountBalance + creditAmount;
	}	
}

//Debit the account or show an error if not possible
void Account::debitAccount(int debitAmount)
{
	//If the debit amount is greater than the account balance,
	//show a warning and leave the account balance unchanged
	if (debitAmount > accountBalance)
	{
		cout << "\nDebit amount exceeded account balance.\n";
	}
	
	//If the debit amount is less than or equal to the account balance, 
	//subtract the debit amount from the account balance
	if (debitAmount <= accountBalance)
	{
		accountBalance = accountBalance - debitAmount;

		//If the debit amount is less than zero, show a warning and leave the balance unchanged
		if (debitAmount < 0)
		{
			cout << "\nUnable to debit a negative amount from an account.\n"
				<< "Use the credit transaction type to add money to an account.\n";

			//Add the debit amount back to the balance to leave it unchanged
			accountBalance = accountBalance + debitAmount;
		}		
	}		
}

//Return the current account balance
int Account::getAccountBalance()
{
	return accountBalance;
}