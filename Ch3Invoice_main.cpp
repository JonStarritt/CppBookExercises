//main.cpp

/*

Chapter 3 Exercise
3.13 Invoice Class

Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at the store.
An Invoice should include four data members -- a part number (type string), a part description (type string),
a quantity of the item being purchased (type int) and a price per item (type int). 

[Note: In subsequent chapters, we'll use numbers that contain decimal points (e.g., 2.75) 
-- called floating-point values -- to represent dollar amounts.]

Your class should have a constructor that initializes the four data members. Provide a set and get function for each
data member. In addition, provide a member function named getInvoiceAmount that calculates the invoice amount
(i.e., multiplies the quantity by the price per item), then returns the amount as an int value. If the quantity
is not positive, it should be set to 0. If the price per item is not positive, it should be set to 0.

Write a test program that demonstrates class Invoice's capabilities.

*/

//#includes
#include <iostream>
#include "Invoice.h"
#include <string>

//STDLib functions
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	//Var to keep the output window open on Windows until the user enters a character
	char ExitChar;
	
	//Create an Invoice class object
	Invoice invoice1;

	//Vars for user input
	string partNum = "Undefined";
	string partDesc = "Undefined";
	int quantity = 0;
	int price = 0;

	//Prompt the user for a part number and set the data member
	cout << "Please enter the part number: ";
	cin >> partNum;
	invoice1.setPartNumber(partNum);

	//Prompt the user for a part descrition and set the data member
	cout << "Please enter the part description: ";
	cin >> partDesc;
	invoice1.setPartDescription(partDesc);

	//Prompt the user for an item quantity and set the data member
	cout << "Please enter the item quantity: ";
	cin >> quantity;
	invoice1.setItemQuantity(quantity);

	//Prompt the user for an item price and set the data member
	cout << "Please enter the item price: $";
	cin >> price;
	invoice1.setPricePerItem(price);
	
	//Output a fancy display of the invoice information,
	//calling the data member get functions
	cout << "\n\n*********************************";
	cout << "\nPart Number: " << invoice1.getPartNumber();
	cout << "\nPart Description: " << invoice1.getPartDescription();
	cout << "\nItem quantity: " << invoice1.getItemQuantity();
	cout << "\nItem price: $" << invoice1.getPricePerItem();
	cout << "\nInvoice total: $" << invoice1.getInvoiceAmount();
	cout << "\n*********************************\n\n";
	
	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}