//Invoice.cpp

/*

Invoice class member function definitions from prototypes in "Invoice.h"

*/

//#includes
#include <iostream>
#include "Invoice.h"

//STDLib functions
using std::cout;
using std::cin;
using std::endl;
using std::string;

//Constructor initializes the four data members (part number, part description, quantity, and price)
Invoice::Invoice()
{
	partNumber = "Undefined";
	partDescription = "Undefined";
	itemQuantity = 0;
	pricePerItem = 0;
}

//Get the part number
string Invoice::getPartNumber()
{
	return partNumber;
}

//Set the part number
void Invoice::setPartNumber(string partNum)
{
	partNumber = partNum;
}

//Get part description
string Invoice::getPartDescription()
{
	return partDescription;
}

//Set part description
void Invoice::setPartDescription(string partDesc)
{
	partDescription = partDesc;
}

//Get item quantity
int Invoice::getItemQuantity()
{
	return itemQuantity;
}

//If item quantity is greater than or equal to zero,
//set it to user input. Otherwise set it to zero.
void Invoice::setItemQuantity(int quantity)
{
	if (quantity >= 0)
	{
		itemQuantity = quantity;
	}
	else
	{
		itemQuantity = 0;
	}
}

//Get price per item
int Invoice::getPricePerItem()
{
	return pricePerItem;
}

//If price per item is greater than or equal to zero,
//set it to user input. Otherwise set it to zero.
void Invoice::setPricePerItem(int price)
{
	if (price >= 0)
	{
		pricePerItem = price;
	}
	else
	{
		pricePerItem = 0;
	}
}

//Returns the total invoice amount
int Invoice::getInvoiceAmount()
{
	return (itemQuantity * pricePerItem);
}