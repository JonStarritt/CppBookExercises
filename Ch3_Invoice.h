//Invoice.h

/*

Invoice class public interface for functions defined in "Invoice.cpp"

*/

//STDLib functions
using std::string;

class Invoice
{
public:
	//Invoice class member function prototypes
	Invoice(); //Constructor takes no parameters

	string getPartNumber(); //Returns the part number
	void setPartNumber(string); //Sets the part number

	string getPartDescription(); //Returns the part description
	void setPartDescription(string); //Sets the part description

	int getItemQuantity(); //Returns the item quantity
	void setItemQuantity(int); //Sets the item quantity

	int getPricePerItem(); //Returns the item price
	void setPricePerItem(int); //Sets the item price

	int getInvoiceAmount(); //Returns the total invoice amoun

private:
	//Invoice class data members
	string partNumber; //Part number
	string partDescription; //Part description
	int itemQuantity; //Item quantity
	int pricePerItem; //Price per item
};